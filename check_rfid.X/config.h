#ifndef CONFIG_H
#define CONFIG_H

#include <xc.h>
#define _XTAL_FREQ 20000000
//LED test
#define LED1_DIR TRISBbits.TRISB4
#define LED1 PORTBbits.RB4
#define LED2_DIR TRISBbits.TRISB5
#define LED2 PORTBbits.RB5

// RFID RC522 Pin Definitions
#define RFID_SDA     PORTCbits.RC0
#define RFID_SCK     PORTCbits.RC3
#define RFID_MOSI    PORTCbits.RC5
#define RFID_MISO    PORTCbits.RC4
#define RFID_RST     PORTBbits.RB3

#define RFID_SDA_DIR TRISCbits.TRISC0
#define RFID_SCK_DIR TRISCbits.TRISC3
#define RFID_MOSI_DIR TRISCbits.TRISC5
#define RFID_MISO_DIR TRISCbits.TRISC4
#define RFID_RST_DIR TRISBbits.TRISB3

// RFID Commands
#define PCD_IDLE              0x00
#define PCD_AUTHENT           0x0E
#define PCD_RECEIVE           0x08
#define PCD_TRANSMIT          0x04
#define PCD_TRANSCEIVE        0x0C
#define PCD_RESETPHASE        0x0F
#define PCD_CALCCRC           0x03

// MFRC522 Registers
#define CommandReg            0x01
#define ComIEnReg             0x02
#define DivIEnReg             0x03
#define ComIrqReg             0x04
#define DivIrqReg             0x05
#define ErrorReg              0x06
#define Status1Reg            0x07
#define Status2Reg            0x08
#define FIFODataReg           0x09
#define FIFOLevelReg          0x0A
#define WaterLevelReg         0x0B
#define ControlReg            0x0C
#define BitFramingReg         0x0D
#define CollReg               0x0E
#define ModeReg               0x11
#define TxControlReg          0x14
#define TxAutoReg             0x15
#define TxSelReg              0x16
#define RxSelReg              0x17
#define RxThresholdReg        0x18
#define DemodReg              0x19
#define MfTxReg               0x1C
#define MfRxReg               0x1D
#define SerialSpeedReg        0x1F
#define CRCResultRegH         0x21
#define CRCResultRegL         0x22
#define ModWidthReg           0x24
#define RFCfgReg              0x26
#define GsNReg                0x27
#define CWGsCfgReg            0x28
#define ModGsCfgReg           0x29
#define TModeReg              0x2A
#define TPrescalerReg         0x2B
#define TReloadRegH           0x2C
#define TReloadRegL           0x2D
#define TCounterValueRegH     0x2E
#define TCounterValueRegL     0x2F

// MIFARE Commands
#define PICC_CMD_REQA         0x26
#define PICC_CMD_ANTICOLL     0x93
#define PICC_CMD_SEL          0x93
#define PICC_CMD_AUTH_KEYA    0x60
#define PICC_CMD_READ         0x30
#define PICC_CMD_HALT         0x50

#endif