#ifndef TILE_HPP
#define TILE_HPP

#include <Adafruit_NeoPixel.h>
#include "colors.hpp"


#define NUMPIXELS 22

class Tile{
	public:
		Tile();
		void set_color(uint8_t color);
		void set_number(uint8_t number);

		uint8_t R;
		uint8_t G;
		uint8_t B;
		uint8_t number;
		uint32_t lights[21];
		uint32_t color_code;
		
};

#endif //TILE_HPP
