

all:
	echo "** Buidling LispBM **" 
	cd ./LispBM && PLATFORM=stm32f4 make
	echo "** Building Z-SIM Firmware **"
	make -f Makefile2


flash:
	openocd -f ./stm32f407g.cfg -c "reset_config trst_only combined" -c "program build/ZSIM_FIRMWARE.elf verify reset exit"


clean:
	cd ./LispBM && PLATFORM=stm32f4 make clean
	make -f Makefile2 clean 
