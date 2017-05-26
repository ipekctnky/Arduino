#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);//Set the LCD I2C address

void setup() {
  //put your setup code here, to run once:
  lcd.begin(16,2);//begin(sütun, satır) fonksiyonu LCD devre elemanını başlatmak için kullanılır. LCD devre elemanımız 16 sütun 2 satırdan oluşmaktadır.
  lcd.clear();//clear() fonksiyonu LCD devre elemanını temizlemek için kullanılır.
  lcd.print("Merhaba, dunya!");//print() fonksiyonu LCD devre elemanına bir şeyler yazdırmak için kullanılır.
}

void loop() {
  //put your main code here, to run repeatedly:
}
