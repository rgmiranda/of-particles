#include "colors.h"

const int Colors::hexColors[] = { 0x03071e, 0x370617, 0x6a040f, 0x9d0208, 0xd00000, 0xdc2f02, 0xe85d04, 0xf48c06, 0xfaa307, 0xffba08 };

ofColor Colors::getRandomColor()
{
    int colorsCount = sizeof(Colors::hexColors)/sizeof(Colors::hexColors[0]);

    int idx = floor(ofRandom(colorsCount));

    return ofColor::fromHex(Colors::hexColors[idx]);
}
