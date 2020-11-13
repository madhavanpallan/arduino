# Title:- PerimeterAlert:- Covid19 alerter by Crowdsourced, Public and Private sensors.

`Covid-19` `chatbot` `Intelligent Systems` `WHO` `sensors`

## Abstract
We pursue the problem here as Covid19 being air-borne infection using the medium of water droplets in the air. Water droplets in the air can be quantified and measured as humidity. It is imperative to kill the medium to cut the transfer. In this paper, we study how disturbing the medium cuts the spread. Also, we look into other parameters of weather which assist the transfer of Covid-19 including temperature and air quality index of the surrounding.

## Local Device Details
1) Below is a final enclosed plastic case which acts as a protective shield for the custom circuit board and the Arduino board, while the sensor(Humidity and Temperature Sensor DHT 22) is left out to take readings from the environment. My configuration is to mount on the wall. 
![Image 1](https://github.com/madhavanpallan/perimeteralert/blob/main/figures/1_DHT_22_sensor.jpg)
2) Inside the final enclosed plastic case are the following parts Arduino board, Sensor(DHT - 22) and Wifi Module(ESP8266).
![Image 2](https://github.com/madhavanpallan/perimeteralert/blob/main/figures/2_Circuit_Inside_Box.jpg)
3) This is how it started. Complete list of electronic parts includes:- Arduino Board Kit(1 - includes the programming USB cable), PCB Board(1), DHT -22 Sensor (1), ESP8266 Wifi Module(1), Jumper Cable as required, Pitch Female/ Male Berg Strips(1 each), a power adapter as per Arduino Specification and Soldering Set. Below is an image of the assembly of the sensor, board and code in the testing phase. The data from the sensor is transferred from the Arduino board which transfer to ESP8266 and that finally uploads to the cloud or test software, per se an Android Application in Mobile.
![Image 3](https://github.com/madhavanpallan/perimeteralert/blob/main/figures/3_Initial_Start.png)
4) One can check the Datasheet of DHT22 and ESP8266 for their pin configuration(operating voltage and data pins). The DHT-22, the Pitch female/ male berg strips are soldered on the PCB as per the setup required making them the custom circuit board.
![Image 4](https://github.com/madhavanpallan/perimeteralert/blob/main/figures/4_Custom_Cicuit.jpg)
5) In the below image, the Arduino board and ESP8266 are detachable to the Custom circuit board.
![Image 5](https://github.com/madhavanpallan/perimeteralert/blob/main/figures/5_Attached_Ckt_Outside_Box.png)
6) Below is the setup of the detached circuit boards namely custom circuit board, Arduino board, ESP8266 WIFI Module.
![Image 6](https://github.com/madhavanpallan/perimeteralert/blob/main/figures/6_Circuits_Parts.png)
7) A plain first sensor test to check the configuration would be to check the reading on the serial monitor of the Arduino IDE. Below is the screenshot of an Android Application on a Mobile Phone reading temperature and humidity from the local device setup wirelessly. Here, the Arduino Board is running a server and the Android phone has the respective client application. There are many opensource libraries to test the wireless module depending on once need. 
![Image 7](https://github.com/madhavanpallan/perimeteralert/blob/main/figures/7_AndroidClient.jpg)
8) We installed two custom libraries namely for the sensor DHT-22 and ESP8266 in the Arduino IDE.
9) Our base code is a combination of the primary example of DHT-22 and ESP8266 wireless module libraries, Openly available from [Arduino Website](https://www.arduino.cc/). 
10) One can also test the whole setup in a Simulator for electronic boards called `Proteus`. 

## Full paper below
Link to the current paper [here](https://drive.google.com/file/d/1joEeGnaqiyJM1Nrhw496-bYvQ5e2KLBp/view?usp=sharing)

## Acknowledgement
The author is thankful for continuous motivation by the Organizing members (Dr Biplav Srivastava and Team) for
pushing the barriers of chatbots on topics of Social Responsibility. Also Disclaimer, The Author is a recognized top fan by the World Health Organization (WHO) Facebook page.
![Image 8](https://github.com/madhavanpallan/perimeteralert/blob/main/figures/WHO_Recognition.jpg)

## Related Paper Submitted in SafeAI 2021 Workshop of AAAI 2021
1) [CovEn: Engineering Greater Good Collective AI Solutions for the Pandemic Covid19](https://drive.google.com/file/d/1roFps-QrJwa8KboEOBlBTy9d3MowVRXq/view?usp=sharing)
2) [Rise of Robots and Automation: A Pandemic-Covid19 AI solution](https://drive.google.com/file/d/1LDJQMSNyTrOd-lXjETGlerwgFsWbzsOj/view?usp=sharing)