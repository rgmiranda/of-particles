#include "flowParticle.h"

flowParticle::flowParticle()
{

}

void flowParticle::setup()
{
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();


    size = ofRandom(8) + 2;
    lifeSpan = floor(ofRandom(1, 5) * 1000);
    elapsedTime = 0;
    lastTime = ofGetElapsedTimeMillis();
    active = true;

    color = Colors::getRandomColor();
}

void flowParticle::update(float speed, float frequency)
{
    if (!active) {
        return;
    }
    float angle = PI * ofSignedNoise(frequency * pos.x, frequency * pos.y, frequency * ofGetFrameNum());
    ofVec2f vel;
    vel.x = speed * cos(angle);
    vel.y = speed * sin(angle);
    prevPos.x = pos.x;
    prevPos.y = pos.y;
    pos += vel;
    uint64_t timeDelta = ofGetElapsedTimeMillis() - lastTime;
    lastTime = ofGetElapsedTimeMillis();
    elapsedTime += timeDelta;
}

void flowParticle::draw(float dotSize)
{
    if (!active) {
        return;
    }
    ofSetColor(color);
    ofSetLineWidth(size);
    ofDrawLine(pos.x, pos.y, prevPos.x, prevPos.y);
}

bool flowParticle::isActive()
{
    return active;
}
