#include <DigiPixel.h>
#include <avr/pgmspace.h>


// leave the following line uncommented for use with a Digispark
//DigiPixel digiPixel(3,0,5,2,1);  // LED Latch/Button Shift !load pin, LED/Button clock pin, LED Data Pin, LED Output Enable pin, Buttons data pin)

// leave the following line uncommented for use with an Arduino
DigiPixel digiPixel(5,2,6,4,3);  // LED Latch/Button Shift !load pin, LED/Button clock pin, LED Data Pin, LED Output Enable pin, Buttons data pin)


// Program memory arrays
byte DigiPixelIsGreatRed[144]PROGMEM={0b00000000, 0b00000000, 0b00100000, 0b00110000, 0b00110000, 0b00110100, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00000000, 0b10000000, 0b10000000, 0b11111110, 0b11111110, 0b10000000, 0b10000000, 0b00000000, 0b11111110, 0b11111110, 0b00110000, 0b00111110, 0b00011110, 0b00000000, 0b00011100, 0b00111110, 0b00101010, 0b00111010, 0b00011000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111100, 0b11111110, 0b10000010, 0b10010010, 0b10010010, 0b11011110, 0b01011100, 0b00000000, 0b00111110, 0b00111110, 0b00100000, 0b00000000, 0b00011100, 0b00111110, 0b00101010, 0b00111010, 0b00011000, 0b00000000, 0b00000100, 0b00101110, 0b00101010, 0b00111110, 0b00011110, 0b00000000, 0b01111100, 0b01111110, 0b00100010, 0b00000000, 0b11111010, 0b11111010, 0b00000000, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110110, 0b00110100, 0b00110000, 0b00110000, 0b00100000, 0b00000000, 0b00000000};
byte DigiPixelIsGreatGreen[144]PROGMEM={0b00000000, 0b01000000, 0b01100000, 0b01100000, 0b01101000, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111110, 0b11111110, 0b00000000, 0b00010010, 0b00111010, 0b00101010, 0b00101110, 0b00100100, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101100, 0b01101000, 0b01100000, 0b01100000, 0b01000000, 0b00000000};
byte DigiPixelIsGreatBlue[144]PROGMEM={0b10000000, 0b10000000, 0b10100000, 0b10110000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111110, 0b11111110, 0b10000010, 0b10000010, 0b10000010, 0b11111110, 0b01111100, 0b00000000, 0b10111110, 0b10111110, 0b00000000, 0b00111001, 0b01111101, 0b01000101, 0b01111111, 0b01111110, 0b00000000, 0b10111110, 0b10111110, 0b00000000, 0b11111110, 0b11111110, 0b10010000, 0b10010000, 0b10010000, 0b11110000, 0b01100000, 0b00000000, 0b10111110, 0b10111110, 0b00000000, 0b00110110, 0b00011100, 0b00011100, 0b00110110, 0b00000000, 0b00011100, 0b00111110, 0b00101010, 0b00111010, 0b00011000, 0b00000000, 0b11111110, 0b11111110, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111100, 0b11111110, 0b10000010, 0b10010010, 0b10010010, 0b11011110, 0b01011100, 0b00000000, 0b00111110, 0b00111110, 0b00100000, 0b00000000, 0b00011100, 0b00111110, 0b00101010, 0b00111010, 0b00011000, 0b00000000, 0b00000100, 0b00101110, 0b00101010, 0b00111110, 0b00011110, 0b00000000, 0b01111100, 0b01111110, 0b00100010, 0b00000000, 0b11111010, 0b11111010, 0b00000000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10111000, 0b10110000, 0b10100000, 0b10000000, 0b10000000};


void setup(){
  
}


void loop(){
  for (byte x = 0; x <= sizeof(DigiPixelIsGreatBlue); x++){
    digiPixel.bufferBlue[0] = pgm_read_dword(&DigiPixelIsGreatBlue[x]);
    digiPixel.bufferRed[0] = pgm_read_dword(&DigiPixelIsGreatRed[x]);
    digiPixel.bufferGreen[0] = pgm_read_dword(&DigiPixelIsGreatGreen[x]);
    digiPixel.airWrite(1000); // the delay between drawing each line of data (in microseconds)
  }
}




