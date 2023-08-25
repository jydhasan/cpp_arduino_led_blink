#include <Arduino.h>

// led blink
#define LED_PIN 13
void setup()
{
  pinMode(LED_PIN, OUTPUT);
}
// blink led
void loop()
{
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
