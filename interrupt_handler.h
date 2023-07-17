//
// Created by Filip Žitný on 18/07/2023.
//

#ifndef MY_PHONE_OS_INTERRUPT_HANDLER_H
#define MY_PHONE_OS_INTERRUPT_HANDLER_H


extern "C" void interrupt_handler() {
    // Handle the interrupt...

    // Then use assembly to send an "end of interrupt" signal
    asm volatile("EOI");
}

#endif //MY_PHONE_OS_INTERRUPT_HANDLER_H
