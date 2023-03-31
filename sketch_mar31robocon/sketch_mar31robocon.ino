//motor 1 variables
int ena = 25;
int in 1 = 26;
int in 2 = 27;

// motor 2 variables
int enb = 14;
int in 3 = 32
int in 4 = 33;

void forward(){
  digitalWrite(in 1,HIGH)
  digitalWrite(in 2,LOW)
  digitalWrite(in 3,HIGH)
  digitalWrite(in 4,LOW)
}

void reverse(){
  digitalWrite(in 1,LOW)
  digitalWrite(in 2,HIGH)
  digitalWrite(in 3,LOW)
  digitalWrite(in 4,HIGH)
}
void setup() {
  // put your setup code here, to run once:
  pinMode(ena,OUTPUT)
  pinMode(in 1,OUTPUT)
  pinMode(in 2,OUTPUT)
  pinMode(enb,OUTPUT)
  pinMode(in 3,OUTPUT)
  pinMode(in 4,OUTPUT)


  ledcAttachPin(ena,2)
  ledcAttachPin(ena,2)
  ledcSetup(ena,2)
}

void loop() {
  // put your main code here, to run repeatedly:

   forward();

   delay(5000);

   forward();

   delay(5000);
}