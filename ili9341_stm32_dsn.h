#define USER_SETUP_INFO "STM32F411CE_ILI9341"

#define STM32

#define ILI9341_DRIVER

// #define TFT_RGB_ORDER TFT_RGB 
#define TFT_RGB_ORDER TFT_BGR  

// #define TFT_INVERSION_ON
// #define TFT_INVERSION_OFF


#define TFT_MOSI PA7
#define TFT_MISO PA6
#define TFT_SCLK PA5
#define TFT_CS   PA4 // Nucleo-F767ZI equivalent of D5
#define TFT_DC   PB0  // Nucleo-F767ZI equivalent of D6
#define TFT_RST  PB1 // Nucleo-F767ZI equivalent of D7

// #define TFT_BL   PB6       
// #define TFT_BACKLIGHT_ON HIGH  


#define TOUCH_CS PA3    

#define LOAD_GLCD   // Font 1. Orijinal Adafruit 8 piksel fontu
#define LOAD_FONT2  // Font 2. Küçük 16 piksel font
#define LOAD_FONT4  // Font 4. Orta 26 piksel font
#define LOAD_FONT6  // Font 6. Büyük 48 piksel font
#define LOAD_FONT7  // Font 7. 7 segment 48 piksel font
#define LOAD_FONT8  // Font 8. Büyük 75 piksel font
#define LOAD_GFXFF  // FreeFonts
#define SMOOTH_FONT

#define SPI_FREQUENCY  40000000

#define SPI_TOUCH_FREQUENCY  2500000