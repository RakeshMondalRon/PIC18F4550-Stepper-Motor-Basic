/*  ****Compiler Directives****
 ------www.rakeshmondal.info-------
	headerzz.h
 * CHIP CONFIG BITS
 * This Software is free software: you free to redistribute it or
 * modify the code way you wish. This software is for educational purpose only.
 * In any circumstances www.rakeshmondal.info shall not be liable for any
 * special, incidental or consequential damages, for any reason whatsoever.
 * No guarantee or warranty whatsoever. */
/* -------------------------------------------------------------------- */

#pragma config VREGEN = OFF         // Voltage regulator USB , is Suspended
#pragma config WDT = OFF                // Watchdog timer is suspended
#pragma config PLLDIV = 5                // Internal Oscillator engaged
#pragma config MCLRE = OFF
#pragma config WDTPS = 32768
#pragma config CCP2MX = ON
#pragma config PBADEN = OFF
#pragma config CPUDIV = OSC1_PLL2
#pragma config USBDIV = 2
#pragma config FOSC = INTOSCIO_EC
#pragma config FCMEN = OFF
#pragma config IESO = OFF
#pragma config PWRT = OFF
#pragma config BOR = OFF
#pragma config BORV = 3
#pragma config LPT1OSC = OFF
#pragma config STVREN = ON
#pragma config LVP = OFF
#pragma config ICPRT = OFF
#pragma config XINST = OFF
#pragma config DEBUG = OFF
#pragma config CP0 = OFF, CP1 = OFF, CP2 = OFF, CP3 = OFF
#pragma config CPB = OFF                                                                              // CPB off
#pragma config CPD = OFF
#pragma config WRT0 = OFF, WRT1 = OFF, WRT2 = OFF, WRT3 = OFF
#pragma config WRTC = OFF
#pragma config WRTB = OFF
#pragma config WRTD = OFF
#pragma config EBTR0 = OFF, EBTR1 = OFF, EBTR2 = OFF, EBTR3 = OFF
#pragma config EBTRB = OFF
// - See more at: http://www.rakeshmondal.info/pic18f4550-tutorial-blink-led-chapter4#sthash.Uy9lTQ0k.dpuf
