# THIS FILE IS AUTOMATICALLY GENERATED
# Project: \\sccfs.scc.kit.edu\Stud-Home\Documents\PSoC Creator\Versuch 4\PGA test.cydsn\PGA test.cyprj
# Date: Fri, 10 Jul 2020 07:30:11 GMT
#set_units -time ns
create_clock -name {CyXTAL} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/xtal}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]


# Component constraints for \\sccfs.scc.kit.edu\Stud-Home\Documents\PSoC Creator\Versuch 4\PGA test.cydsn\TopDesign\TopDesign.cysch
# Project: \\sccfs.scc.kit.edu\Stud-Home\Documents\PSoC Creator\Versuch 4\PGA test.cydsn\PGA test.cyprj
# Date: Fri, 10 Jul 2020 07:30:02 GMT
