#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "Particle.h"
#include "ofxOsc.h"
#include "ofxXmlSettings.h"
#include "ofxAutoControlPanel.h"
#include "ofxSyphon.h"
class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    
    
    ofImage image ;                 //image to load
    int sampling ;                  //pixels to skip
    vector<Particle> particles ;    //vector to store pixels
    int numParticles ;          //Number of particles
    
    //Spring and Sink Factors
    bool springEnabled ;        //toggle whether particles return to their origin
    float forceRadius ;             //radius of repellent/attraction force
    float friction ;                //damping to slow the particles down
    float springFactor ;          //how much the particle "springs" back to origin
    bool cursorMode ;
    
    ofxOscReceiver receiver; //osc receiver
    ofxXmlSettings settings; //app settings
    ofxAutoControlPanel panel;
    
    ofxSyphonServer server;
    
    string oscSpringFactor;
    string oscForceRadius;
    string oscSpringEnabled;
    string oscFriction;
    string oscMode;
    string fileName;
    int imageWidth;
    int imageHeight;
};

#endif
