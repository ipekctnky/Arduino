//ÖRNEK: Seri Port Ekranından girilen 0 ve 1 değerlerine göre, eğer değer 0 ise yani kontaktörler değişmişse led yanacak. Eğer değer 1 ise led sönecek. Bağlantıyı yaparken kontaktörleri biz varsayılan olarak iletimde olmayan uçlara bağladık ki değere 0 verdiğimizde kontaktörler yer değiştirsin yani iletime geçsin. Ve lamba yansın diye.
//DİKKAT!!! Röleye sıfır verdiğimizde, rölenin varsayılan olarak iletimde olan kontaktörlerinin konumu değişiyor. Yani röleye sıfır verdiğimizde rölenin kontaktörlerinin konumu değişiyor.
int girilenDeger;
int pinRole=2;

void setup() {
  Serial.begin(9600);
  pinMode(pinRole, OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  {
    girilenDeger=Serial.parseInt();
    Serial.println(girilenDeger);
    if(girilenDeger==0)//Serial Port Ekranından girilen değer 0 ise
    {
      digitalWrite(pinRole, LOW);//LOW(0) değeri ile kontaktörler konum değiştireceği için led yanacaktır. Çünkü led ve direnç bağlantısı değişen kontaktörlerde biz de 0 vererek o kontaktörleri iletime geçiriyoruz.
      Serial.println("Led yandi...");
    }
    else if(girilenDeger==1)//Eğer Serial Port Ekranından girilen değer 1 ise
    {
      digitalWrite(pinRole, HIGH);//HIGH(1) değeri ile kontaktörler konum değiştirmeyeceği için led yanmayacaktır. Çünkü led ve direnç bağlantısı varsayılan olarak iletimde olan kontaktörlerde değil. Yani bu kontaktörlerde bağlantı yok.
      Serial.println("Led sondu!!!");
    }
  }
}
