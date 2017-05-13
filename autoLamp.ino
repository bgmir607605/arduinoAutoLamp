#include <LiquidCrystal_I2C.h>

// Фоторезистор
// 5В на резистор
// Землю на фоторезистор
int ldr = 0; // Аналоговый порт фоторезистора - спайка фоторезистора с обычным

// Реле
// 5В
// Земля
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
