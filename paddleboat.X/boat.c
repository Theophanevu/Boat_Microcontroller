#include "glcd.h"
#include "boat.h"
const unsigned char Boat_matrix[40] = {
    96,   112,   120,   60,   60,   30,  14,   3, 	//		-2
	24,   24,   60,   60,   30,   30,   28,   12, 	//		-1
    24,   24,   60,   60,   60,   60,   24,   24, 	//		0
	12,   28,   30,   30,   60,   60,   24,   14, 	//		1
    6,   14,   30,   60,   60,   120,   112,   96, 	//		2
   
};

void glcd_Boat8x8(char angle, unsigned char posY) 
{
	unsigned char i;
	unsigned char side = GLCD_LEFT; 
	unsigned int chr;
    
	unsigned char xpos=32;
    
    chr = 16 + (int)angle*8;				//Positionnement de chr au début du caractère (8 bytes par caractère)

    for(i = 0; i < 8; i++)			//on balaye les 8 colonnes du caractère
    {
        glcd_WriteByte(side,Boat_matrix[chr+i]);	// on écrit le caractère
        xpos++;
	}
    x+=8;
}
