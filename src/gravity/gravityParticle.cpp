#include "gravityParticle.h"

GravityParticle::GravityParticle()
{

}

void GravityParticle::setup()
{
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();

    vel.x = 0;
    vel.y = 0;

    acc.x = 0;
    acc.y = 0;

    size = ofRandom(10, 50);
}

void GravityParticle::update()
{
    vel += acc;
    pos += vel;
    acc *= 0;
}

void GravityParticle::draw()
{
    ofSetColor(255, 255, 255, 255);
    ofDrawCircle(pos.x, pos.y, size);
}

void GravityParticle::apply(ofVec2f force)
{
    force /= size;
    acc += force;
}
