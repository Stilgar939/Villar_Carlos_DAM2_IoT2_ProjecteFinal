#ifndef IOT_02_PINOUT_H
#define IOT_02_PINOUT_H

#define LED_W 19
#define LED_R 23
#define LED_Y 27
#define LED_G 32
#define SET_LATCHING_RELAY 2
#define RST_LATCHING_RELAY 4
#define BT_IO0 0
#define BT_I34 34
#define BT_I35 35
#define STATE_LATCHING_RELAY 39
#define LDR 36
#define I2C_SDA 21
#define I2C_SCL 22

#ifndef SSerialTxControl
#define SSerialTxControl 33 /*RS485 Direction control*/
#define RS485Transmit HIGH
#define RS485Receive LOW
#endif

#define SCK_GPIO     5
#define MISO_GPIO   15
#define MOSI_GPIO   25
#define NSS_GPIO    18
#define RXTX_GPIO   LMIC_UNUSED_PIN
#define RESET_GPIO  14
#define DIO0_GPIO   26
#define DIO1_GPIO   13
#define DIO2_GPIO   12

#endif
