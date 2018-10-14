/*
	WorkloadIndicator
	Copyright (C) 2018  Marco Kegel and Konrad Siedler

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#ifndef _LEDCONTROLLER_h
#define _LEDCONTROLLER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"	
#else
	#include "WProgram.h"
#endif


#endif

#include <Adafruit_NeoPixel.h>

#define PIN				4
#define NUMPIXELS		1

class LedController 
{
	
private:
	Adafruit_NeoPixel myPixels;
	
public:
	///<summary>contructor</summary>
	LedController();
	
	///<summary>
	///</summary>
	///<param name=''> </param>
	void ShowYellow();
	void ShowGreen();
	void ShowRed();

};
