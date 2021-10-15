//Hiệu ứng kiểm soát con trỏ
// Thêm thư viện
#include <LiquidCrystal.h>
 
//Khai báo các chân LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
int thisChar = 'a';
 
void setup() {
  // Cấu hình LCD:
  lcd.begin(16, 2);
  // Bật con trỏ:
  lcd.cursor();
}
 
void loop() {
  // Đảo chiều tại 'm':
  if (thisChar == 'm') {
    // Dịch phải cho ký tự kế tiếp
    lcd.rightToLeft();
  }
  // Đảo chiều tiếp tục tại 's':
  if (thisChar == 's') {
    // Dịch trái cho ký tự kế tiếp
    lcd.leftToRight();
  }
  // reset tại 'z':
  if (thisChar > 'z') {
    // Tới vị trí (0,0):
    lcd.home();
    // Bắt đầu in a tại 0
    thisChar = 'a';
  }
  // In ký tự
  lcd.write(thisChar);
  // delay:
  delay(1000);
  // Tăng ký tự tiếp theo:
  thisChar++;
}
