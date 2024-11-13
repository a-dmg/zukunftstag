
/* Let's now use something fun. A neo_pixel: https://www.adafruit.com/product/1260 */

/* How can you program a neo pixel? which library we will need to use? */
/* You can look at the documentation here: https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use */

#include <Adafruit_NeoPixel.h>

constexpr unsigned pot_pin = A2;
constexpr unsigned neopixel_pin = 6;
constexpr unsigned neopixel_nb = 1;

Adafruit_NeoPixel pixels(neopixel_nb, neopixel_pin, NEO_GRB + NEO_KHZ800);

void setup() {
  /* What should you do in the setup() function to initialize the neo_pixel? */
  pixels.begin();
}

void loop() {
  /* Can you make a program, control the neopixel with a potentiometer instead of a loop? */
  /* You can find information here: https://docs.arduino.cc/learn/electronics/potentiometer-basics/ */

  static int red = 0;
  static int green = 0;
  static int blue = 0;

  pixels.clear();

  int pot_val = analogRead(pot_pin);

  if (0 < pot_val && pot_val < 340)
    red = pot_val * 255 / 340;
  else
    red = 0;

  if (170 < pot_val && pot_val < 510)
    green = (pot_val - 170) * 255 / 340;
  else
    green = 0;

  if (340 < pot_val && pot_val < 680)
    blue = (pot_val - 340) * 255 / 340;
  else
    blue = 0;

  pixels.setPixelColor(0, pixels.Color(red, green, blue));
  /* Do not set brightness over 20 while directly looking at the pixel, it can hurt eyes!!! */
  pixels.setBrightness(20);
  pixels.show();

  /* A good delay is 20 ms */
  delay(10);
}