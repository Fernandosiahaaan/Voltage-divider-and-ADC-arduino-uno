// C++ code
//
int tombol1 = 0;

int tegangan = 0;

int led = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  led = analogRead(A0);
  tombol1 = analogRead(A1);
  if (tombol1 == 511) {
    Serial.println(tombol1);
    Serial.println(((tombol1 * 5) / 1023));
    digitalWrite(8, HIGH);
    delay(500); // Wait for 500 millisecond(s)
  } else {
    digitalWrite(8, LOW);
  }
  if (tombol1 == 341) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
  if (tombol1 == 256) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
}