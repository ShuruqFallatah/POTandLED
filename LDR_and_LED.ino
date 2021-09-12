#define led 3 
#define ldr 0



void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
Serial.begin(96000);

}

void loop() {
  // put your main code here, to run repeatedly:

int adcVal= analogRead(ldr);
Serial.print("adcVal=");
byte pwmval=map(adcVal,0,1023,0,255);
Serial.print("pwmval=");
analogWrite(led,pwmval);
}
