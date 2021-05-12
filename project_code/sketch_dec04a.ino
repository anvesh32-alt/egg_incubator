void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  int p;
  p=analogRead(A0);
  Serial.write(p);
  // put your main code here, to run repeatedly:
p=Serial.read();
Serial.println(p);
}
