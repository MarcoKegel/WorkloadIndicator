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


LedController::LedController()
{
	myPixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
	myPixels.begin();
}

void LedController::ShowYellow()
{
	myPixels.setPixelColor(0, myPixels.Color(255, 255, 0));
	myPixels.show();
}

void LedController::ShowGreen()
{
	myPixels.setPixelColor(0, myPixels.Color(0, 255, 0));
	myPixels.show();
}

void LedController::ShowRed()
{
	myPixels.setPixelColor(0, myPixels.Color(255, 0, 0));
	myPixels.show();
}

