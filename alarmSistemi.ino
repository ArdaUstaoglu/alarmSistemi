#include "alarm.h"
Alarm alarm(2,3);
void setup() {
  alarm.setup();
}

void loop() {
  alarm.komut("onKapi");  delay(500);
  alarm.komut("arkaKapi");delay(500);
  alarm.komut("sustur");  delay(500);
}
