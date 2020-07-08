/*
   -- New project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 2.4.3 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.5.1 or later version;
     - for iOS 1.4.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "RemoteXY"
#define REMOTEXY_WIFI_PASSWORD "12345678"
#define REMOTEXY_SERVER_PORT 6377


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,1,0,22,0,65,0,10,13,0,
  1,0,12,23,12,12,2,31,88,0,
  67,4,32,21,20,5,2,26,11,67,
  4,31,32,20,5,2,26,11,129,0,
  57,21,32,6,31,37,32,104,117,109,
  105,100,105,116,121,0,129,0,59,32,
  18,6,31,67,101,108,115,105,117,115,
  32,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t button_1; // =1 if button pressed, else =0 

    // output variables
  char humidity[11];  // string UTF8 end zero 
  char temperature[11];  // string UTF8 end zero 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_BUTTON_1 13

#include <dht.h>
dht DHT;
//Constants
#define DHT22_PIN 8     // DHT 22  (AM2302) - what pin we're connected to

//Variables
float hum;  //Stores humidity value
float temp; //Stores temperature value

void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_BUTTON_1, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_BUTTON_1, (RemoteXY.button_1==0)?LOW:HIGH);
  int chk = DHT.read22(DHT22_PIN);
  //Read data and store it to variables hum and temp
  hum = DHT.humidity;
  temp= DHT.temperature;
  dtostrf(temp, 0, 1, RemoteXY.temperature);
  dtostrf(hum, 0, 1, RemoteXY.humidity); 
  delay(2000); //Delay 2 sec.
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 

}
