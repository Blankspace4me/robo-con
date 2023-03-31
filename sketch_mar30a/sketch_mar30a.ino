
int num1 = 40;
float num2 = 40.7;
bool flag=  true;
char start='a';


// Turn on an LEDon pin 9
void setup() {
  // put your setup code here, to run once:
// set up pinmodes(either input or output)
pinMode(9,OUTPUT);
digitalWrite(9,HIGH);

void loop() {
  // put your main code here, to run repeatedly:
// blink an LED
pinMode(10,OUTPUT);
digitalWrite(10,HIGH)
delay(1000)
digitalWrite(10,LOW)
delay(1000)
}
