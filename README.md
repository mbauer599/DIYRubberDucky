**Disclaimer: This is not intended to be used maliciously, and I will take no responsibility in actions that were not my own. Sorry but I have too much going on in my own life to worry about yours.**

This is a proof of concept for a homemade $2 rubber ducky. It was created to be a command and control hub, as well as store all the source code for anyone who wants to have a little fun. 

Hardware Used:
  ATtiny 85 USB Dev Board (http://digistump.com/products/1)
    I suggest you buy this on eBay, best deal I've seen is $0.99 with $1 shipping. You could use any USB dev board for this however. 
    You can find the device driver for the ATtiny 85 processor here:
       -- https://cdn.sparkfun.com/datasheets/Dev/AVR/usbtinyisp_libusb_1.2.6.0.zip

This Repo contains the .ino source code needed to utilize PowerShell to run everything in the 'run' file in the directory on GitHub. If you want to use this same style, just fork this repo, change the URL the source code points too to the raw of the run file in your repo, flash it to your USB device, and add code to the 'run' file as you see fit. Each time you plug in the device it will open powershell through the run window, execute wget <URL to raw of run file>, save that as a script, and execute.

**Note**
This is a keyboard emulation device, meaning it will work on anything that will support a USB keyboard. Windows, Mac, Linux, it cares not. There are obvious dificulties with trying to run PowerShell in the latter two however, so the firmware will have to be edited to suit your purpose.


Files:
KeyBoardTest:
Test the keyboard emulation function by opening notepad and printing a paragaraph.

KeyBoardRun:
Key Board Emulator program written for Arduino Studio to execute immediately upon USB Device loading on the system.

KeyBoardPersistant:
Key Board Emulator program written for Arduino Studio to execute 30 minutes after USB Device is loaded on the system.


Future Plans:
  -- Seperate repositories for each build
  -- Upload keyboard output to device without flashing
  -- Keystroke time fuzzing
  -- Bash version
  
  
  If you enjoy this project then keep me going with a cup of coffee! paypal.me/mbauer599
