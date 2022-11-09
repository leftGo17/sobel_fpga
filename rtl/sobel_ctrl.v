`timescale 1ns/1ns
 
module sobel_ctrl
#(
    parameter   matrix_row    =   10'd100         ,   //图片长度
    parameter   matrix_col    =   10'd100            //图片宽度
)
(
    input       wire        sys_clk,
    input       wire        sys_rst,
    input       wire  [7:0] pi_data,
    input       wire        pi_flag,
    
    output      reg         po_flag,
    output      reg   [7:0] po_data
);




wire [7:0]  data_out1;
wire [7:0]  data_out2;


localparam   THRESHOLD   =   8'b000_011_00   ;   //比较阈值
localparam   BLACK       =   8'b0000_0000    ,   //黑色
             WHITE       =   8'b1111_1111    ;   //白色

reg  [7:0]  cnt_row;
reg  [7:0]  cnt_col;
//标记行和列 row为行，也就是图片的长
localparam max_row = matrix_row - 1'd1;
localparam max_col = matrix_col - 1'd1;
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        cnt_col <= 8'd0;
    else
        if (pi_flag == 1'b1)
            if(cnt_col == max_col)
                cnt_col <= 8'd0;
            else
                cnt_col <= cnt_col + 8'd1;

always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        cnt_row <= 8'd0;
    else
        if (pi_flag == 1'b1)
            if (cnt_row == max_row && cnt_col == max_col)
                cnt_row <= 8'd0;
            else if (cnt_col == max_col)
                cnt_row <= cnt_row + 8'd1;
//对fifo1写端口使能
reg         wr_en1 ;
reg  [7:0]  data_in1;
reg         wr_en2;
reg  [7:0]  data_in2;

always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        wr_en1 <= 1'b0;
    else
        if (cnt_row == 8'd0 && pi_flag == 1'b1)
            wr_en1 <= 1'b1;
        else if (cnt_row > 8'd1 && wr_en1_flag == 1'b1)
            wr_en1 <= 1'b1;
        else
            wr_en1 <= 1'b0;
//同步写数据
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        data_in1 <= 8'd0;
    else
        if (cnt_row == 8'd0 && pi_flag == 1'b1)
            data_in1 <= pi_data;
        else if (cnt_row > 8'd1 && wr_en1_flag == 1'b1)
            data_in1 <= data_out2;
        else
            data_in1 <= data_in1;
            
//对fifo2写端口使能
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        wr_en2 <= 1'b0;
    else
        if (cnt_row > 8'd0 && cnt_row < max_row && pi_flag == 1'b1)
            wr_en2 <= 1'b1;
        else
            wr_en2 <= 1'b0;
//同步写数据
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        data_in2 <= 8'd0;
    else
        if (cnt_row > 8'd0 && cnt_row < max_row && pi_flag == 1'b1)
            data_in2 <= pi_data;
        else
            data_in2 <= data_in2;
//对读端口使能，当第二行数据来了之后，每次都要读出来，读使能滞后flag一个周期
reg         rd_en;
reg         wr_en1_flag;
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        rd_en <= 1'b0;
    else
        if (cnt_row > 'd1 && pi_flag == 1'b1)
            rd_en <= 1'b1;
        else
            rd_en <= 1'b0;
//用来解决，输出的信号滞后读信号一个时钟的问题
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        wr_en1_flag <= 1'b0;
    else
        if ((cnt_row > 'd1 && cnt_row < max_row && rd_en == 1'b1) || (cnt_row == max_row && cnt_col == 1'd0 && rd_en == 1'b1))
            wr_en1_flag <= 1'b1;
        else
            wr_en1_flag <= 1'b0;


//用来解决数据比读使能慢一拍，当检测到rd_en_reg1为高电平，就可以得到数据        
reg     rd_en_reg1;

always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        rd_en_reg1 <= 1'b0;
    else
        rd_en_reg1 <= rd_en;


reg     [7:0]       a1,a2,a3,b1,b2,b3,c1,c2,c3;
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        begin
        a3 <= 8'd0;
        b3 <= 8'd0;
        c3 <= 8'd0;
        end
    else    
        if (rd_en_reg1 == 1'b1)
            begin
            a3 <= data_out1;
            b3 <= data_out2;
            c3 <= pi_data;
            end
        
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        begin
        a2 <= 8'd0;
        b2 <= 8'd0;
        c2 <= 8'd0;
        end
    else    
        if (rd_en_reg1 == 1'b1)
            begin
            a2 <= a3;
            b2 <= b3;
            c2 <= c3;
            end

always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        begin
        a1 <= 8'd0;
        b1 <= 8'd0;
        c1 <= 8'd0;
        end
    else    
        if (rd_en_reg1 == 1'b1)
            begin
            a1 <= a2;
            b1 <= b2;
            c1 <= c2;
            end
//得到a1a2之后，滞后一个周期算gx gy
reg     can_sobel;
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        can_sobel <= 1'b0;
    else
        if (rd_en_reg1 == 1'b1 && (cnt_col > 8'd2 || cnt_col == 8'd0))
            can_sobel <= 1'b1;
        else
            can_sobel <= 1'b0;

reg [10:0] gx,gy;


always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        gx <= 11'd0;
    else
        if (can_sobel == 1'b1)
            gx <= a3 - a1 + ((b3 - b1) << 1) + c3 - c1;
        else
            gx <= gx;
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        gy <= 11'd0;
    else
        if (can_sobel == 1'b1)
            gy <= a1 - c1 + ((a2 - c2) << 1) + a3 -c3;
        else
            gy <= gy;
//得到gx,gy之后，滞后一个周期算gxx，gyy(也就是绝对值)
reg can_sobel_gxx;
reg [9:0]gxx,gyy;
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        can_sobel_gxx <= 1'b0;
    else
        if (can_sobel == 1'b1)
            can_sobel_gxx <= 1'b1;
        else
            can_sobel_gxx <= 1'b0;

always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        gxx <= 10'd0;
    else
        if (can_sobel_gxx == 1'b1)
            if (gx[10] == 1'b1)
                gxx <= ~gx[9:0] + 1'b1;
            else
                gxx <= gx[9:0];

always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        gyy <= 10'd0;
    else
        if (can_sobel_gxx == 1'b1)
            if (gy[10] == 1'b1)
                gyy <= ~gy[9:0] + 1'b1;
            else
                gyy <= gy[9:0]; 
//得到绝对值，算gxy
reg     can_sobel_gxy;
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        can_sobel_gxy <= 1'b0;
    else
        if (can_sobel_gxx == 1'b1)
            can_sobel_gxy <= 1'b1;
        else
            can_sobel_gxy <= 1'b0;
reg [10:0] gxy;                
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        gxy <= 12'd0;
    else
        if (can_sobel_gxy == 1'b1)
            gxy <= gxx + gyy;
//得到 gxy之后，滞后一个周期来比较
reg can_sobel_campare;
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        can_sobel_campare <= 1'b0;
    else
        if (can_sobel_gxy == 1'b1)
            can_sobel_campare <= 1'b1;
        else
            can_sobel_campare <= 1'b0;
//对结果进行赋值
always @(posedge sys_clk)
    if(sys_rst == 1'b1)
        po_flag <= 1'b0;
    else
        if (can_sobel_campare == 1'b1)
            po_flag <= 1'b1;
        else
            po_flag <= 1'b0;
always @(posedge sys_clk)
    if (sys_rst == 1'b1)
        po_data <= 8'd0;
    else
        if (can_sobel_campare == 1'b1)
            if (gxy >= THRESHOLD)
                po_data <= BLACK;
            else
                po_data <= WHITE;
        else
            po_data <= po_data;


wire full1,full2,empty1,empty2;
data_fifo fifo_inst_1 (
  .clk      (sys_clk),      // input wire clk
  .srst     (sys_rst),    // input wire srst
  .din      (data_in1),      // input wire [7 : 0] din
  .wr_en    (wr_en1),  // input wire wr_en
  .rd_en    (rd_en),  // input wire rd_en
  .dout     (data_out1),    // output wire [7 : 0] dout
  .full     (full1),    // output wire full
  .empty    (empty1)  // output wire empty
);
data_fifo fifo_inst_2 (
  .clk      (sys_clk),      // input wire clk
  .srst     (sys_rst),    // input wire srst
  .din      (data_in2),      // input wire [7 : 0] din
  .wr_en    (wr_en2),  // input wire wr_en
  .rd_en    (rd_en),  // input wire rd_en
  .dout     (data_out2),    // output wire [7 : 0] dout
  .full     (full2),    // output wire full
  .empty    (empty2)  // output wire empty
);
                
endmodule