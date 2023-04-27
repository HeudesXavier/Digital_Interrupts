#include "mbed.h"

InterruptIn joystick_up(A0);
InterruptIn joystick_down(A1);
InterruptIn joystick_left(A2);
InterruptIn joystick_right(A3);

void up_handler() {
    printf("Joystick pushed up\r\n");
}

void down_handler() {
    printf("Joystick pushed down\r\n");
}

void left_handler() {
    printf("Joystick pushed left\r\n");
}

void right_handler() {
    printf("Joystick pushed right\r\n");
}

int main() {
    joystick_up.rise(&up_handler);
    joystick_down.rise(&down_handler);
    joystick_left.rise(&left_handler);
    joystick_right.rise(&right_handler);

    while (1) {
        // do nothing
    }
}
