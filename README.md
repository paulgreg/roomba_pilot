# Piloting a Roomba with an Arduino #

## What you need ##

- A roomba with a serial port (mine is the 555 model),
- An arduino,
- to build a cable to connect the Arduino to the Roomba, see http://www.instructables.com/id/Web-controlled-Twittering-Roomba/,
- download the [Roomba library](http://www.airspayce.com/mikem/arduino/Roomba/) into the Arduino library folder.

## Connections ##

Connect the Roomba RX wire to Arduino pin 0 (RX) and Roomba TX to Arduino pin 1 (TX).
To power the Arduino, you’ll need to convert the 20 volts from Roomba to 5 volts using a 7805 5V voltage regulator (see http://www.instructables.com/id/Web-controlled-Twittering-Roomba/?ALLSTEPS).

## References ##

- [Roomba library](http://www.airspayce.com/mikem/arduino/Roomba/)
- [Roomba serial communication specifications](http://irobot.lv/uploaded_files/File/iRobot_Roomba_500_Open_Interface_Spec.pdf)
