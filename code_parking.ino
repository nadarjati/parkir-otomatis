#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo palang;

// Pin
const int pinServo = 9;
const int pinTombol = 2;
const int pinPot = A0;

// Driver L298N
const int IN1 = 7;
const int IN2 = 6;

bool palangTerbuka = false;

void setup() {
lcd.init();
lcd.backlight();

pinMode(pinTombol, INPUT_PULLUP);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);

palang.attach(pinServo);
palang.write(0);

// TEST MOTOR DI AWAL
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
delay(2000);
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);

lcd.setCursor(0, 0);
lcd.print("SISTEM PARKIR");
lcd.setCursor(0, 1);
lcd.print("SIAP...");
delay(2000);
lcd.clear();
}

void loop() {
int nilaiPot = analogRead(pinPot);
int tombol = digitalRead(pinTombol);

// Buka palang
if ((tombol == LOW || nilaiPot > 500) && !palangTerbuka) {
bukaPalang();
}

// Tutup palang
if ((tombol == HIGH && nilaiPot < 500) && palangTerbuka) {
tutupPalang();
}
}

void bukaPalang() {
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("PALANG TERBUKA");

// Motor nyala
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);

for (int pos = 0; pos <= 90; pos++) {
palang.write(pos);
delay(15);
}

delay(3000); // waktu mobil lewat

palangTerbuka = true;
}

void tutupPalang() {
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("PALANG TERTUTUP");

// Motor mati
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);

for (int pos = 90; pos >= 0; pos--) {
palang.write(pos);
delay(15);
}

palangTerbuka = false;
}
