#include "activity2.h"
/**
 * @brief Initialize ADC
 * 
 */
void Init_ADC(){
    ADMUX = (1<<REFS0);/**< Select Vref=Vcc*/
    ADCSRA = (1<<ADEN)|(7<<ADPS0);/**< set prescaler to 128 and enable ADC*/
}

/**
 * @brief 
 * 
 * @param ch decides channel to be used to activiate MUX
 * @return uint16_t ADC value to MCU
 */
uint16_t Read_ADC(uint8_t ch)
{
    //Select ADC ch must be 0-7
    ADMUX&=0xf8;
    ch = ch&0b00000111;
    ADMUX|=ch;
    
    //Start single conversion
    ADCSRA|=(1<<ADSC); 
    
    //wait for conversation to complete
    while(!(ADCSRA & (1<<ADIF)));
    
    //clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);

}
