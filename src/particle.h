#include "ofMain.h"

class Particle
{
    public:
        Particle();

        void setup();
        void update(float speed, float noise);
        void draw(float dotSize);

        ofVec2f pos;
        ofVec2f vel;
        ofVec2f acc;
        float drag;

        ofVec2f uniqueVal;
        float size;
};