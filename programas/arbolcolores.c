#include "turtlec.h"
void arbolcolores(Turtle* t, float l, int n, int r, int g, int b) {
    if (n == 0) return;
    if (n > 0 && r < 255 && g < 255 && b < 255)       turtleSetColor(t, r + 50, g + 50, b + 50);
    turtleForward(t, l);
    turtleLeft(t, 25);
    arbolcolores(t, l * 0.7f, n - 1, r + 50, g + 50, b + 50 );
    turtleRight(t, 50);
    arbolcolores(t, l * 0.7f, n - 1, r + 50, g + 50, b + 50);
    turtleLeft(t, 25);
    turtleBackward(t, l);
}
int main(void) {
    TurtleApp *app = turtleAppCreate(800, 800, "arbolcolores");
    if (app == NULL) return 1;

    Turtle *t = turtleAppGetTurtle(app);
    turtleSetSpeed(t, 500);
    turtleSetColor(t, 100, 100, 100);

    turtleHome(t);

    arbolcolores(t, 100.0f, 6,100,100,100);

    turtleAppRun(app);
    turtleAppDestroy(app);
    return 0;
}
