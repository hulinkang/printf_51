/*------------------------------------------------------------------

	main.h
	
------------------------------------------------------------------

	

------------------------------------------------------------------*/

#ifndef _MAIN_H
#define _MAIN_H

//------------------------------------------------------
//每个项目都需要重新修改配置
//------------------------------------------------------
#include <STC12C5A60S2.H>

#define OSC_FREQ (11059200UL)

//Number of oscillations per instruction
#define OSC_PER_INST (1) 


//------------------------------------------------------
//不需要修改
//------------------------------------------------------
typedef unsigned char uint8;
typedef 		 char int8;
typedef unsigned int  uint16;
typedef          int  int16;
typedef unsigned long uint32;
typedef          long int32;
//typedef unsigned long 

#endif