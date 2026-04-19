#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <string.h>

#define SCREEN_WIDTH 128  
#define SCREEN_HEIGHT 32

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
 display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
 Serial.begin(9600);
}

void loop() {
//Will I be known and loved?700
//Is there one that I trust?3000
//Starting to sober up 5000
//Has it been long enough?8000
//Will I be known and loved?10000
//Any Closer, Close enough 13000
//I'm a loser, loosen up 15000
//Setting free, must be tough 17000
display.clearDisplay();
display.setTextColor(SSD1306_WHITE);
display.setTextSize(1);
display.setCursor(0,0);

delay(700);
display.println("Will I be known and ");
display.println("loved?");
display.display();

delay(2300);
display.clearDisplay();
display.setCursor(0,0);
display.println("Is there one that I ");
display.println("trust?");
display.display();

delay(2000);
display.clearDisplay();
display.setCursor(0,0);
display.println("Starting to");
display.println("sober up");
display.display();

delay(3000);
display.clearDisplay();
display.setCursor(0,0);
display.println("Has it been");
display.println("long enough?");
display.display();

delay(2000);
display.clearDisplay();
display.setCursor(0,0);
display.println("Will I be known and ");
display.println("loved?");
display.display();

delay(3000);
display.clearDisplay();
display.setCursor(0,0);
display.println("Any Closer");
display.println("Close enough?");
display.display();

delay(2000);
display.clearDisplay();
display.setCursor(0,0);
display.println("I'm a loser,");
display.println("loosen up");
display.display();

delay(2000);
display.clearDisplay();
display.setCursor(0,0);
display.println("Setting free,");
display.println("must be tough");
display.display();
delay(10000);
}
