// H
#ifndef UNIT_TEST
#ifdef ARDUINO

#include <Arduino.h>

/* need to include the module here */
#include "mod1.h"

void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println("Hello World");
delay(1000);
}

#else
int main(int argc, char **argv) {
}
#endif
#endif
