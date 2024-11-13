
/* Let's now use something fun. A neo_pixel: https://www.adafruit.com/product/1260 */

/* How can you program a neo pixel? which library we will need to use? */
/* You can look at the documentation here: https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use */

#include <Adafruit_NeoPixel.h>

constexpr unsigned neopixel_pin = 6;
constexpr unsigned neopixel_nb = 1;

Adafruit_NeoPixel pixels(neopixel_nb, neopixel_pin, NEO_GRB + NEO_KHZ800);

void setup() {
  /* What should you do in the setup() function to initialize the neo_pixel? */
  pixels.begin();
}

void loop() {
  /* How can you change the color and brightness of the neo_pixel? */
  /* Make a little programm that display all the rainbow colors? */
  static unsigned red = 0;
  static unsigned green = 0;
  static unsigned blue = 0;
  static bool increase = true;

  pixels.clear();

  pixels.setPixelColor(0, pixels.Color(red, green, blue));
  /* Do not set brightness over 20 while directly looking at the pixel, it can hurt eyes!!! */
  pixels.setBrightness(20);
  pixels.show();

 /* It's a little dummy... */
  if (increase) {
    if (red != 255 && green == 0 && blue == 0) red += 5;
    if (red == 255 && green != 255 && blue == 0) green += 5;
    if (red == 255 && green == 255 && blue < 255) blue += 5;
    if (red == 255 && green == 255 && blue == 255) increase = false;
  } else {
    if (red == 255 && blue == 255 && green != 0) green -= 5;
    if (red != 0 && blue == 255 && green == 0) red -= 5;
    if (red == 0 && blue == 255 && green < 255) green += 5;
    if (red == 0 && blue != 0 && green == 255) blue -= 5;
    if (red == 0 && blue == 0 && green != 0) green -= 5;
    if (red == 0 && green == 0 && blue == 0) increase = true;
  }

  /* A good delay is 20 ms */
  delay(20);
}