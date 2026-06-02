#include "turtlec.h"
void ADT(Turtle* t, float l, int n) {
    if  (n == 0) return;

    turtleForward(t, l);
    turtleLeft(t, 30);
    ADT(t, l * 0.5f, n - 1);
    turtleRight(t, 30);
    turtleRight(t, 30);
    ADT(t, l * 0.85f, n - 1);
    turtleLeft(t, 30);
    turtleBackward(t, l);
}

int main() {
    TurtleApp *app = turtleAppCreate(800, 800, "ArbolDifTam");
    if (app == NULL) return 1;

    Turtle *t = turtleAppGetTurtle(app);
    turtleSetSpeed(t, 500);
    turtleSetColor(t, 255, 255, 255);

    turtleHome(t);

    ADT(t, 100.0f, 6);

    turtleAppRun(app);
    turtleAppDestroy(app);
    return 0;
}
