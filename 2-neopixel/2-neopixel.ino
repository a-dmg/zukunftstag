
/* Let's now use something fun. A neo_pixel: https://www.adafruit.com/product/1260 */

/* How can you program a neo pixel? which library we will need to use? */
/* You can look at the documentation here: https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use */

// #include </* which library? */>

constexpr unsigned neopixel_pin = /* which pin ? */;
constexpr unsigned neopixel_nb = /* how much ? */;

/* Do we need a global object? */

void setup() {
  /* What should you do in the setup() function to initialize the neo_pixel? */
}

void loop() {
  /* How can you change the color and brightness of the neo_pixel? */
  /* Make a little programm that display all the rainbow colors? */
  
  /* Do not set brightness over 20 while directly looking at the pixel, it can hurt eyes!!! */

  /* A good delay is 20 ms */
  delay(20);
}