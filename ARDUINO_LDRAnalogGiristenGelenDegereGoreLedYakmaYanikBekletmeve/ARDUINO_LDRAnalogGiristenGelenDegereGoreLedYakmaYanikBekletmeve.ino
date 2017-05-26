//ÖRNEK(I. YOL): LDR modülünden okunan analog değeri 570'den büyük veya eşitse(digital değer 1) ledi yak. 570'den küçükse(digital değer 0) ledi 5 saniye yanık bırak ve sonra söndür.
int pinLed=2;
int okunanAnalog;
int okunanDigital;
bool kontrol=false;

void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  okunanAnalog=analogRead(A0);
  okunanDigital=digitalRead(7);
  Serial.println("Analog " + (String)okunanAnalog);
  Serial.println("Digital " + (String)okunanDigital);
  delay(500);
  if(okunanAnalog>=570)
  {
    digitalWrite(pinLed, HIGH);
    kontrol=true;
  }
  else if(okunanAnalog<570)
  {
    if(kontrol==true)
    {
      digitalWrite(pinLed, HIGH);
      delay(5000);
      kontrol=false;
    }
    digitalWrite(pinLed, LOW);
  }
}
