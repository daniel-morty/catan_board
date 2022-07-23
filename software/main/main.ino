
#include <Adafruit_NeoPixel.h>

#define LED_PIN 4
#define LED_COUNT 21

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
	strip.begin();
	strip.show(); //initialize all leds to 'off'

}

void loop() {
  // put your main code here, to run repeatedly:
	uint32_t rgbcolor = strip.ColorHSV(32768);
	strip.fill(rgbcolor);
  strip.show();

}
