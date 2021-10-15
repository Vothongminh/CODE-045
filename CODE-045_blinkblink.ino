//Hiệu ứng blink con trỏ
// Thêm thư viện
#include <LiquidCrystal.h>
 
//Khai báo các chân LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup() {
  // Cấu hình hàng và cột:
  lcd.begin(16, 2);
  // In thông báo hello ra LCD.
  lcd.print("Co Dien Tu VTM");
}
 
void loop() {
  // Tắt blink con trỏ
  lcd.noBlink();
  delay(3000);
  // Bật blink con trỏ
  lcd.blink();
  delay(3000);
}
