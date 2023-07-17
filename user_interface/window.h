//
// Created by Filip Žitný on 18/07/2023.
//

#ifndef MY_PHONE_OS_WINDOW_H
#define MY_PHONE_OS_WINDOW_H

class Window {
public:
    Window(int width, int height);
    void drawPixel(int x, int y, int color);
    void drawRectangle(int x, int y, int width, int height, int color);
    // ... other methods for drawing shapes, text, etc.
};


#endif //MY_PHONE_OS_WINDOW_H
