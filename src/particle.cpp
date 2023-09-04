#include "particle.h"

Particle::Particle()
{

}

void Particle::setup()
{

    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();

    vel.x = ofRandom(-4, 4);
    vel.y = ofRandom(-4, 4);

    acc = ofVec2f(0, 0);

    uniqueVal.x = pos.x; // ofRandom(-1000, 1000);
    uniqueVal.y = pos.y; // ofRandom(-1000, 1000);

    size = ofRandom(3, 5);

    drag = ofRandom(0.97, 0.99);
}

void Particle::update()
{
    acc.x = ofSignedNoise(uniqueVal.x, ofGetElapsedTimeMillis());
    acc.y = ofSignedNoise(uniqueVal.y, ofGetElapsedTimeMillis());

    vel *= drag;
    vel += acc;
    pos += vel;
    if (pos.x + size < 0)
    {
        pos.x = ofGetWidth() + size;
    } else {
        if (pos.x - size > ofGetWidth())
        {
            pos.x = -size;
        }
    }
    if (pos.y + size < 0)
    {
        pos.y = ofGetHeight() + size;
    } else {
        if (pos.y - size > ofGetHeight())
        {
            pos.y = -size;
        }
    }
}

void Particle::draw(float dotSize)
{
    ofDrawCircle(pos.x, pos.y, size * dotSize);
}
