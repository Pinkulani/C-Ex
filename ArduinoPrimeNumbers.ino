void CheckPrime(int Number) {
  bool Prime = true;
  for (int i = 2; i <= sqrt(Number); i++) {
    if (Number % i == 0) {
      Prime = false;
      break;
    }
  }

  if (Prime == true) {
    Serial.println(Number);
  }
}

void RunCalculation() {
  for (int i = 2; i < 10000 + 1; ++i) {
    CheckPrime(i);
  }
}

void setup() {
  Serial.begin(115200);
  RunCalculation();
}

void loop() {

}


