//Hiệu ứng chạy chữ
// Thêm thư viện
#include <LiquidCrystal.h>

//Khai báo các chân LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Cấu hình LCD
  lcd.begin(16, 2);
  // In hello ra LCD.
  lcd.print("Thankyou so much");
  delay(1000);
}

void loop() {
  // Cuộn 13 vị trí sang trái
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // Cuộn 1 vị trí sang trái:
    lcd.scrollDisplayLeft();
    // delay:
    delay(150);
  }

  // Cuộn 29 vị trí sang phải:
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // Cuộn 1 vị trí sang phải:
    lcd.scrollDisplayRight();
    // wdelay:
    delay(150);
  }

  // Cuộn 16 vị trí sang trái
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // Cuộn 1 vị trí sang trái:
    lcd.scrollDisplayLeft();
    // delay:
    delay(150);
  }

  // delay:
  delay(1000);

}
