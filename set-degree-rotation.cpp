#include <Stepper.h>
int button_one = 13;
int button_two = 12;
float steps = 2048;
float step = 360 / steps;
float current_degree;
float stop_degrees = 90;
Stepper stepper(steps, 7, 9, 8, 10);

void setup() {
  pinMode(button_one, INPUT);
  pinMode(button_two, INPUT);
  stepper.setSpeed(10);
}

void loop() {
  if (digitalRead(button_one) & current_degree != stop_degrees) {
    stepper.step(1);
    current_degree += step;
  } else if (digitalRead(button_two) & current_degree != -stop_degrees) {
    stepper.step(-1);
    current_degree -= step;
  }
}
