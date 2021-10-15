//Hiệu ứng blink con trỏ dưới dạng dấu gạch nối
// Thêm thư viện
#include <LiquidCrystal.h>
 
//Khai báo các chân LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup() {
  // Khởi tạo LCD:
  lcd.begin(16, 2);
  // In thông báo trên LCD.
  lcd.print("Cơ dien tu VTM");
}
 
void loop() {
  // Tắt con trỏ:
  lcd.noCursor();
  delay(500);
  // Hiện con trỏ:
  lcd.cursor();
  delay(500);
}
