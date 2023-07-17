//
// Created by Filip Žitný on 18/07/2023.
//

#include "myapp.h"
class MyApp {
public:
    MyApp(Window& window)
            : button(window, 50, 50, 100, 50, "Click me!") {
        button.onClick([this]() {
            this->buttonClicked();
        });
    }

    void buttonClicked() {
        // handle button click event
    }

private:
    Button button;
};