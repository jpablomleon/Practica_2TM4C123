#include "lib/include.h"

extern void Configurar_GPIO(void)
{
    SYSCTL->RCGCGPIO |= (1<<1) | (1<<4);      // B E
    GPIOE->DIR &= ~0x03;   // inputs on PE1-0
    GPIOE->DEN |= 0x03;    // enable digital on PE1-0
    GPIOB->DIR |= 0x3F;    // outputs on PB5-0
    GPIOB->DEN |= 0x3F;    // enable digital on PB5-0
}
