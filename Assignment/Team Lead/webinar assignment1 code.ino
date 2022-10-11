
/*   
webinar Assignment 1 :

If temperature raises 60 degree or above and any movements detected  by PIR sensor,The buzzer should  ON  to indicate  the temperature raise or movements.
Access Link :
https://www.tinkercad.com/things/7LJUd2SqjS2-frantic-bigery-bruticus/editel

*/

//  program :



void setup()
{
Serial.begin(9600);   //bourd rate
  pinMode(2,INPUT);
}   

void loop()
 {
 // PIR sensor
  int m=digitalRead(2);    //PIR output
  Serial.println("Motion:");
  Serial.println(m);
 // Temperature sensor
  
  double d=analogRead(A5); //Temerature sensor output
  double n=d/1024;
  double v=n*5;
  double off=v-0.5;
  double t=off*100; //electric to temperatureconvertion 
  Serial.println("Temperature:");
  Serial.println(t);
   
  if((t>=60)||(m==1))  
    tone(3,1500,50);
  
 }
  

   