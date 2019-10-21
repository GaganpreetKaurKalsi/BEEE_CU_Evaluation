int sensorvalue=0;
int button;
void setup()
{
  pinMode(2, INPUT);
  for(int i=8;i<=13;i++)
    pinMode(i, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorvalue=analogRead(A0);
  Serial.println(sensorvalue);
  button=digitalRead(2);
  if(sensorvalue>600){
    if(button==1){
      for(int i=8;i<=13;i++)
        digitalWrite(i,HIGH);
      delay(250);
      for(int i=8;i<=13;i++)
        digitalWrite(i,LOW);
      delay(250);
    }
    else{
      for(int i=8;i<=13;i++)
        digitalWrite(i,HIGH);
      delay(500);
      for(int i=8;i<=13;i++)
        digitalWrite(i,LOW);
      delay(500);
      
    }
  }
}
