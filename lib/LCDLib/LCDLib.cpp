#include "LCDLib.h"

LCD::LCD(uint8_t RS, uint8_t E, uint8_t D4, uint8_t D5, uint8_t D6, uint8_t D7)
{
    _RS = RS;
    _E = E; 
    _D4 = D4;
    _D5 = D5;
    _D6 = D6;
    _D7 = D7; 
    pinMode(_RS, OUTPUT);
    pinMode(_E, OUTPUT);
    pinMode(_D4, OUTPUT);
    pinMode(_D5, OUTPUT);
    pinMode(_D6, OUTPUT);
    pinMode(_D7, OUTPUT);
}

LCD Lcd(){}

void LCD::cls()
{

}

void LCD::Print()
{

}

void LCD::SetCursor(uint8_t file, uint8_t colum)
{
    
}