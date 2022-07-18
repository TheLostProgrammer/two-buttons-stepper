#include <Stepper.h>
int button_one = 13;
int button_two = 12;
int steps = 2048;
Stepper stepper(steps, 7, 9, 8, 10);

void setup() {
    pinMode(button_one, INPUT);
    pinMode(button_two, INPUT);
    stepper.setSpeed(14);
}

void loop() {
    if (digitalRead(button_one)) {
        stepper.step(1);
    } else if (digitalRead(button_two)) {
        stepper.step(-1);
    }
}