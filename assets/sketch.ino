int melody[]{262, 294, 330, 349, 392, 440, 494, 523};
int durasi = 1000;
void setup() {
pinMode(8, OUTPUT);
}

void loop() {
for(int i = 0; i<8;i++){
  tone(8,melody[i],durasi);
  delay(durasi);
  noTone(8);
  delay(100);
}

}
