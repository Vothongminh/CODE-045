//Hiệu ứng in chữ và tự động xuống dòng
// Thêm thư viện
#include <LiquidCrystal.h>
 
// Khai báo 2 biến lưu hàng và cột LCD
const int numRows = 2;
const int numCols = 16;
 
//Khai báo các chân LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup()
{ // Cấu hình LCD:
    lcd.begin(numCols, numRows);
}
 
void loop()
{ // Hiển thị ký tự từ a - z:
    for (int thisLetter = 'a'; thisLetter <= 'z'; thisLetter++) {
        // Lặp lại trên cột:
        for (int thisRow = 0; thisRow < numRows; thisRow++) {
            // lặp lại trên hàng:
            for (int thisCol = 0; thisCol < numCols; thisCol++) {
                // Đặt giá trị con trỏ hiện tại:
                lcd.setCursor(thisCol, thisRow);
                // In các ký tự lên LCD:
                lcd.write(thisLetter);
                delay(200);
            }
        }
    }
}
