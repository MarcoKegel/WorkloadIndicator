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

const byte PinSwitch1 = 2;
const byte PinSwitch2 = 3;

bool switchChanged = false;

void setup()
{
	// Open serial communications and wait for port to open:
	Serial.begin(115200);
	while (!Serial) {
		; // wait for serial port to connect. Needed for native USB port only
	}

	pinMode(PinSwitch1, INPUT_PULLUP);
	attachInterrupt(digitalPinToInterrupt(PinSwitch1), IrqHandler, CHANGE);

	pinMode(PinSwitch2, INPUT_PULLUP);
	attachInterrupt(digitalPinToInterrupt(PinSwitch2), IrqHandler, CHANGE);
}



void loop()
{
	if (switchChanged)
	{
		switchChanged = false;
		int switchStaus1 = digitalRead(PinSwitch1);
		int switchStaus2 = digitalRead(PinSwitch2);
		if (switchStaus1==0)
		{
			Serial.println("Green");
			led->ShowGreen();
			return;
		}
		if (switchStaus2 == 0)
		{
			Serial.println("Red");
			led->ShowRed();
			return;
		}
		if (switchStaus1 == 1 && switchStaus2 == 1)
		{
			Serial.println("Yellow");
			led->ShowYellow();
			return;
		}
		Serial.println("Error State: Both switches ar pressed - unplausible");
	}
}

void IrqHandler()
{
	switchChanged = true;
}

