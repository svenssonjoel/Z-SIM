

all:
	echo "** Buidling LispBM **" 
	cd ./LispBM && PLATFORM=stm32f4 make
	echo "** Building Z-SIM Firmware **"
	make -f Makefile2


clean:
	cd ./LispBM && PLATFORM=stm32f4 make clean
	make -f Makefile2 clean 
