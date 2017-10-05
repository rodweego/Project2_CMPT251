#include <Adafruit_CircuitPlayground.h>
#include <SoftwareSerial.h>
#include <Wire.h>

SoftwareSerial port(9, 10);

void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
  port.begin(9600);
  //Wire.begin();
}

void loop() 
{

  bool slideState = CircuitPlayground.slideSwitch();
  bool right = CircuitPlayground.rightButton();
  delay(20);

  
  if(slideState)
  {
    //slideStateTrue();
  }
  else
  {
    bool right2 = CircuitPlayground.rightButton();
    if (right && !right2)
    {
      port.write('c');
      Serial.println('c');
    }
  }
}
