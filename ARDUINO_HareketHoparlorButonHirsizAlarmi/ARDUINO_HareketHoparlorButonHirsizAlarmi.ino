int pinBtn=4;
int btnOkunan;
int pinHareket=2;
int hareketOkunan;
int pinSes=5;
bool kontrol=false;

void setup() {
  Serial.begin(9600);
  pinMode(pinBtn, INPUT);
  pinMode(pinHareket, INPUT);
}

void loop() {
  btnOkunan=digitalRead(pinBtn);
  hareketOkunan=digitalRead(pinHareket);
  if(hareketOkunan==HIGH || kontrol==true)
  {
    
      tone(pinSes, 1000);
      kontrol=true;
    
  }
  else
  {
    noTone(pinSes);
  }
  if(btnOkunan==HIGH)
  {
    
      noTone(pinSes);
      while(hareketOkunan==HIGH)
      {
        kontrol=false;
        //btnOkunan=LOW;
        //break;
      }
   }
}
  
  
