int sensorPin=A0;
int values[3]= {0,0,0};
int average = 0;
int delayTime = 200;

void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  delay(delayTime);
  values[1]=analogRead(sensorPin);
  delay(delayTime);
  values[2]=analogRead(sensorPin);
  delay(delayTime);
  values[3]=analogRead(sensorPin);
  delay(delayTime);
  for (int value: values){
    average += value;
  }
  average = average/sizeof(values);
  delay(delayTime);
  Serial.println(average);
}
