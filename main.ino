int LeftMotorBackward = 2 ;
int LeftMotorForwar =    3;       
int RightMotorBackward = 4;
int RightMotorForward = 5;

int LeftMotorEN = 9;
int RightMotorEN = 10;


void setup() {
  // put your setup code here, to run once:
pinMode(LeftMotorBackward, OUTPUT);
pinMode(LeftMotorForward, OUTPUT);
pinMode(RightMotorBackward, OUTPUT);
pinMode(RightMotorForward, OUTPUT);

pinMode(RightMotorEN, OUTPUT);
pinMode(LeftMotorEN, OUTPUT);

analogWrite(LeftMotorEN, 180);
analogWrite(RightMotorEN, 180);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, HIGH);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(3000);


digitalWrite(LeftMotorForward, LOW);
digitalWrite(RightMotorForward, HIGH);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(1500);

digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, HIGH);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(3700);

digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, LOW);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(1500);

digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, HIGH);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(4000);

digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, LOW);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(1500);

digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, HIGH);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(2000);

digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, LOW);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(1500);

digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, HIGH);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(2000);

digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, LOW);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(1500);

digitalWrite(LeftMotorForward, HIGH);
digitalWrite(RightMotorForward, HIGH);
digitalWrite(LeftMotorBackward, LOW);
digitalWrite(RightMotorBackward, LOW);
delay(2000);

}
