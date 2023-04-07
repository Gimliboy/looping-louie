#define LED D4  // LED on NOdeMCU at PIN GPIO2
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(50);
  digitalWrite(LED, HIGH);
  delay(50);
}
