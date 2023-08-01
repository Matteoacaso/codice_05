#include <Keypad.h>
#include <FastLED.h>
#define NUM_LEDS 63
#define DATA_PIN 4
#define PHOTO_PIN A0   // Pin analogico per il fotoresistore

CRGB leds[NUM_LEDS];
const int righe = 4;
const int colonne = 4;
char keys[righe][colonne] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', '4' },
  { '*', '0', '#', 'D' },
};
byte colpin[colonne] = { 9, 8, 7, 6 };
byte rigpin[righe] = { 13, 12, 11, 10 };


Keypad keypad = Keypad(makeKeymap(keys), rigpin, colpin, righe, colonne);

void setup() {
  FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255); // Imposta la luminosità massima iniziale

}

void loop() {
  int photoValue = analogRead(PHOTO_PIN);
  int brightness = map(photoValue, 0, 1023, 0, 255);
  FastLED.setBrightness(brightness);
char key = keypad.getKey();   //  Leggi la pressione del tasto sul keypad

  
  if (key == '1') {
   leds[0] = CRGB::Black;
   leds[1] = CRGB::Black;
   leds[2] = CRGB::Black;
   leds[3] = CRGB::Black;
   leds[4] = CRGB::Black;
   leds[5] = CRGB::Black;
   leds[6] = CRGB::Black;
   leds[7] = CRGB::Black;
   leds[8] = CRGB::Black;
   leds[9] = CRGB::Blue;
   leds[10] = CRGB::Blue;
   leds[11] = CRGB::Blue;
   leds[12] = CRGB::Blue;
   leds[13] = CRGB::Blue;
   leds[14] = CRGB::Blue;
   leds[15] = CRGB::Black;
   leds[16] = CRGB::Black;
   leds[17] = CRGB::Black;
   leds[18] = CRGB::Black;
   leds[19] = CRGB::Black;
   leds[20] = CRGB::Black;
   FastLED.show();
  }
  if (key == '2') {
  leds[0] = CRGB::Blue;
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[14] = CRGB::Black;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;

  FastLED.show(); 
  }
  if (key == '3') {
  leds[0] = CRGB::Blue;
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::Black;
  leds[20] = CRGB::Black;
  FastLED.show();
  }
  if (key == '4') {
  leds[0] = CRGB::Blue;
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Black;
  leds[7] = CRGB::Black;
  leds[8] = CRGB::Black;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Black;
  leds[16] = CRGB::Black;
  leds[17] = CRGB::Black;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::Black;
  leds[20] = CRGB::Black;
  FastLED.show(); 
  }
  if (key == '5') {
  leds[0] = CRGB::Blue;
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::Black;
  leds[20] = CRGB::Black;
  FastLED.show();
  }
  if (key == '6') {
  leds[0] = CRGB::Blue;
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  FastLED.show(); 
  }
  if (key == '7') {
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Black;
  leds[16] = CRGB::Black;
  leds[17] = CRGB::Black;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::Black;
  leds[20] = CRGB::Black;
  FastLED.show();
  }
  if (key == '8') {
  leds[0] = CRGB::Blue;
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  FastLED.show(); 
  }
  if (key == '9') {
  leds[0] = CRGB::Blue;
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Black;
  leds[16] = CRGB::Black;
  leds[17] = CRGB::Black;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::Black;
  leds[20] = CRGB::Black;
  FastLED.show();
  }
  if (key == '0') {
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  FastLED.show(); 
  }
  if (key == 'A') {
   leds[0] = CRGB::Black;
   leds[1] = CRGB::Black;
   leds[2] = CRGB::Black;
   leds[3] = CRGB::Black;
   leds[4] = CRGB::Black;
   leds[5] = CRGB::Black;
   leds[6] = CRGB::Black;
   leds[7] = CRGB::Black;
   leds[8] = CRGB::Black;
   leds[9] = CRGB::Black;
   leds[10] = CRGB::Black;
   leds[11] = CRGB::Black;
   leds[12] = CRGB::Black;
   leds[13] = CRGB::Black;
   leds[14] = CRGB::Black;
   leds[15] = CRGB::Black;
   leds[16] = CRGB::Black;
   leds[17] = CRGB::Black;
   leds[18] = CRGB::Black;
   leds[19] = CRGB::Black;
   leds[20] = CRGB::Black;
   FastLED.show();
  }
}