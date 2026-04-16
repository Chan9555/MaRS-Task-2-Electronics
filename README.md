# MaRS-Task-2-Electronics

Name - B Sree Charan Reddy

Roll No - EC25I2011

Task No -2 (Controlling motor direction using WASD in keyboard)

Code Logic : So initially I am declaring the pinmodes for the IN 1-4 pins as OUTPUT.

Then I am establishing the connection between UNO and computer using Serial.begin(9600).

Then in the loop , using Serial.available() I am checking if an input is given and if its TRUE then i am reading the input and storing it in a char variable C. Then I am checking the value of C i.e, if C is 'w' then both the motors should move in forward direction so the IN1,IN3 pins are set to HIGH and IN2,IN4 pins are set to LOW.

If c is 's' then motor should move backwards so the IN2,IN4 Pins are set to HIGH and IN1,IN3 pins are set to LOW.

If c is 'a' then motor should turn left which can be achieved by making it such that the right motor is moving forward while the left motor is moving backward.

If c is 'd' then motor should turn right which can be achieved by making it such that the left motor is moving forward while the left motor is moving backward.

Then finally I have given a random character which can be used to stop the motor by setting all the 4 pins of IN at LOW.


