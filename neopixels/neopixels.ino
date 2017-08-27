// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      60

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.

//  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  //  pixels.setPixelColor(i, pixels.Color(0,150,0)); // Moderately bright green color.

    //pixels.show(); // This sends the updated pixel color to the hardware.
//
  //  delay(1000); // Delay for a period of time (in milliseconds).

   
  //}
  call_m();
  space();
  call_a();
  space();
  call_k();
 space();
 call_e();
 space_b();
call_i();
space();
call_n();
space_b();
call_i();
space();
call_n();
space();
call_d();
space();
call_i();
space();
call_a();
  exit(0);
  
}

void call_m()
{
  for(int i=0;i<60;i++)
   pixels.setPixelColor(i, pixels.Color(255,0,0));
   
  pixels.show();
  
  delay(200);
  for(int i=18; i<=60; i++)
    pixels.setPixelColor(i, pixels.Color(0,0,0));
  
  pixels.show();
  delay(200);
  
  for(int i=18; i<=36; i++)
    pixels.setPixelColor(i, pixels.Color(255,0,0));
  
    pixels.show();
    delay(200);
  
  for(int i=18; i<=36; i++)
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    
    pixels.show();
    delay(200);
  for(int i=18; i<=60; i++)
     pixels.setPixelColor(i, pixels.Color(255,0,0));
    
    pixels.show();
    delay(200);
}

void space(){
  for(int i=0;i<=60;i++)
    pixels.setPixelColor(i, pixels.Color(0,0,0));
 
    pixels.show();
    delay(200);
}

void call_a(){
  for(int i=0;i<=60;i++)
    pixels.setPixelColor(i, pixels.Color(0,255,0));

    pixels.show();
    delay(200);

    for(int i=15;i<=30;i++)
    pixels.setPixelColor(i, pixels.Color(0,0,0));

    for(int i=31;i<=40;i++)
    pixels.setPixelColor(i, pixels.Color(0,255,0));

    for(int i=41; i<=60; i++)
    pixels.setPixelColor(i, pixels.Color(0,0,0));

    pixels.show();
    delay(500);

    for(int i=15;i<=30;i++)
    pixels.setPixelColor(i, pixels.Color(0,255,0));

     for(int i=41; i<=60; i++)
    pixels.setPixelColor(i, pixels.Color(0,255,0));

    pixels.show();
    delay(200);
}
void call_k()
{
   for(int i=0;i<=60;i++)
    pixels.setPixelColor(i, pixels.Color(0,0,255));

    pixels.show();
    delay(250);

    for(int i=0;i<=20;i++)
     pixels.setPixelColor(i, pixels.Color(0,0,0));

     for(int i=41;i<=60;i++)
      pixels.setPixelColor(i, pixels.Color(0,0,0));

      pixels.show();
      delay(250);

      for(int i=15; i<=21; i++)
       pixels.setPixelColor(i, pixels.Color(0,0,255));

       for(int i=25; i<=35; i++)
        pixels.setPixelColor(i, pixels.Color(0,0,0));

       for(int i=40;i<=47;i++)
        pixels.setPixelColor(i, pixels.Color(0,0,255)); 
       
       pixels.show();
       delay(250);

       for(int i=0; i<=14; i++)
       pixels.setPixelColor(i, pixels.Color(0,0,255));

       for(int i=20; i<=39; i++)
       pixels.setPixelColor(i, pixels.Color(0,0,0));
       
        for(int i=41; i<=60; i++)
       pixels.setPixelColor(i, pixels.Color(0,0,255));

       pixels.show();
       delay(250);
}

void call_e()
{
   for(int i=0;i<=60;i++)
    pixels.setPixelColor(i, pixels.Color(255,255,0));
    pixels.show();
    delay(330);

  for(int i=12;i<=24;i++)
    pixels.setPixelColor(i, pixels.Color(0,0,0));

  for(int i=37; i<=48; i++)
    pixels.setPixelColor(i, pixels.Color(0,0,0));

    pixels.show();
    delay(340);

    for(int i=25;i<=36;i++)
       pixels.setPixelColor(i, pixels.Color(0,0,0));

        pixels.show();
        delay(330);

}
void space_b(){
  for(int i=0;i<=60;i++)
    pixels.setPixelColor(i, pixels.Color(0,0,0));
 
    pixels.show();
    delay(500);
}

void call_i(){
  for(int i=0;i<=15;i++)
    pixels.setPixelColor(i, pixels.Color(255,0,255));

   for(int i=45;i<=60;i++)
    pixels.setPixelColor(i, pixels.Color(255,0,255));

     pixels.show();
     delay(250);

   for(int i=15;i<=44;i++)
    pixels.setPixelColor(i, pixels.Color(255,0,255));
    
    pixels.show();
    delay(500);

   for(int i=15;i<=44;i++)
   pixels.setPixelColor(i, pixels.Color(0,0,0));

      pixels.show();
      delay(250);
}

void call_n(){
  for(int i=0; i<=60; i++)
     pixels.setPixelColor(i, pixels.Color(0,255,255));

      pixels.show();
      delay(200);
  
  for(int i=26;i<=60;i++)
    pixels.setPixelColor(i, pixels.Color(0,0,0));

          pixels.show();
          delay(200);

   for(int i=0; i<=20; i++)
   pixels.setPixelColor(i, pixels.Color(0,0,0));

     for(int i=21;i<=45;i++)
        pixels.setPixelColor(i, pixels.Color(0,255,255));

        pixels.show();
        delay(200);
    
    for(int i=21;i<=39;i++)
     pixels.setPixelColor(i, pixels.Color(0,0,0));

    for(int i=40; i<=60; i++)
     pixels.setPixelColor(i, pixels.Color(0,255,255)); 

    pixels.show();
    delay(200);

    for(int i=0;i<=40;i++)
     pixels.setPixelColor(i, pixels.Color(0,255,255));

     pixels.show();
     delay(200);
                      
}

void call_d(){
  for(int i=0;i<=15;i++)
   pixels.setPixelColor(i, pixels.Color(255,0,255));

   
   for(int i=45; i<=60; i++)
    pixels.setPixelColor(i, pixels.Color(255,0,255));

    pixels.show();
    delay(200);

  for(int i=16;i<=44;i++)
   pixels.setPixelColor(i, pixels.Color(255,0,255));

    pixels.show();
    delay(200);   

for(int i=16;i<=44;i++)
  pixels.setPixelColor(i, pixels.Color(0,0,0));

  pixels.show();
    delay(200);

   for(int i=16;i<=44;i++)
  pixels.setPixelColor(i, pixels.Color(255,0,255));

  pixels.show();
    delay(200);
    

}
