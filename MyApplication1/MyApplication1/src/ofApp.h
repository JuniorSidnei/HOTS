#pragma once

#include "ofMain.h"
#include "personagem.h"
#include "mouse.h"
#include "maps.h"
#include "cam.h"
#include "wayPoints.h"
#include "minions.h"
#include "Champion.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		

		mouse Mouse;
		maps Map;
		cam World;
		wayPoints WayPointsImage;
		wayPoints WayPoint[14];
		Champion Rengar;
		minions Minion;
		int index;


		bool spaceBar = false;
};
