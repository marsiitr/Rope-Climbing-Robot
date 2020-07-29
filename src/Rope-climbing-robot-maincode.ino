

#define encoderPinA 2
#define encoderPinB 11

int rotationCount_encoder=0;//no of rotation of encoder
int total_rotation=2000;//total encoder count to grip the rope

//motor 1 is used to grip the rope
//motor 2 is used to climb up and down
int motor1_pwm=5;
int motor2_pwm=6;
int SPEED_motor1=200;
int SPEED_motor2=50;
int motor1Pin1=4;
int motor1Pin2= 13;
int motor2Pin1=7;
int motor2Pin2= 8;

//ultrasonic1 is to measure distance from the bot to the above
//ultrasonic2 is to measure distance from the bot to the floor
int ultrasonic1_echo=9;
int ultrasonic1_trig=10;
int ultrasonic2_echo= 3;
int ultrasonic2_trig=12;
long distance_from_top=0;
long distance_from_bottom=0;

int n=0;/*it is a variable to check that the bot does not go up 
again, after comming to a certain distance*/


void setup() 
{
  Serial.begin(9600);
  pinMode(motor1_pwm,OUTPUT);
  pinMode(motor2_pwm,OUTPUT);
  pinMode(motor1Pin1,OUTPUT);
  pinMode(motor1Pin2,OUTPUT);
  pinMode(motor2Pin1,OUTPUT);
  pinMode(motor2Pin2,OUTPUT);
  pinMode(encoderPinA, INPUT_PULLUP);
  pinMode(encoderPinB, INPUT_PULLUP);
  pinMode(ultrasonic1_echo,INPUT);
  pinMode(ultrasonic1_trig,OUTPUT);
  pinMode(ultrasonic2_echo,INPUT);
  pinMode(ultrasonic2_trig,OUTPUT);
  
  attachInterrupt(0, doEncoder, CHANGE);
}
void doEncoder()
{
  if(digitalRead(encoderPinA)!=digitalRead(encoderPinB))
  {
  rotationCount_encoder++;
  }
  else
  {
  rotationCount_encoder--;
  }
}
long ultrasonic1()
{
  long duration,distance;
 digitalWrite(ultrasonic1_trig,LOW);
  digitalWrite(ultrasonic1_trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(ultrasonic1_trig,LOW);
  duration=pulseIn(ultrasonic1_echo,HIGH);
  distance=(duration/2)*0.034;
  return distance;
}
long ultrasonic2()
{
  long duration,distance;
 digitalWrite(ultrasonic2_trig,LOW);
  digitalWrite(ultrasonic2_trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(ultrasonic2_trig,LOW);
  duration=pulseIn(ultrasonic2_echo,HIGH);
  distance=(duration/2)*0.034;
  return distance;
}


void loop() 
{
  
  if(rotationCount_encoder<total_rotation)//to grip the rope
  {
    analogWrite(motor1_pwm,SPEED_motor1);
	digitalWrite(motor1Pin1,LOW);
 	digitalWrite(motor1Pin2,HIGH);
  }
  else
  {
    analogWrite(motor1_pwm,0);
    digitalWrite(motor1Pin1,LOW);
    digitalWrite(motor1Pin2,LOW);
  }
  
  distance_from_top=ultrasonic1();
  distance_from_bottom=ultrasonic2();
  if(distance_from_top>100&&rotationCount_encoder>=total_rotation&&n%2==0)
  {
    analogWrite(motor2_pwm,SPEED_motor2);
    digitalWrite(motor2Pin1,LOW);
    digitalWrite(motor2Pin2,HIGH);
  }
  
  if(distance_from_top<=100&&rotationCount_encoder>=total_rotation)
  {
    analogWrite(motor2_pwm,SPEED_motor2);
    digitalWrite(motor2Pin1,HIGH);
    digitalWrite(motor2Pin2,LOW); 
    n=1;
   }
   
  if(distance_from_top>100&&n%2!=0)
  {
    analogWrite(motor2_pwm,SPEED_motor2);
    digitalWrite(motor2Pin1,HIGH);
    digitalWrite(motor2Pin2,LOW);
       if(distance_from_bottom<=30)
       {
         analogWrite(motor2_pwm,0);
         delay(5000);
         if(rotationCount_encoder>=0)//to remove the grip after coming down
          {
            analogWrite(motor1_pwm,SPEED_motor1);
            digitalWrite(motor1Pin1,HIGH);
            digitalWrite(motor1Pin2,LOW);
          }
         else
          {
           analogWrite(motor1_pwm,0);
          }
       }
  }
