#include <CapacitiveSensor.h>

/*
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10M between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 */


CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);        // 10M resistor between pins 4 & 6, pin 6 is sensor pin, add a wire and or foil
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);        // 10M resistor between pins 4 & 8, pin 8 is sensor pin, add a wire and or foil

void setup()                    
{
   cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF);   
   cs_2_4.set_CS_AutocaL_Millis(0xFFFFFFFF);  
   cs_2_5.set_CS_AutocaL_Millis(0xFFFFFFFF);
   Serial.begin(9600);
}

void loop()                    
{
    long start = millis();
    long total1 =  cs_2_3.capacitiveSensor(30);
    long total2 =  cs_2_4.capacitiveSensor(30);
    long total3 =  cs_2_5.capacitiveSensor(30);
    
    Serial.print("Key 1 changes ");
    Serial.println(total1);                  // print sensor output 1
    Serial.println("CSread1 output: ");
    CSread1();
    Serial.println();
    /*
    Serial.print("Key 2 changes ");
    Serial.println(total2);                  // print sensor output 2
    Serial.println("CSread2 output: ");
    CSread2();
    Serial.println();

    Serial.print("Key 3 changes ");
    Serial.println(total3);                // print sensor output 3
    Serial.println("CSread3 output: ");
    //CSread3();
    Serial.println(); */
    
    //Serial.println(millis() - start);        // check on performance in milliseconds
    //Serial.print("\t");                    // tab character for debug windown spacing


    //Serial.print("\t");
   
    //Serial.print("\t");
    
    delay(100);                             // arbitrary delay to limit data to serial port 
}
unsigned long csSum1 = 0;
void CSread1() {
    long cs = cs_2_3.capacitiveSensor(30);
    if (cs > 0) { //b: Arbitrary number
    csSum1 += cs;
    Serial.print("Serial value for key 1: ");
    Serial.println(csSum1); 
    if (csSum1 >=1000) //c: This value is the threshold, a High value means it takes longer to trigger
    {
      Serial.print("Trigger for key 1: ");
      Serial.println(csSum1);
      Serial.println("a");
      if (csSum1 > 0) { csSum1 = 0; } //Reset
      cs_2_3.reset_CS_AutoCal(); //Stops readings
    }
  }
}

unsigned long csSum2 = 0;
void CSread2() {
    long cs2 = cs_2_4.capacitiveSensor(30);
    if (cs2 > 0) { //b: Arbitrary number
    csSum2 += cs2;
    Serial.print("Serial value for key 2: ");
    Serial.println(csSum2); 
    if (csSum2 >= 1000) //c: This value is the threshold, a High value means it takes longer to trigger
    {
      Serial.print("Trigger for key 2: ");
      Serial.println(csSum2);
      Serial.println("b");
      if (csSum2 > 0) { csSum2 = 0; } //Reset
      cs_2_4.reset_CS_AutoCal(); //Stops readings
    }
  }
}

unsigned long csSum3 = 0;
void CSread3() {
  long cs3 = cs_2_5.capacitiveSensor(30);
  if (cs3 > 0) {
    csSum3 += cs3;
    Serial.print("Serial value for key 3: ");
    Serial.println(csSum3);
    if (csSum3 >= 1000) {
      Serial.print("Trigger for key 3: ");
      Serial.println(csSum3);
      Serial.println("c");
      if (csSum3 > 0) { csSum3 = 0; } //Reset
      cs_2_5.reset_CS_AutoCal(); //Stops readings
    }
  }
}

