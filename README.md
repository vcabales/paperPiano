# paperPiano and bananaPiano
Make a touch sensor piano with an Arduino Uno and conductive material. Project still in progress. End goal is to create a metal keyboard that outputs musical notes and soundwave visualizations. Notes triggered by capacitive touch sensors and link to MIDI libraries. Code to calculate thresholds to detect touch in basic_tones.ino. Currently listed for three keys.

# Banana Piano Instructions
Banana piano instructions listed for fun. Notes triggered by changes in analog read outputs.
![alt text](img/IMG_0488.jpg "Banana Piano")

## Hardware
* Arduino Uno
* Breadboard
* 5 MegaOhm resistors
* 5 alligator clips
* Jumper cables
* 5 bananas or any other conductive material (i.e. aluminum foil)
## Dependencies
* [CapacitiveSensor Library](https://playground.arduino.cc/Main/CapacitiveSensor?from=Main.CapSense)
* [Processing IDE](https://processing.org/reference/libraries/)
* [Minim for Processing](http://code.compartmental.net/tools/minim/)
## Banana Piano Pinouts
![alt text](img/IMG_0489.jpg "Banana Piano Breadboard")
* A0 to A4 attached to bananas with alligator clips
* GND to conductive material (i.e. aluminum foil)
* 5V pin to power
## Banana Piano Deployment
* Connect bananas to resistors using alligator clips
* Resistors connect back to pinouts
* Follow schematic in tutorial listed below
* Connect bananaPiano code to Processing_piano waves through serial port. Set last argument to speed at which serial is initialized (this value is usually 9600).
```
 myPort = new Serial(this, portName, 11500);
```
* Upload bananaPiano.ino to Arduino Uno and simultaneously run Processing_piano.pde in Processing_Piano. Once the code is running, get ready to play your musical bananas! You can change the sound being played by changing the soundfiles located in the data subdirectory of Processing_piano.
##Acknowledgment
* [Banana key schematic link](https://www.jameco.com/Jameco/workshop/JamecoBuilds/banana-piano.html%20?trk_msg=05678RI7BPR47BKDLTOJBBCRQ8&trk_contact=H2SHLE4U1QAHGPQD5O6D5J06AC&utm_source=Listrak&utm_medium=Email&utm_term=Banana+Piano&utm_campaign=January+Newsletter+2016&utm_content=January+Newsletter+2016)
* [Processing sound clips](http://www.capacitivetouchscreen.info/paper-piano-diy-arduino-project/)