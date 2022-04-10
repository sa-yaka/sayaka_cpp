#include <stdio.h>
#include <wiringPi.h>

int main() {
  wiringPiSetup();
  // int i = 0;
  pinMode(1, OUTPUT);
  while (1) {
    printf("turn off led\n");
    digitalWrite(1, HIGH);
    delay(1000);
    printf("turn on led\n");
    digitalWrite(1, LOW);
    delay(1000);
  }
  return 0;
}