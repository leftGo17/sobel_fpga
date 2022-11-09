`timescale  1ns/1ns


module  tb_sobel();


wire    tx          ;


reg     sys_clk     ;
reg     sys_rst_n   ;
reg     rx          ;

initial begin
    sys_clk    = 1'b1;
    sys_rst_n <= 1'b0;
    rx        <= 1'b1;
    #20;
    sys_rst_n <= 1'b1;
end


initial begin
    #200
    rx_byte();
end


always #10 sys_clk = ~sys_clk;


task    rx_byte();  
    integer j;
    for(j=0; j<16; j=j+1)    
        rx_bit(j);
endtask


task    rx_bit(
    input   [7:0]   data
);
    integer i;
    for(i=0; i<10; i=i+1)   begin
        case(i)
            0: rx <= 1'b0;
            1: rx <= data[0];
            2: rx <= data[1];
            3: rx <= data[2];
            4: rx <= data[3];
            5: rx <= data[4];
            6: rx <= data[5];
            7: rx <= data[6];
            8: rx <= data[7];
            9: rx <= 1'b1;
        endcase
        #(5*20); 
    end
endtask

top   top_inst
(
    .sys_clk    (sys_clk    ),  //input         sys_clk
    .sys_rst    (sys_rst_n  ),  //input         sys_rst_n
    .rx         (rx         ),  //input         rx

    .tx         (tx         )   //output        tx
);

endmodule


