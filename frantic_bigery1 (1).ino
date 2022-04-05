// C++ code
//
int tombol1 = 0;

int tegangan = 0;

int led = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  led = analogRead(A0);
  tombol1 = analogRead(A1);
  if (tombol1 == 511) {
    digitalWrite(8, HIGH);
    delay(5000); // Wait for 5000 millisecond(s)
  } else {
    digitalWrite(8, LOW);
  }
  if (tombol1 == 341) {
    digitalWrite(9, HIGH);
    delay(5000); // Wait for 5000 millisecond(s)
  } else {
    digitalWrite(9, LOW);
  }
  if (tombol1 == 256) {
    digitalWrite(10, HIGH);
    delay(5000); // Wait for 5000 millisecond(s)
  } else {
    digitalWrite(10, LOW);
  }
}
