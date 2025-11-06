#include <xc.h>
#include "config.h"
#include "rfid.h"

#pragma config FOSC = HS
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config BOREN = OFF
#pragma config LVP = OFF
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF

#define _XTAL_FREQ 20000000



void main(void) {
    
    RFID_Init();
    LED1_DIR =0;
    LED2_DIR=0;
    LED1=0;
    LED2=0;
    
    while(1) {
        
        uint8_t cardFound = RFID_CheckCard();
        if(cardFound) {
            LED1 = 1;
            LED2 = 0;
            __delay_ms(1000);
        }
        else{
            LED1 =0;
            LED2= 1;
        }
        __delay_ms(10);
    }
}
