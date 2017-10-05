#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>
SoftwareSerial port(9, 10);
int rightButton = 0;


void slideStateTrue() {
  port.listen();
    char input = port.read();
    Serial.println("  " + input);

    if (input == 'c')
    {
      if(rightButton == 0)
      {
        CircuitPlayground.setPixelColor(4, 100,0,0);
        //delay(500); 
        //CircuitPlayground.clearPixels();
        rightButton++;
      }
      else if(rightButton == 1)
      {
        
      }
      else
      {
        rightButton == 0;
        CircuitPlayground.clearPixels();
      }
}

