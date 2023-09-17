#include "ofMain.h"

class GravityParticle
{
    public:
        GravityParticle();

        void setup();
        void update();
        void draw();
        void apply(ofVec2f force);

        ofVec2f pos;
        ofVec2f vel;
        ofVec2f acc;
        float drag;
        float size;
};