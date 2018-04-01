/* DIY 3D Printed Arc Reactor - Super Make Something Episode 15: https://youtu.be/QTlXr9m182c
 * by: Alex - Super Make Something
 * date: March 2nd, 2018
 * license: Creative Commons - Attribution - Non-Commercial.  More information available at: http://creativecommons.org/licenses/by-nc/3.0/
 */

/*
 * This code contains the follow functions:
 * - void setup(): Sets ATTiny85 pin 0 to output
 * - void loop(): Main loop - Reads the value of a potentiometer, maps the read value to a number between 0-255, and uses this new number to set a PWM command on pin 0
 */

int pwmPin=0;
int analogReadPin=A1;
long brightness=0;

void setup() 
{
     pinMode(pwmPin, OUTPUT);
}

void loop() 
{
     brightness=analogRead(analogReadPin);
     brightness=map(brightness,0,1023,0,255);
     analogWrite(pwmPin,brightness);
     delay(100);
}
