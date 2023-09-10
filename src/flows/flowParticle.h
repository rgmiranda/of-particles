#include "ofMain.h"

class flowParticle
{
    private:
        ofVec2f pos;
        ofVec2f prevPos;
        float size;
        uint64_t lifeSpan;
        uint64_t elapsedTime;
        uint64_t lastTime;
        bool active;

    public:
        flowParticle();

        void setup();
        void update(float speed, float frequency);
        void draw(float dotSize);
        bool isActive();
};