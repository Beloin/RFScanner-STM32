# RF Scanner
Application that uses `NRF24L01` module to "scan" local area for pattern signal.

# Code Structue:

Will be used `void app_main()` structure in order to detach concerns, keep _clean code_ and don't interfere with auto generated code.

1. Can be followed: https://www.e-tinkers.com/2022/04/a-better-way-to-setup-stm32cubeide/



## How to use Clion with STM32

Following [Clion](https://www.jetbrains.com/help/clion/embedded-development.html#open-project) Site.

1. Download GNU ARM toolchain:
    - https://developer.arm.com/downloads/-/gnu-rm

1. Install it and put in your ~/.profile
1. Install OpenOCD:
    - On chipdebugger for Clion debugger
    - can be installed with `sudo pacman -S openocd`


# References

1. [Guide to NRF24L01 (PT-BR)](https://blog.eletrogate.com/guia-definitivo-do-modulo-wireless-nrf24l01-2/)
1. [Sample STM32 + NRF24L01 github project](https://github.com/gemesa/stm32-rf-scanner)
1. [Measure External Frequencies with STM32](https://www.engineersgarage.com/how-to-use-an-stm32-microcontroller-to-measure-external-signal-frequencies/)

