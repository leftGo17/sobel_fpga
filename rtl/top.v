`timescale  1ns/1ns


module  top
(
    input   wire    sys_clk     ,   //系统时钟50MHz
    input   wire    sys_rst   ,   //全局复位
    input   wire    rx          ,   //串口接收数据

    output  wire    tx              //串口发送数据
);

parameter   UART_BPS    =   26'd10_000_000       ,   //比特率
            CLK_FREQ    =   26'd50_000_000  ;   //时钟频率

//wire  define
wire    [7:0]   po_data;
wire            po_flag;
wire    [7:0]   pi_data;
wire            pi_flag;
assign  sys_rst_n = ~sys_rst;

uart_rx
#(
    .UART_BPS    (UART_BPS  ),  //串口波特率
    .CLK_FREQ    (CLK_FREQ  )   //时钟频率
)
uart_rx_inst
(
    .sys_clk    (sys_clk    ),  //input             sys_clk
    .sys_rst_n  (sys_rst_n  ),  //input             sys_rst_n
    .rx         (rx         ),  //input             rx
            
    .po_data    (po_data    ),  //output    [7:0]   po_data
    .po_flag    (po_flag    )   //output            po_flag
);

sobel_ctrl
#(
    .matrix_row (8'd4),
    .matrix_col (8'd4)
)
sobel_ctrl_inst_1
(
    .sys_clk    (sys_clk),
    .sys_rst    (sys_rst_n),
    .pi_data    (po_data),
    .pi_flag    (po_flag),

    .po_flag    (pi_flag),
    .po_data    (pi_data)
);
//------------------------ uart_tx_inst ------------------------
uart_tx
#(
    .UART_BPS    (UART_BPS  ),  //串口波特率
    .CLK_FREQ    (CLK_FREQ  )   //时钟频率
)
uart_tx_inst
(
    .sys_clk    (sys_clk    ),  //input             sys_clk
    .sys_rst_n  (sys_rst_n  ),  //input             sys_rst_n
    .pi_data    (pi_data    ),  //input     [7:0]   pi_data
    .pi_flag    (pi_flag    ),  //input             pi_flag
                
    .tx         (tx         )   //output            tx
);

endmodule
