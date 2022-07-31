#define SVET 22
#define GR 40
#define RD 30

void setup() {
  pinMode(SVET, OUTPUT);
  pinMode(GR, OUTPUT);
  pinMode(RD, OUTPUT);
  Serial.begin(9600); //нужно подключать, если хотим получать потом вывод в терминал 
}

void loop() {
  Serial.print(10);
  // put your main code here, to run repeatedly:
  digitalWrite(SVET, HIGH); // защелкиваем регистры
   delay(1000);
  digitalWrite(SVET, LOW); // защелкиваем регистры
   delay(1000);
  digitalWrite(RD, HIGH);
  delay(1000);
  digitalWrite(RD, LOW); // защелкиваем регистры
   delay(1000);
  digitalWrite(GR, HIGH);
   delay(1000);
  digitalWrite(GR, LOW);
  delay(1000);
}
