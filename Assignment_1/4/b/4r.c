#include <mega32.h>
#include <delay.h>
#include <alcd.h>

eeprom char Input_Data[200];
unsigned char i;
void main(void)
{
DDRC = 0x00;
lcd_init(16);
i = 0;
for(i = 0; i<200 ; i++){
    Input_Data[i]=PINC;
    lcd_clear();
    lcd_putchar(Input_Data[i]);
    delay_ms(1000); 
    }
    lcd_clear();
}
