/* https://www.instructables.com/id/Interface-PIR-Sensor-With-NodeMCU/ */
int Status = 12;
int sensor = 13;

void setup() {
  pinMode(sensor, INPUT); // declare sensor as input
  pinMode(Status, OUTPUT);  // declare LED as output
}

void loop(){
  long state = digitalRead(sensor);
  delay(1000);
    if(state == HIGH){
      digitalWrite (Status, HIGH);
      Serial.begin(115200);
      Serial.println("Motion detected!");
    }
    else {
      digitalWrite (Status, LOW);
      Serial.begin(115200);
      Serial.println("Motion absent!");
      }
}
