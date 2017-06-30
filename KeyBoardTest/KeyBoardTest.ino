#include "DigiKeyboard.h"
/* Init function */
void setup()
{
 //turn LED off while code is running. Unplugging this while active shouldnt hurt anything.
 pinMode(1, OUTPUT); //LED on Model A
 digitalWrite(1, HIGH);
 DigiKeyboard.delay(500);
 digitalWrite(1, LOW);
 DigiKeyboard.sendKeyStroke(0);

 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(100);
 DigiKeyboard.println("notepad");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 
 //line 1
 DigiKeyboard.delay(100);
 DigiKeyboard.println("Perhaps you may find it hard to understand.");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 
 //line 2
 DigiKeyboard.delay(100);
 DigiKeyboard.println("That it is the silent and calm water that drowns a man.");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 
 //line 3
 DigiKeyboard.delay(100);
 DigiKeyboard.println("What seems familiar you do not fear,");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 
 //line 4
 DigiKeyboard.delay(100);
 DigiKeyboard.println("Allowing the burglar to draw ever so near.");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 
 //line 5
 DigiKeyboard.delay(100);
 DigiKeyboard.println("Like a magician your stuff disappears,");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 
 //line 6
 DigiKeyboard.delay(100);
 DigiKeyboard.println("making the need for security ever so clear.");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 
 //line 7
 DigiKeyboard.delay(100);
 DigiKeyboard.sendKeyStroke(KEY_I, MOD_GUI_LEFT);
 DigiKeyboard.delay(100);
 DigiKeyboard.println("-African Proverb");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 
 digitalWrite(1, HIGH);
}

void loop() {}
