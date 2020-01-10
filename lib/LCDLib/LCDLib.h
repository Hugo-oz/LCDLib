#ifndef LCDLIB_H
#define LCDLIB_H
#include <BinaryToPin.h>

class LCD
{
    public:
        LCD(uint8_t RS, uint8_t E, uint8_t D4, uint8_t D5, uint8_t D6, uint8_t D7);
        void cls();
        void Print(); 
        void SetCursor(uint8_t file, uint8_t colum);
    private: 
        uint8_t _RS, _E, _D4, _D5, _D6, _D7;
};

#endif //!LCDLIB_H