Ubuntu Setup
====================


    sudo apt-get install gcc-avr binutils-avr gdb-avr avr-libc avrdude dfu-programmer


Basic process:

	;; first time:
	git checkout -b octagon --track origin/octagon

	;; or this:
    git co octagon
	
	;; then:
    cd keyboard/octagon
    make
    ;; plug in board in flip mode
    dfu-programmer atmega32u4 erase
    dfu-programmer atmega32u4 flash octagon_lufa.hex
