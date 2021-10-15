//Hiệu ứng tự động cuộn chữ
// Thêm thư viện
#include <LiquidCrystal.h>
 
//Khai báo các chân LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup() {
  // Cấu hình hàng và cột LCD
  lcd.begin(16, 2);
}
 
void loop() {
  // Đưa con trỏ về vị trí (0,0):
  lcd.setCursor(0, 0);
  // In ra giá trị từ 0 - 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
  }
 
  // Đặt con trỏ tới vị trí (16,1):
  lcd.setCursor(16, 1);
  // Cấu hình hiển thị tự cuộn chữ:
  lcd.autoscroll();
  //IN giá trị từ 0 - 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
  }
  // Tắt chức năng tự động cuộn
  lcd.noAutoscroll();
 
  // Xóa màn hình cho vòng lặp kế tiếp
  lcd.clear();
}
