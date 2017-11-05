# paperPiano and bananaPiano
Make a touch sensor piano with an Arduino Uno and conductive material. Project still in progress. End goal is to create a metal keyboard that outputs musical notes and soundwave visualizations. Notes triggered by capacitive touch sensors and link to MIDI libraries. 

Banana piano instructions listed below for fun. Notes triggered by changes in analog read outputs.

##Hardware
* Arduino Uno
* Breadboard
* 5 MegaOhm resistors
* 5 alligator clips
* Jumper cables
* 5 bananas or any other conductive material (i.e. aluminum foil)
##Dependencies
* [https://playground.arduino.cc/Main/CapacitiveSensor?from=Main.CapSense]: CapacitiveSensor Library
* [https://processing.org/reference/libraries/]: Processing IDE
* [http://code.compartmental.net/tools/minim/]: Minim for Processing 
##Banana Piano Pinouts
* A0 to A4 attached to bananas with alligator clips
* GND to conductive material (i.e. aluminum foil)
* 5V pin to power
##Banana Piano Deployment
* Connect bananas to resistors using alligator clips
* Resistors connect back to pinouts
* Follow schematic in tutorial listed below
* Connect bananaPiano code to Processing_piano waves through serial port. Set last argument to speed at which serial is initialized (this value is usually 9600).
```
 myPort = new Serial(this, portName, 11500);
```
* Upload bananaPiano.ino to Arduino Uno and simultaneously run Processing_piano.pde in Processing_Piano. Once the code is running, get ready to play your musical bananas! You can change the sound being played by changing the soundfiles located in the data subdirectory of Processing_piano.
##Acknowledgment
* Banana key schematic based on this tutorial: [https://www.jameco.com/Jameco/workshop/JamecoBuilds/banana-piano.html%20?trk_msg=05678RI7BPR47BKDLTOJBBCRQ8&trk_contact=H2SHLE4U1QAHGPQD5O6D5J06AC&utm_source=Listrak&utm_medium=Email&utm_term=Banana+Piano&utm_campaign=January+Newsletter+2016&utm_content=January+Newsletter+2016]: Jameco Electronics
* Connection to Processing taken from this tutorial: [http://www.capacitivetouchscreen.info/paper-piano-diy-arduino-project/]