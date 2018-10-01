#include <SoftwareSerial.h>

SoftwareSerial nova(5, 6);

void setup() {
  Serial.begin(9600);
  nova.begin(9600);
}

void loop() {
  if (nova.available() > 0) {
    Serial.print("Data > ");
    while (nova.available()) {
      byte data = nova.read();
      Serial.print(data);
    }
    Serial.println("");
  }
}
