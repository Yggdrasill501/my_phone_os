//
// Created by Filip Žitný on 18/07/2023.
//

#ifndef MY_PHONE_OS_BUTTON_H
#define MY_PHONE_OS_BUTTON_H

class Button {
public:
    Button(Window& window, int x, int y, int width, int height, const std::string& text);
    void draw();
    void onClick(std::function<void()> callback);
    // ... other methods for handling events, etc.
};

#endif //MY_PHONE_OS_BUTTON_H
