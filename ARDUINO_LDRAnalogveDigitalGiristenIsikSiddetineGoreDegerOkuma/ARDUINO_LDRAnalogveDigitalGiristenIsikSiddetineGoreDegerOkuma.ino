//ÖRNEK: LDR modülünden ışık şiddetine göre analog ve digital değer okuma(Mesela bu LDR modülünü hava karardığında sokak lambalarının yanması için kullanabiliriz).
int okunanAnalog;
int okunanDijital;

void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);//DİKKAT: Aynı digital pinler hem giriş hem de çıkış pinleri olarak kullanılabildiği için pinMode() fonksiyonu ile INPUT veya OUTPUT olarak ayarlıyoruz. Ama analog pinler de giriş ve çıkış pinleri ayrı pinler olduğu için pinMode() fonksiyonunu kullanarak INPUT veya OUTPUT dememize gerek yok.
}

void loop() {
  okunanAnalog = analogRead(A0);//???okunanAnalog 0 ve 1023 değerlerini hiç görür mü???
  okunanDijital = digitalRead(7);
  Serial.println("Analog = " + (String)okunanAnalog);
  Serial.println("Dijital = " + (String)okunanDijital);
  delay(500);
}
/*
DİKKAT
* Analog değer aydınlıkta düşüyor. Karanlıkta artıyor.
* Digital değer aydınlıkta sıfır(0), karanlıkta(1) oluyor.
* LDR Analog    LDR Digital
  >=570         1(karanlık)
  <=569         0(aydınlık)
* Daha fazla aydınlatmak için telefonun fenerini kullandık.
*/
