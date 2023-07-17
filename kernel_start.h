//
// Created by Filip Žitný on 18/07/2023.
//

#ifndef MY_PHONE_OS_KERNEL_START_H
#define MY_PHONE_OS_KERNEL_START_H

include "kernel_main.h"


extern "C" void KernelStart(void){
    // Initialize hardware, set up memory, etc.

    // Call the main kernel function
    kernel_main();
}


#endif //MY_PHONE_OS_KERNEL_START_H
