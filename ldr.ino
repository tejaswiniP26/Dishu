// KY-013 Temperature Sensor (LM35) Example
const int analogPin = A0; // Connect the sensor to analog pin A0
float temperatureCelsius;

void setup() {
  Serial.begin(9600); // Initialize the serial communication
}

void loop() {
  int sensorValue = analogRead(analogPin); // Read the analog value from the sensor
  float voltage = (sensorValue / 1024.0) * 5.0; // Convert to voltage (LM35 output is 0-1V)
  temperatureCelsius = (voltage - 0.5) * 100.0; // Convert to temperature in Celsius

  Serial.print("Temperature: ");
  Serial.print(temperatureCelsius);
  Serial.println(" °C");

  delay(1000); // Delay for 1 second before taking the next reading
}