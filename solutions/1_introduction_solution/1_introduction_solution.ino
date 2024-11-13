
/* What does this function does? */
/* This function is called once before the loop() function. */
void setup() {
  Serial.begin(115200);
}

/* What does this function does? */
/* Once the setup() function has been called once, the loop() function is called repetitively */
void loop() {
  /* let's greet first, coudld you write 'Hello friend' one the console? */
  Serial.println("hello friend");
  /* would you help me writing any mumber from 0 to 10? */
  for (unsigned i = 0; i < 11; ++i) {
    Serial.println(i);
  }
  /* maybe this is going a little too fast, how can we make it slower? */
  delay(5000);
}