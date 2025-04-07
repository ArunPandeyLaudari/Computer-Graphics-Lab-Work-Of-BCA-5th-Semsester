#include <graphics.h>


int main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    initgraph(&gd, &gm, (char*)"");

    // Draw a circle with center (300, 300) and radius 100
//    circle(300, 300, 100);
	line(100,100,500,100);

    // Wait for a key press before closing the graphics window
    getch();

    // Close the graphics mode and release resources
    closegraph();

    return 0;
}

