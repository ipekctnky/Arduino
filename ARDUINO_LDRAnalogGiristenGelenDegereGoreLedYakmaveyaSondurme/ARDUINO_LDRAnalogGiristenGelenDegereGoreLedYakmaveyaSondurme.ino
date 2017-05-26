//ÖRNEK: LDR modülünden okunan analog değeri 570'ten büyük veya eşitse(digital değer 1) ledi yak. 570'den küçükse(digital değer 0) ledi söndür.
int pinLed=2;
int okunanAnalog;
int okunanDijital;

void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  okunanAnalog=analogRead(A0);
  okunanDijital=digitalRead(7);
  Serial.println("Analog " + (String)okunanAnalog);
  Serial.println("Digital " + (String)okunanDijital);
  delay(500);
  if(okunanAnalog>=570)
  {
    digitalWrite(pinLed, HIGH);
  }
  else if(okunanAnalog<570)
  {
    digitalWrite(pinLed, LOW);
  }
}
/*
DİKKAT
* LDR modülün üzerindeki potansiyometreyi yıldız tornavida ile sıkıp, gevşeterek 1 ve 0 değerlerini ayarlayabiliriz. Eğer LDR modülündeki bu potansiyometreyi ayarlamazsak, LDR modül hep 0 veya hep 1 verebilir.
*/
