//Thêm thư viện LiquidCrystal - nó có sẵn vì vậy bạn không cần cài thêm gì cả
#include <LiquidCrystal.h>

//Khởi tạo với các chân
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

  lcd.begin(16, 2);//Thông báo đây là LCD 1602
  lcd.print("Hello everyone!");//In ra dòng chữ, bạn có thể chỉnh chữ lại tuỳ ý
  lcd.setCursor(0 , 1);
  lcd.print(" Co Dien Tu VTM");
}

void loop() {
  lcd.noDisplay();//Xoá màn hình hiển thị
  delay(500);//chờ 0,5 giây
  lcd.display();//Hiển thị trở lại
  delay(500);
}
