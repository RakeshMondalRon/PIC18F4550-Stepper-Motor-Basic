
/*     ******* Stepper Motor Driver PIC18F4550 ********
             ----www.rakeshmondal.info-----
 Source Code 1
 *  Author: Rakesh Mondal
 * This Software is free software: you free to redistribute it or
 * modify the code way you wish. This software is for educational purpose only.
 *
 * The author will not be responsible for any loss or liability whatsoever.
 * In any circumstances www.rakeshmondal.info shall not be liable for any
 * special, incidental or consequential damages, for any reason whatsoever.
 * No guarantee or warranty whatsoever. Free to share
/*--------------------------------------------------------------------*/

#include <p18f4550.h>
#include "headerzz.h";
#define _XTAL_FREQ 2000000

void main(void)
{
    TRISDbits.TRISD0=0;   /// Configuring Port D to output
    TRISDbits.TRISD1=0;   // From pins RD4 to RD7
    TRISDbits.TRISD2=0;
    TRISDbits.TRISD3=0;

    while(1)
    {
        LATDbits.LATD0=1; // ON
        LATDbits.LATD1=0;
        LATDbits.LATD2=0;
        LATDbits.LATD3=0;
__delay_ms(50);

        LATDbits.LATD0=0; 
        LATDbits.LATD1=1; // on
        LATDbits.LATD2=0;
        LATDbits.LATD3=0;

__delay_ms(50);

        LATDbits.LATD0=0; 
        LATDbits.LATD1=0; 
        LATDbits.LATD2=1; //on
        LATDbits.LATD3=0;

__delay_ms(50);
        LATDbits.LATD0=0;
        LATDbits.LATD1=0;
        LATDbits.LATD2=0;
        LATDbits.LATD3=1; // On
__delay_ms(50);
// delayzz();

    }
}



