cmd_drivers/gpio/built-in.o :=  /opt/toolchains/arm-eabi-4.4.3/bin/arm-eabi-ld -EL    -r -o drivers/gpio/built-in.o drivers/gpio/gpiolib.o drivers/gpio/pm8xxx-gpio.o drivers/gpio/pm8xxx-mpp.o 
