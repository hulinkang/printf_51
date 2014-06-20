/*------------------------------------------------------------------

	A simple serial initialisation routine to allow Keil hardware
	simulator to be used to run 'desktop' C examples.

	[Full details of a complete serial interface library are given
	in Chapter 18.  This code is for demo purposes only!!! ]
	
-------------------------------------------------------------------*/

#include "main.h"
#include "printf51.h"

void printf51_init(void)
{
	const uint16 BAUD_RATE = 9600;

	PCON &= 0x7F;   // Set SMOD bit to 0 (don't double baud rates)

   //  Receiver enabled.
   //  8-bit data, 1 start bit, 1 stop bit, 
   //  Variable baud rate (asynchronous)
   //  Receive flag will only be set if a valid stop bit is received
   //  Set TI (transmit buffer is empty)
	SCON = 0x72;

	TMOD |= 0x20;   // T1 in mode 2, 8-bit auto reload

	// See Main.H for details of OSC_FREQ and OSC_PER_INST
	TH1 = (256 - (uint8)((((unsigned long)OSC_FREQ / 100) * 3125) 
            / ((unsigned long) BAUD_RATE * OSC_PER_INST * 1000)));

	TL1 = TH1;  
	TR1 = 1;  // Run the timer

	TI = 1;   // Send dummy byte

	// Interrupt *NOT* enabled
	ES = 0;
   }