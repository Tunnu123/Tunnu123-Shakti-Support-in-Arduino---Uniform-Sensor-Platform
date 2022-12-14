/***************************************************************************
 * Project           			 : Shakti Arduino
 * Name of the file	     		 : hello_world.ino
 * Created date			         : 16.03.2020
 * Name of Author                : Sambhav Jain
 * Email ID                      : sambhav.jv@gmail.com

 Copyright (C) 2020  IIT Madras. All rights reserved.

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <https://www.gnu.org/licenses/>.

*****************************************************************************/
extern "C" {
#include "platform.h"
#include "uart.h"
#include "utils.h"
}

void setup()
{
  Serial.begin(19200);
  Serial.println("Hello World"); 
}

void loop()
{

}
