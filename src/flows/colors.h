#include "ofMain.h"
#include <iostream>


class Colors
{
    private:
        static const int hexColors[];
    public:
        static ofColor getRandomColor();
};