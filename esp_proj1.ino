float floatMap(float x, float in_min, float in_max, float out_min, float out_max) 
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void setup() {
  Serial.begin(115200);
}

void loop() {
  int analogValue = analogRead(36);
  float voltage = floatMap(analogValue, 0, 4095, 0, 3.3);

  Serial.print("Analog: ");
  Serial.print(analogValue/30.301);
  Serial.print(", Voltage: ");
  Serial.println(voltage);
  delay(1000);
}
