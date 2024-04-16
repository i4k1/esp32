// 16-04-2024 by i4k
// simple program that use st7789 display and check colors

#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
    Serial.begin(115200);
    tft.begin();
    tft.setRotation(3);
    tft.setTextSize(3);
}

void loop() {
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setCursor(0, 0);
    tft.println("black");
    delay(1000);

    tft.fillScreen(TFT_WHITE);
    tft.setTextColor(TFT_BLACK, TFT_WHITE);
    tft.setCursor(0, 0);
    tft.println("white");    
    delay(1000);

    tft.fillScreen(TFT_RED);
    tft.setTextColor(TFT_GREEN, TFT_RED);
    tft.setCursor(0, 0);
    tft.println("red");
    delay(1000);

    tft.fillScreen(TFT_ORANGE);
    tft.setTextColor(TFT_CYAN, TFT_ORANGE);
    tft.setCursor(0, 0);
    tft.println("orange");
    delay(1000);

    tft.fillScreen(TFT_YELLOW);
    tft.setTextColor(TFT_VIOLET, TFT_YELLOW);
    tft.setCursor(0, 0);
    tft.println("yellow");
    delay(1000);

    tft.fillScreen(TFT_GREEN);
    tft.setTextColor(TFT_RED, TFT_GREEN);
    tft.setCursor(0, 0);
    tft.println("green");
    delay(1000);

    tft.fillScreen(TFT_CYAN);
    tft.setTextColor(TFT_ORANGE, TFT_CYAN);
    tft.setCursor(0, 0);
    tft.println("cyan");
    delay(1000);

    tft.fillScreen(TFT_BLUE);
    tft.setTextColor(TFT_ORANGE, TFT_BLUE);
    tft.setCursor(0, 0);
    tft.println("blue");
    delay(1000);

    tft.fillScreen(TFT_VIOLET);
    tft.setTextColor(TFT_YELLOW, TFT_VIOLET);
    tft.setCursor(0, 0);
    tft.println("violet");
    delay(1000);

    tft.fillScreen(TFT_PINK);
    tft.setTextColor(TFT_YELLOW, TFT_PINK);
    tft.setCursor(0, 0);
    tft.println("pink");
    delay(1000);
}
