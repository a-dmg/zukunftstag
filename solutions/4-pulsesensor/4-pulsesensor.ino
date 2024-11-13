
constexpr unsigned pulse_pin = A0;
constexpr int threshold = 580;

void setup() {
  Serial.begin(115200);
}

void loop() {
  /* How can you read value from the pulse_sensor? */

  int pulse_val = analogRead(pulse_pin);

 /* Visualize  it with the serial plotter. */
  Serial.println(pulse_val);

  /* A good delay is 20 ms */
  delay(20);
}
