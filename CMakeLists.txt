cmake_minimum_required(VERSION 3.25)
project(my_phone_os)

set(CMAKE_CXX_STANDARD 23)

add_executable(my_phone_os main.cpp kernel_start.h kernel_main.h interrupt_handler.h touchscreendriver.cpp touchscreendriver.h sys_call_read.h)
