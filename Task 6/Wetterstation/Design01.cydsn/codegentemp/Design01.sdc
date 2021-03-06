# THIS FILE IS AUTOMATICALLY GENERATED
# Project: U:\Documents\PSoC Creator\Wetterstation\Design01.cydsn\Design01.cyprj
# Date: Tue, 14 Jul 2020 13:03:45 GMT
#set_units -time ns
create_clock -name {CyXTAL} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/xtal}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 3 7} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {ADC_2_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 33 67} -nominal_period 999.99999999999989 [list [get_pins {ClockBlock/aclk_glb_0}]]
create_generated_clock -name {ADC_1_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 33 67} -nominal_period 999.99999999999989 [list [get_pins {ClockBlock/aclk_glb_1}]]
create_generated_clock -name {UART_1_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 431 861} [list [get_pins {ClockBlock/dclk_glb_2}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/clk_sync}] -edges {1 353 705} [list [get_pins {ClockBlock/dclk_glb_1}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for U:\Documents\PSoC Creator\Wetterstation\Design01.cydsn\TopDesign\TopDesign.cysch
# Project: U:\Documents\PSoC Creator\Wetterstation\Design01.cydsn\Design01.cyprj
# Date: Tue, 14 Jul 2020 13:03:09 GMT
