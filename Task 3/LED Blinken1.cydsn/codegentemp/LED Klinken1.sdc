# THIS FILE IS AUTOMATICALLY GENERATED
# Project: U:\Documents\PSoC Creator\Versuch 3\LED Klinken1.cydsn\LED Klinken1.cyprj
# Date: Wed, 08 Jul 2020 10:05:02 GMT
#set_units -time ns
create_clock -name {Clock_1(routed)} -period 1000000000 -waveform {0 500000000} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 24000001 48000001} [list [get_pins {ClockBlock/dclk_glb_0}]]


# Component constraints for U:\Documents\PSoC Creator\Versuch 3\LED Klinken1.cydsn\TopDesign\TopDesign.cysch
# Project: U:\Documents\PSoC Creator\Versuch 3\LED Klinken1.cydsn\LED Klinken1.cyprj
# Date: Wed, 08 Jul 2020 10:04:56 GMT
