// Link tinkercad
// https://www.tinkercad.com/things/31484rSBl4D/editel?sharecode=uzluq3YwJqzLXLZ-x0NdjSutqrhZuBPJUKOws6zJWFo

#define vermelho 13
#define amarelo 12
#define verde 11

void setup() {
 
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}
 
void loop() {
  
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
 
  delay(1000);
 
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);

  delay(3000);  
 
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);

  delay(3000);
}