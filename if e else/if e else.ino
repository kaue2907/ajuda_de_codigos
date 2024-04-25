// C++ code
//

int botao = 2;
int led = 13;
int pressionado = 0;

void setup()
{
  pinMode(botao, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
 pressionado = digitalRead(botao);
 
 if (pressionado == HIGH)
 {
 digitalWrite(led, HIGH);
 }
 else
  {
 digitalWrite(led, LOW);
  }  
}