#include <Wire.h>
#include <SeeedOLED.h>


void setup()
{
  Wire.begin();  
  SeeedOled.init();  //initialze SEEED OLED display
  DDRB|=0x21;         
  PORTB |= 0x21;

  SeeedOled.clearDisplay();           //clear the screen and set start position to top left corner
  SeeedOled.setNormalDisplay();       //Set display to Normal mode
  SeeedOled.setPageMode();            //Set addressing mode to Page Mode
  SeeedOled.setTextXY(2,0);           //Set the cursor to 3rd Page, 0th Column  
  SeeedOled.putString("Temp:");
  SeeedOled.putNumber(34);
  SeeedOled.putString("C");
  SeeedOled.setPageMode(); 
  SeeedOled.setTextXY(3,0);           //Set the cursor to 3rd Page, 0th Column  
  SeeedOled.putString("HumS:");
  SeeedOled.putNumber(20);
  SeeedOled.putString("%");
  SeeedOled.setTextXY(4,0);           //Set the cursor to 3rd Page, 0th Column  
  SeeedOled.putString("HumA:");
  SeeedOled.putNumber(30);
  SeeedOled.putString("%");
  SeeedOled.setTextXY(5,0);           //Set the cursor to 3rd Page, 0th Column  
  SeeedOled.putString("Luz:");
  SeeedOled.putNumber(15);
  SeeedOled.putString("lumen");
  SeeedOled.setTextXY(6,0);           //Set the cursor to 3rd Page, 0th Column  
  SeeedOled.putString("Flujo:");
  SeeedOled.putNumber(12);
  SeeedOled.putString("%");

  

}
#define Pin1 =;
#define Pin2 =;
#define Pin3 =;
#define Pin4 =;
#define Pin5 =;
#define Pin6 =;


 void setup(){
    Wire.begin();	
    SeeedOled.init();
    SeeedOled.setBrightness(unsigned char Brightness)
    SeeedOled.setTextXY(unsigned char Row, unsigned char Column);
    SeeedOled.setHorizontalScrollProperties(bool direction,unsigned char startPage, unsigned char endPage, unsigned char scrollSpeed);
    SeeedOled.clearDisplay();
 }
 void loop(){
     if(digitalRead(Pin1)== HIGH )
       SeeedOled.setTextXY(1,0);             
       SeeedOled.putString("Temp: " + digitalWrite(Pin1)+ " °C");
    else if(digitalRead(Pin2)== HIGH )
       SeeedOled.setTextXY(2,0);             
       SeeedOled.putString("HumA: " + digitalWrite(Pin2) + " %");
    else if(digitalRead(Pin3)== HIGH )
       SeeedOled.setTextXY(3,0);             
       SeeedOled.putString("HumS: " + digitalWrite(Pin3) + " %");
    else if(digitalRead(Pin4)== HIGH )
       SeeedOled.setTextXY(4,0);             
       SeeedOled.putString("Luz: " + digitalWrite(Pin4) + " lumen");
    else if(digitalRead(Pin5)== HIGH )
       SeeedOled.setTextXY(5,0);             
       SeeedOled.putString("Flujo " + digitalWrite(Pin5) + " %");
    else if(digitalRead(Pin6)== HIGH )
       SeeedOled.setTextXY(6,0);             
       SeeedOled.putString("Test Case ");
   
}


