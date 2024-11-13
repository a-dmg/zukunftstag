
/* Let's now use something fun. A neo_pixel: https://www.adafruit.com/product/1260 */

/* How can you program a neo pixel? which library we will need to use? */
/* You can look at the documentation here: https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use */

#include <Adafruit_NeoPixel.h>

constexpr unsigned neopixel_pin = 6;
constexpr unsigned neopixel_nb = 1;

constexpr unsigned pulse_pin = A0;
constexpr int threshold = 460;

Adafruit_NeoPixel pixels(neopixel_nb, neopixel_pin, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  pixels.begin();
}

void loop() {
  /* How can you read value from the pulse_sensor? */

  int pulse_val = analogRead(pulse_pin);

  pixels.setBrightness(20);
  if (pulse_val > threshold) {
    pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  } else {

    pixels.clear();
  }
  pixels.show();

  /* Visualize  it with the serial plotter. */
  Serial.println(pulse_val);

  /* A good delay is 20 ms */
  delay(20);
}
