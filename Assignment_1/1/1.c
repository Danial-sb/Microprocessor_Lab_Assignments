#include <mega32.h>
#include <delay.h>

void main(void)
{
DDRA.0 = 1;
PORTA.0 = 0;
while (1)
    {
     PORTA.0 = ~PORTA.0;
     delay_ms(500);

    }
}
