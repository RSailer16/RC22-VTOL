#ifndef RADIO_H
#define RADIO_H

void radioSetup(int ch1Pin, int ch2Pin, int ch3Pin, int ch4Pin, int ch5Pin, int ch6Pin, int ppmPin);
unsigned long getRadioPWM(int chPin);

#endif // RADIO_H
void IMUinit();