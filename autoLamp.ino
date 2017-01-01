#include <LiquidCrystal_I2C.h>

int ldr = 0; // Аналоговый порт фоторезистора
int relayPin = 2; // Цифровой порт порт реле

void setup()
{
  pinMode(relayPin, OUTPUT);  // установить порт как исходящий
}

void loop() //процедура loop
{
  if (analogRead(ldr) < 350){
    digitalWrite(relayPin, HIGH);  // включить реле
  }

  //если показатель освещенности меньше 350, выключаем реле
  else {
    digitalWrite(relayPin, LOW);   // выключить реле
  }
  delay(30000);
}
