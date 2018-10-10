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

#include "LedController.h"




LedController *led = new LedController();

void setup()
{
	// Open serial communications and wait for port to open:
	Serial.begin(115200);
	while (!Serial) {
		; // wait for serial port to connect. Needed for native USB port only
	}
}



void loop()
{
	Serial.println("green");
	led->ShowGreen();
	delay(1000);
	Serial.println("yellow");
	led->ShowYellow();
	delay(1000);
	Serial.println("red");
	led->ShowRed();
	delay(1000);
}


