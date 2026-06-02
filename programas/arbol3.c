#include "turtlec.h"
void arbol3(Turtle* t, float l, int n) {
    if (n == 0 || l < 5) return;
    turtleForward(t, l);
    turtleLeft(t, 30);
    arbol3(t, l * 0.7f, n - 1);
    turtleRight(t, 30);
    arbol3(t, l * 0.7f, n - 1);
    turtleRight(t, 30);
    arbol3(t, l * 0.7f, n - 1);
    turtleLeft(t, 30);
    turtleBackward(t, l);
}
int main() {
    TurtleApp *app = turtleAppCreate(800, 800, "Arbol3");
    if (app == NULL) return 1;

    Turtle *t = turtleAppGetTurtle(app);
    turtleSetSpeed(t, 500);
    turtleSetColor(t, 255, 255, 255);

    turtleHome(t);

    arbol3(t, 100.0f, 4);

    turtleAppRun(app);
    turtleAppDestroy(app);
    return 0;
}

