/* Project name:
     UART1
 * Copyright:
     (c) Mikroelektronika, 2011.
 * Revision History:
     20110511:
       - initial release;
 * Description:
     This simple example demonstrates usage of mikroC's UART libraries, through
     a 'loopback' interface. The data being sent to ARM through UART
     and sent back.
 * Test configuration:
     Device:          STM32F107VC
                      http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/CD00220364.pdf
     dev.board:       EasyMx v7 for STM32(R) ARM(R) ac:USB_UART2
                      http://www.mikroe.com/easymx-pro/stm32/
     Oscillator:      HSE-PLL, 72.000MHz
     Ext. Modules:    None.
     SW:              mikroC PRO for ARM
                      http://www.mikroe.com/mikroc/arm/
 * NOTES:
     - Turn ON USB UARTB switches (SW12.3 and SW12.4). (board specific)
 */
#include "MED_library.h"


char uart_rd;

void main() {

  int i=0;
  // Initialize UART module at 56000 bps
  UART1_Init_Advanced(56000, _UART_8_BIT_DATA, _UART_NOPARITY, _UART_ONE_STOPBIT, &_GPIO_MODULE_USART1_PA9_10);
  Delay_ms(100);                  // Wait for UART module to stabilize

  MED_init(UART1_Write_Text);

  MED_startInit("MY PROGRAM");
  MED_register("Temperature","C");
  MED_register("Pressure","mB");
  MED_register("ADC", "mV");
  MED_endInit();


  while(1){
           MED_updateValue("Temperature",25.3);
           MED_updateValue("Pressure",1000);
           MED_updateValue("ADC", 20);
           MED_log("hello");
           Delay_ms(1000);

           MED_logWarning("lalala");
           MED_updateValue("Temperature",27);
           MED_updateValue("Pressure",1500);
           MED_updateValue("ADC", 30);
           Delay_ms(1000);

           MED_logError("lalala");
           MED_updateValue("Temperature",32);
           MED_updateValue("Pressure",2000);
           MED_updateValue("ADC", 35);
           Delay_ms(1000);
  }


}