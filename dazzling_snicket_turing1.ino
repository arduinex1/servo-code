#include <Servo.h>
Servo servo;
Servo servo1;

void setup() {
  servo.attach(6);
servo1.attach(5);

servo.write(0);
servo1.write(90);
  // put your setup code here, to run once:
}

void loop() {

move_1();
delay(500);
move_2();
delay(500);
}

void move_1()
{
for(int i=90; i>=60; i--)
{
  servo1.write(i);
  delay(40);
}
  for(int i=60; i<=120; i++)
  {
    servo1.write(i);
    delay(40);
  }
  for(int i=120; i>=90; i--)
  {
  servo1.write(i);
  delay(40);
  }  

  for(int i=0; i<=45; i++)
  {
  servo.write(0+i);
  delay(40);
  }
  for(int i=90; i>=60; i--)
 {
  servo1.write(i);
  delay(40);
}
  for(int i=60; i<=120; i++)
  {
    servo1.write(i);
    delay(40);
  }
  for(int i=120; i>=90; i--)
  {
  servo1.write(i);
  delay(40);
  }   
    
  for(int i=45; i<=90; i++)
  {
  servo.write(0+i);
  delay(40);
  }
  for(int i=90; i>=60; i--)
{
  servo1.write(i);
  delay(40);
}
  for(int i=60; i<=120; i++)
  {
    servo1.write(i);
    delay(40);
  }
  for(int i=120; i>=90; i--)
  {
  servo1.write(i);
  delay(40);
  }  

  for(int i=90; i<=135; i++)
  {
  servo.write(0+i);
  delay(40);
  }
    for(int i=90; i>=60; i--)
{
  servo1.write(i);
  delay(40);
}
  for(int i=60; i<=120; i++)
  {
    servo1.write(i);
    delay(40);
  }
  for(int i=120; i>=90; i--)
  {
  servo1.write(i);
  delay(40);
  }  

  for(int i=135; i<=180; i++)
  {
  servo.write(0+i);
  delay(40);
  }
    for(int i=90; i>=60; i--)
{
  servo1.write(i);
  delay(40);
}
  for(int i=60; i<=120; i++)
  {
    servo1.write(i);
    delay(40);
  }
  for(int i=120; i>=90; i--)
  {
  servo1.write(i);
  delay(40);
  }  

  for(int i=180; i>=0; i--)
  {
  servo.write(i);
  delay(40);
  }
     
}

void move_2()
{
servo1.write(90);
delay(40);

for(int i=0; i<=180; i++)
{
  servo.write(i);
delay(40);
}
for(int i=180; i>=0; i--)
{
  servo.write(i);
delay(40);
}
servo1.write(90);
delay(40);
}