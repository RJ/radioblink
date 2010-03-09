/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB  = 0x01;
    PORTB = 0x01;
    for(;;){
		PORTB ^= 0x01;
		_delay_loop_2(65535);
	}
    return 0;   /* never reached */
}
