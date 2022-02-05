//////////////////////////////////////////////////////////////////
// Allen Reed 
// Actual code last modified late 2018
// This project was made during high school.
// You must use 176 LEDs (26 for alphabet and 150 off the wall) for the timing to be correct
// Programming this was very tedious, so I am not changing anything now
//////////////////////////////////////////////////////////////////


#include "FastLED.h"
#define DATA_PIN 6
#define LED_TYPE WS2811
#define NUM_LEDS 176
CRGB leds[NUM_LEDS];
#define BRIGHTNESS 96
#define COLOR_ORDER RGB
#define FRAMES_PER_SECOND  100
int i = 0;
float SmallNumber = 1;

void setup() {
  delay(2500);
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);

}


void loop() {
  //////////////////////////////////////////////////////////////////
  //Netflix Stranger Things Title Sequence

  ///////////////////////////////////
  //Brightness fades in and out in red
  float SmallNumber = 0;
  int TheLimit = 1;

  //Brightens Red

  while (TheLimit == 1) {              
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = CRGB(SmallNumber + 20, 0, 0);
    }
    FastLED.show();
    delay(.49);
    SmallNumber += .07;

    if (SmallNumber > 108) {
      TheLimit = 2;
    }


    //Dims Red
    while (TheLimit == 2) {
      for (int i = 0; i < NUM_LEDS; i++) {
        leds[i] = CRGB(SmallNumber + 20, 0, 0);
      }
      FastLED.show();
      delay(.5);
      SmallNumber -= .07;

      if (SmallNumber < 2) {
        TheLimit = 1;
      }
    }
  }


  //////////////////////////////////////////
  //An LED goes up and down strip
  int x = 0;
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(10, 0, 0);
  }
  while (x <= NUM_LEDS) {
    leds[x] = CRGB(200, 0, 0);
    leds[x - 1] = CRGB(100, 0, 0);
    leds[x - 2] = CRGB(50, 0, 0);
    leds[x - 3] = CRGB(10, 0, 0);
    FastLED.show();
    delay(14000 / NUM_LEDS);
    x += 1;
  }

  //Goes back
  x = NUM_LEDS - 3;
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(10, 0, 0);
  }
  while (x >= 0) {
    leds[x] = CRGB(200, 0, 0);
    leds[x + 1] = CRGB(100, 0, 0);
    leds[x + 2] = CRGB(50, 0, 0);
    leds[x + 3] = CRGB(10, 0, 0);
    FastLED.show();
    delay(14000 / NUM_LEDS);
    x -= 1;
  }

  leds[0] = CRGB(100, 0, 0);
  leds[1] = CRGB(50, 0, 0);
  leds[2] = CRGB(10, 0, 0);
  FastLED.show();
  delay(200);


  leds[0] = CRGB(50, 0, 0);
  leds[1] = CRGB(10, 0, 0);
  FastLED.show();
  delay(100);


 
  FastLED.clear();


  ///////////////////////////////////////////////////////////////////
  //SHOULD I STAY OR SHOULD I GO?
  //Make a white light iterate through LEDs


  for (int r = 0; r < NUM_LEDS; r++) { //Loop for some random lights to be colored


    long q = random(2); //q w and e are random colors
    long w = random(2);
    long e = random(2);
    int y = random(0, 2); //How many lights to skip blank
    leds[r] = CRGB(q * 100, w * 100, e * 100);

    if (y != 0) {    //If not 0, maybe subtract one from y
      int y2 = random(0, 1);
      y -= y2;
    }

    r += y;
  }

  FastLED.show();
  delay(2900);

  ///////////////////  Makes a white dot go down the leds
  leds[1] = CRGB::White;
  FastLED.show();
  delay(495);

  for (int s = 1; s < NUM_LEDS; s++) {
    leds[s] = CRGB::White;
    long q = random(2); //q w and e are random colors
    long w = random(2);
    long e = random(2);
    int y = random(0, 6);   //How many lights to skip blank

    if (y != 6) {
      leds[s - 1] = CRGB(q * 100, w * 100, e * 100);
    }
    FastLED.show();
    delay(495);
  }


  FastLED.clear();

  ////////////Fill in some time     //IS NEEDED (If you have extra lights that aren't on the wall)
  float Time = 90 - (.5 * NUM_LEDS + 8); //Switch 90 for time of song
  for (int h = 0; h < NUM_LEDS; h++) {

    long q = random(5); //q w and e are random colors
    long w = random(5);
    long e = random(5);
    int y = random(15);  //How many lights to skip blank

    leds[h] = CRGB(q * 40, w * 40, e * 40);

    if (y == 15) {
      leds[h] = CRGB::Black;
    }
  }

  FastLED.show();
  delay(Time * 992);

  //////////////////////////////////////////////////////////////////////////////////////////
  // R I G H T   H E R E   and   R U N

  for (int blacken = 0; blacken < 26; blacken++) { //Clear the wall but not all LEDs off the wall
    leds[blacken] = CRGB::Black;
  }

  FastLED.show();
  delay(6200);

  leds[17] = CRGB(50, 50, 255); //R
  FastLED.show();
  delay(2700);
  leds[17] = CRGB::Black;
  FastLED.show();
  delay(1600);

  leds[8] = CRGB::Blue; //I
  FastLED.show();
  delay(1380);
  leds[8] = CRGB::Black;
  FastLED.show();
  delay(1500);

  leds[6] = CRGB::Red; //G
  FastLED.show();
  delay(1480);
  leds[6] = CRGB::Black;

  leds[7] = CRGB::Blue; //H
  FastLED.show();
  delay(980);
  leds[7] = CRGB::Black;

  leds[19] = CRGB::Yellow; //T
  FastLED.show();
  delay(1000);
  leds[19] = CRGB::Black;
  FastLED.show();
  delay(480);

  leds[7] = CRGB::Blue; //H
  FastLED.show();
  delay(990);
  leds[7] = CRGB::Black;

  leds[4] = CRGB::Blue; //E
  FastLED.show();
  delay(990);
  leds[4] = CRGB::Black;

  leds[17] = CRGB(0, 0, 255); //R
  FastLED.show();
  delay(980);
  leds[17] = CRGB::Black;

  leds[4] = CRGB::Blue; //E
  FastLED.show();
  delay(980);
  leds[4] = CRGB::Black;
  FastLED.show();
  delay(14000);

  leds[17] = CRGB(50, 50, 255); //R
  FastLED.show();
  delay(1000);
  leds[17] = CRGB::Black;
  FastLED.show();
  delay(990);

  leds[20] = CRGB::Blue; //U
  FastLED.show();
  delay(2000);
  leds[20] = CRGB::Black;
  FastLED.show();
  delay(1390);

  leds[12] = CRGB::Red; //N
  FastLED.show();
  delay(1800);
  FastLED.clear();
  delay(1280);

  ///////////////////////////////////////////////////////////////////////////
  // Monster Crazyness
  //Make LEDs flicker and change colors like crazy
  for (int c = 0; c < 40; c++) {              //Time seconds/100
    for (int j = 0; j < 26; j++) {
      long q = random(5); //q w and e are random colors
      long w = random(5);
      long e = random(5);
      int y = random(5);  //How many lights to skip blank
      if (y != 5) {
        leds[j] = CRGB(q * 40, w * 40, e * 40);
      }
    }
    int w = c % 5; //Make the lights not on the wall change color less frequently, so people dont have a siezure or migraine
    if (w == 0) {
      for (int d = 27; d < NUM_LEDS; d++) {
        long q = random(5); //q w and e are random colors
        long w = random(5);
        long e = random(5);
        int y = random(15);  //How many lights to skip blank
        leds[d] = CRGB(q * 40, w * 40, e * 40);
        if (y == 15) {
          leds[d] = CRGB::Black;
        }
      }
    }
    FastLED.show();
    delay(100);                // The /100 on the comment in c's loop on line 292 (lines are found in bottom left)
  }


  /////////////////////////////////////////////////////////////////////
  //THE UPSIDEDOWN
  //Blue lights iterating through the LED's
  FastLED.clear();
  FastLED.show();
  delay(12400);

  leds[0] = CRGB::White;
  FastLED.show();
  delay(1000);

  for (int l = 1; l < NUM_LEDS; l++) {
    leds[l] = CRGB::White;
    long q = random(1, 9); //q w and e are random colors
    long w = random(1, 9);
    long e = random(1, 4);
    leds[l - 1] = CRGB(q * 5, w * 5, e * 40);
    FastLED.show();
    delay(174000 / (NUM_LEDS - 1));
  }
  delay(3600);

}
