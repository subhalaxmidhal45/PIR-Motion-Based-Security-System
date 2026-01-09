// C++ code
//
int pir = 0;

void setup()
{
  pinMode(5, INPUT);
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  pir = digitalRead(5);
  Serial.println(pir);
  if (pir == 1) {
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}