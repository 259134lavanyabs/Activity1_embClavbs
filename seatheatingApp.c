#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @ when pin is Low, the LED will turn OFF
 * @ when pin is High, the LED will turn ON
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();
    Init_ADC();
	Init_PWM();
	Init_USART();

	for(;;)
	{
       tempbuttonSensor();
	}
	return 0;
}
