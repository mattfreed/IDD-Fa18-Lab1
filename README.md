# IDD-Fa19-Lab1: Blink!

**A lab report by Matt Freed**

**Fork** this repository to get a template for Lab 1 for *Developing and Designing Interactive Devices* at Cornell Tech, Fall 2018. You should modify this `README.md` file to delete this paragraph and update below. As the lab asks:

> Include your responses to the bold questions on your own fork of the lab activities. Include snippets of code that explain what you did. Deliverables are due next Tuesday. Post your lab reports as `README.md` pages on your GitHub, and post a link to that on your main class hub page.

We've copied the questions from the lab here. Answer them below!

## Part A. Set Up a Breadboard

![Image of BreadBoard](https://github.com/mattfreed/IDD-Fa18-Lab1/blob/master/Images/BoardNoBlink.jpg)
![Image of BreadBoard Light On](https://github.com/mattfreed/IDD-Fa18-Lab1/blob/master/Images/BoardBlink.jpg)

## Part B. Manually Blink a LED

**a. What color stripes are on a 100 Ohm resistor?**

     Brown, Black, Brown, Gold
     
**b. What do you have to do to light your LED?**

     Have to run the arduino compiler after connecting your board. Once compiled and uploaded, pressing the switch should light the LED


## Part C. Blink a LED using Arduino

### 1. Blink the on-board LED

**a. What line(s) of code do you need to change to make the LED blink (like, at all)?**

     Did not have to change any code at all from the given example

**b. What line(s) of code do you need to change to change the rate of blinking?**

     Have to change the delay rates
     `delay(250);`
     
**c. What circuit element would you want to add to protect the board and external LED?**

     Would add a diode to prevent any unwanted back surges
     
**d. At what delay can you no longer *perceive* the LED blinking? How can you prove to yourself that it is, in fact, still blinking?**
    
    10 milliseconds. Can output serial prints that say when it is on/off
     
**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**
    
   [Code](https://github.com/mattfreed/IDD-Fa18-Lab1/blob/master/Lab1-blink-onboard.ino)

### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**

   [link to video here](https://youtu.be/LJWWnNuRVoE)


## Part D. Manually fade an LED

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**
    
    Yes, the LED varries its birghtness depending on the position of the potentiameter (due to the change in resistance)

## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?**
    
    Change the pin output to 11
    `pinMode(11, OUTPUT);`

**b. What is analogWrite()? How is that different than digitalWrite()?**
    
    analogWrite?() takes a value between 0 and 255, which allows you to vary the "voltage" output. digitalwrite() can only output HIGH or LOW, with no variation inbetween


## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside. 
![Schematic](https://github.com/mattfreed/IDD-Fa18-Lab1/blob/master/Images/Schematic.jpg)
**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**
  
      Yes, it is on the pcb board. Inside the computer it is analyzing the wifi signal received and determines what to do.
   
**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**
 
     Wifi receiver, wifi transmitter, button for wifi connectivity. The wifi receiver receives a wifi signal and sends it to the computer chip, which determines what to do. The wifi transmitter then sends back information as to whether it was successful or or not. The button is used for the initial wifi connectivity of the device
  
**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**

     The device is powered by a a 120v wall socket adaptor. There is a 5v relay in the device that regulates the 120v from flowing to the next device. The device takes in the 120v and sends 5v to the computer chip, as it works on 5v logic.

**d. Is information stored in your device? Where? How?**
    
    Information is stored on this device on a memory chip. It has to know which devices it can connect to, therefore storing information is required.
### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

**Describe what you did here.**
  
     The Led onboard was powered by 5v, so I was able to use the arduino as auxilary power and connect to the LED, soldering connection points both before and after the LED.
### 3. Build your light!

**Make a video showing off your Frankenlight.**

**Include any schematics or photos in your lab write-up.**
