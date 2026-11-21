
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const char* lyrics[] = {
  "Diet Mountain",
  "Dew, baby,",
  "New York City",
  "Can we hit it",
  "now, low-down",
  "and gritty?",
  "Do you think",
  "we'll be in love",
  "forever?",
  "Do you think",
  "we'll be in love?"
};

int totalLines = 11;

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  for (int i = 0; i < totalLines; i++) {
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print(lyrics[i]);

    if (i + 1 < totalLines) {
      lcd.setCursor(0, 1);
      lcd.print(lyrics[i + 1]);
    }

    delay(1000);
  }
}
