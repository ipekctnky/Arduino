//ÖRNEK: Potansiyometrenin üzerine düşen gerilim değeri ile direnç değerinin bulunması.

//int deger;//(1)

void setup() {
  //A0 pini analog giriş olduğu için pinMode() fonksiyonunu kullanmamıza gerek yok.
  //Serial.begin(9600);//Seri Port Ekranını başlatıyoruz.(1)
  Serial.begin(9600);//Seri Port Ekranını başlatıyoruz.
}

void loop() {
  //Seri Port Ekranında potansiyometrenin değerini görelim.
  //deger= analogRead(A0);//(1)
  //Serial.println(deger);//(1)
  float okunanDeger= analogRead(A0);
  Serial.println("Potansiyometreden okunan deger = " + String(okunanDeger));
  Serial.println("Potansiyometrenin uzerine dusen gerilim degeri = " + String(5*okunanDeger/1024));//Potansiyometreden okunan değere göre gerilimi hesaplama. Potansiyometreden okunan değer ile gerilim doğru orantılıdır.
  Serial.println("Potansiyometrenin uzerine dusen direnc degeri = " + String(9.39*okunanDeger/1024));//Potansiyometreden okunan değere göre direnci hesaplama. Potansiyometreden okunan değer ile direnç doğru orantılıdır. 9.39 KOhm, 10KOhm'luk potansiyometrenin asıl direncidir.
  delay(2000);
}
