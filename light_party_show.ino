void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  for (int pin = 2; pin <= 10; pin++) {
    digitalWrite(pin, HIGH);
    delay(100);
  }
  for (int pin = 2; pin <= 10; pin++) {
    digitalWrite(pin, LOW);
    delay(100);
  }
  for (int i = 0; i < 4; i++) {
    for (int pin = 2; pin <= 10; pin++) {
      digitalWrite(pin, HIGH);
      delay(10);
    }
    for (int pin = 2; pin <= 10; pin++) {
      digitalWrite(pin, LOW);
      delay(10);
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int pin = 2; pin <= 10; pin++) {
      digitalWrite(pin, HIGH);
    }
    delay(100);
    for (int pin = 2; pin <= 10; pin++) {
      digitalWrite(pin, LOW);
    }
    delay(100);
  }
  for (int i = 0; i < 4; i++) {
    for (int i = 0; i < 15; i++) {
      digitalWrite(random(2, 10), HIGH);
      delay(20);
    }
    for (int pin = 2; pin <= 10; pin++) {
      digitalWrite(pin, LOW);\
    }
  }
  
}
