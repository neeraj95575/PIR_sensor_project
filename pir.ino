int pir_sensor = 8;
int led = 12;
void setup() 
{
  Serial.begin(9600);
  pinMode(pir_sensor, INPUT);
  pinMode(led, OUTPUT);  
}
void loop() 
{
  int value = digitalRead(pir_sensor);
  Serial.print("value = ");
  Serial.println(value);
  if (value == HIGH)
  {
    digitalWrite(led, LOW); 
  }
  else
  {
   digitalWrite(led,HIGH);  
  }
}
