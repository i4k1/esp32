# ST7789
ESP32 ST7789 240x240 TFT_eSPI config:
```c
#define ILI9341_DRIVER
#define ST7789_DRIVER
#define ST7789_2_DRIVER

#define TFT_SDA_READ
#define TFT_RGB_ORDER TFT_RGB

#define TFT_WIDTH  240
#define TFT_HEIGHT 240
#define TFT_INVERSION_ON

#define TFT_MISO -1
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   -1
#define TFT_DC    2
#define TFT_RST   4

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

#define SPI_FREQUENCY       40000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY 2500000
```
