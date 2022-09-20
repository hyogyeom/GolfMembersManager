#include "CardReader.h"

CardReader::CardReader(SPI* spi) : mfrc522(spi)
{

}

CardReader::~CardReader()
{

}

bool CardReader::isCard()
{
    uint8_t byte = mfrc522_request(PICC_REQALL, rfidData);
    if(byte == CARD_FOUND)
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

DeviceData CardReader::getCardNumber()
{
    mfrc522_get_card_serial(rfidData);  // read card number
    cardData.devName = "CardReader";
    cardData.devData.clear(); // std::vector<int> devData;
    for (const auto data : rfidData)
    {
        cardData.devData.push_back((int)data);  // 변수를 받아서 push
        // cardData.devData.emplace_back((int)data);   상수화 시켜서 push, push,emplace 거의 동일  
    } 
    return cardData;
}