#include "turtlec.h"
#include <math.h>


    //esta funcion no sirve y no se porque//
void levy(Turtle *t, float l, int n) {
    if (n == 0) {
        turtleForward(t, l);
        return;
    }

    
    if (n == 6)      turtleSetColor(t, 255, 0,   0);
    else if (n == 5) turtleSetColor(t, 255, 128, 0);
    else if (n == 4) turtleSetColor(t, 155, 255, 0);
    else if (n == 3) turtleSetColor(t, 100,   255, 0);
    else if (n == 2) turtleSetColor(t, 100,   128, 255);
    else if (n == 1) turtleSetColor(t, 128, 0,   255);

    turtleLeft(t, 45);
    levy(t, l * 0.707f, n - 1);
    turtleRight(t, 90);
    levy(t, l * 0.707f, n - 1);
    turtleLeft(t, 45);
}

int main(void) {
    TurtleApp *app = turtleAppCreate(800, 800, "Curva de Levy");
    if (app == NULL) return 1;

    Turtle *t = turtleAppGetTurtle(app);
    turtleSetSpeed(t, 500);

    turtlePenUp(t);
    turtleGoTo(t, 150.0f, 650.0f);
    turtlePenDown(t);

    levy(t, 500.0f, 6);

    turtleAppRun(app);
    turtleAppDestroy(app);
    return 0;
}
