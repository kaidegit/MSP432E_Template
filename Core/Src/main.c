#include "ti/devices/msp432e4/driverlib/driverlib.h"

int main() {
    volatile uint32_t ui32Loop;
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_GPION)) {
    }
    GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_0);
    while (1) {
        //
        // Turn on the LED.
        //
        GPIOPinWrite(GPIO_PORTN_BASE, GPIO_PIN_0, GPIO_PIN_0);

        //
        // Delay for a bit.
        //
        for (ui32Loop = 0; ui32Loop < 200000; ui32Loop++) {
        }

        //
        // Turn off the LED.
        //
        GPIOPinWrite(GPIO_PORTN_BASE, GPIO_PIN_0, 0x0);

        //
        // Delay for a bit.
        //
        for (ui32Loop = 0; ui32Loop < 200000; ui32Loop++) {
        }
    }
}