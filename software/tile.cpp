#include "tile.hpp"

Tile::Tile(){
	this->R = 0;
	this->G = 0;
	this->B = 0;
}

void Tile::set_color(uint8_t color){
	switch (color){
		case FORREST:
			this->R = FORREST_R;
			this->G = FORREST_G;
			this->B = FORREST_B;
			break;
		case SHEEP:
			this->R = SHEEP_R;
			this->G = SHEEP_G;
			this->B = SHEEP_B;
			break;
		case WHEAT:
			this->R = WHEAT_R;
			this->G = WHEAT_G;
			this->B = WHEAT_B;
			break;
		case ORE:
			this->R = ORE_R;
			this->G = ORE_G;
			this->B = ORE_B;
			break;
		case BRICK:
			this->R = BRICK_R;
			this->G = BRICK_G;
			this->B = BRICK_B;
			break;
		case NUMBERS:
			this->R = NUMBERS_R;
			this->G = NUMBERS_G;
			this->B = NUMBERS_B;
			break;
		case DESERT: 
			this->R = 0;
			this->G = 0;
			this->B = 0;
			break;
		default: 
			this->R = 0;
			this->G = 0;
			this->B = 0;
			break;
	} //end switch (color)

	//set the array to be a solid color
	this->color_code = ((uint32_t)this->R << 16) | ((uint32_t)this->G << 8) | this->B;
	for (uint8_t i=0; i<NUMPIXELS; i++){
		this->lights[i] = color_code;
	}
}


void Tile::set_number(uint8_t number){
	uint32_t color_code = ((uint32_t)NUMBERS_R << 16) | ((uint32_t)NUMBERS_G << 8) | NUMBERS_B; 
	switch (number){
		case 2:
			this->lights[0] = color_code;
			this->lights[1] = color_code;
			this->lights[2] = color_code;
			this->lights[6] = color_code;
			this->lights[9] = color_code;
			this->lights[10] = color_code;
			this->lights[11] = color_code;
			this->lights[14] = color_code;
			this->lights[18] = color_code;
			this->lights[19] = color_code;
			this->lights[20] = color_code;
			break;
		case 3:
			this->lights[0] = color_code;
			this->lights[1] = color_code;
			this->lights[2] = color_code;
			this->lights[6] = color_code;
			this->lights[9] = color_code;
			this->lights[10] = color_code;
			this->lights[11] = color_code;
			this->lights[16] = color_code;
			this->lights[18] = color_code;
			this->lights[19] = color_code;
			this->lights[20] = color_code;
			break;
		case 4:
			this->lights[0] = color_code;
			this->lights[2] = color_code;
			this->lights[4] = color_code;
			this->lights[6] = color_code;
			this->lights[9] = color_code;
			this->lights[10] = color_code;
			this->lights[11] = color_code;
			this->lights[16] = color_code;
			this->lights[20] = color_code;
			break;
		case 5:
			this->lights[0] = color_code;
			this->lights[1] = color_code;
			this->lights[2] = color_code;
			this->lights[4] = color_code;
			this->lights[9] = color_code;
			this->lights[10] = color_code;
			this->lights[11] = color_code;
			this->lights[16] = color_code;
			this->lights[18] = color_code;
			this->lights[19] = color_code;
			this->lights[20] = color_code;
			break;
		case 6:
			this->lights[0] = color_code;
			this->lights[1] = color_code;
			this->lights[2] = color_code;
			this->lights[4] = color_code;
			this->lights[9] = color_code;
			this->lights[10] = color_code;
			this->lights[11] = color_code;
			this->lights[14] = color_code;
			this->lights[16] = color_code;
			this->lights[18] = color_code;
			this->lights[19] = color_code;
			this->lights[20] = color_code;
			break;
		case 7:
			this->lights[0] = color_code;
			this->lights[1] = color_code;
			this->lights[2] = color_code;
			this->lights[6] = color_code;
			this->lights[11] = color_code;
			this->lights[16] = color_code;
			this->lights[20] = color_code;
			break;
		case 8:
			this->lights[0] = color_code;
			this->lights[1] = color_code;
			this->lights[2] = color_code;
			this->lights[4] = color_code;
			this->lights[6] = color_code;
			this->lights[9] = color_code;
			this->lights[10] = color_code;
			this->lights[11] = color_code;
			this->lights[14] = color_code;
			this->lights[16] = color_code;
			this->lights[18] = color_code;
			this->lights[19] = color_code;
			this->lights[20] = color_code;
			break;
		case 9:
			this->lights[0] = color_code;
			this->lights[1] = color_code;
			this->lights[2] = color_code;
			this->lights[4] = color_code;
			this->lights[6] = color_code;
			this->lights[9] = color_code;
			this->lights[10] = color_code;
			this->lights[11] = color_code;
			this->lights[16] = color_code;
			this->lights[20] = color_code;
			break;
		case 10:
			this->lights[0] = color_code;
			this->lights[1] = color_code;
			this->lights[2] = color_code;
			this->lights[4] = color_code;
			this->lights[6] = color_code;
			this->lights[9] = color_code;
			this->lights[10] = color_code;
			this->lights[11] = color_code;
			this->lights[14] = color_code;
			this->lights[16] = color_code;
			this->lights[18] = color_code;
			this->lights[20] = color_code;
			break;
		case 11:
			this->lights[0] = color_code;
			this->lights[4] = color_code;
			this->lights[9] = color_code;
			this->lights[10] = color_code;
			this->lights[11] = color_code;
			this->lights[14] = color_code;
			this->lights[16] = color_code;
			this->lights[18] = color_code;
			this->lights[19] = color_code;
			this->lights[20] = color_code;
			break;
		case 12:
			this->lights[0] = color_code;
			this->lights[1] = color_code;
			this->lights[2] = color_code;
			this->lights[4] = color_code;
			this->lights[9] = color_code;
			this->lights[14] = color_code;
			this->lights[18] = color_code;
			this->lights[19] = color_code;
			this->lights[20] = color_code;
			break;
		default:
			break;
	} //end switch (number)
}
