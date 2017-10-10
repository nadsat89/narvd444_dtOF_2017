#pragma once

#include "Ball.h"
#include "ofMain.h"

class TriangleBall : public Ball {  // SquareBall class **inherits** from Ball class

public:

	TriangleBall();

	void draw(); // this will **override** the draw function inherited from Ball

};
