// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library


#include "tile.hpp"
#include "colors.hpp"
#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN 2 // On Trinket or Gemma, suggest changing this to 1


// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 1000 // Time (in milliseconds) to pause between pixels

void setup() {
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.setBrightness(64);
	
	Tile tile = Tile();

	for (uint8_t i=0; i<22; i++){
		pixels.setPixelColor(i, pixels.Color(100,100,100));
	}
	pixels.show();
	delay(1000);
	for (uint8_t i=0; i<22; i++){
		pixels.setPixelColor(i, pixels.Color(0,100,100));
	}
	pixels.show();
	delay(1000);

	for(uint8_t j=0; j<=4; j++){
		for(uint8_t i=2; i<=12; i++){
			tile.set_color(j);
			tile.set_number(i);
			for(uint8_t k=0; k<NUMPIXELS; k++){
				pixels.setPixelColor(k, tile.lights[k]);
			}
			pixels.show();
			delay(DELAYVAL);
		}
	}
	
	for(uint8_t j=0; j<=4; j++){
		tile.set_color(j);
		for(uint8_t i=0; i<NUMPIXELS; i++){
			pixels.setPixelColor(i, tile.lights[i]);
		}
		pixels.show();
		delay(DELAYVAL);
	}
}

void loop() {
  pixels.clear(); // Set all pixel colors to 'off'




}
