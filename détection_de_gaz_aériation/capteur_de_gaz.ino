int capteur= A1;
int led =6;
int buzzer=4;
void setup()

{
  Serial.begin(9600);
  pinMode(led , OUTPUT);
  pinMode(capteur , INPUT);
  pinMode(buzzer,OUTPUT);
  
}

void loop()
{
 int valeur=analogRead(capteur);
 Serial.println(valeur);
 if (valeur>200)
 {
  digitalWrite(led, HIGH);
  tone(buzzer,200);
  }
  else
  {
  digitalWrite(led, LOW);
  noTone(buzzer);
  }
}
