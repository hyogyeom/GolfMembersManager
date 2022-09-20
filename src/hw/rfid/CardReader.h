#ifndef __CARDREADER_H__
#define __CARDREADER_H__

#include <iostream>
#include "mfrc522.h"
#include "DeviceData.h"

class CardReader : public mfrc522
{
private:
    uint8_t rfidData[16];
    DeviceData cardData;


public:
    CardReader(SPI* spi);
    ~CardReader();
    bool isCard();
    DeviceData getCardNumber();


};

#endif