//
// Created by Filip Žitný on 18/07/2023.
//

#ifndef MY_PHONE_OS_KERNEL_H
#define MY_PHONE_OS_KERNEL_H


class Kernel {
public:
    // constructor
    Kernel() {
        // Initialization code here
    }

    // main function that starts the kernel
    void start() {
        // Initialization code here...

        // Endless loop to prevent kernel from returning (which would be an error)
        while (true) { /* ... */ }
    }

    // You might have other methods for handling interrupts, system calls, etc.
    void handleInterrupt(/* ... */) {
        // Handle the interrupt
    }
};


#endif //MY_PHONE_OS_KERNEL_H
