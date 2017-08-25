#line 1 "C:/Users/mikroe/Desktop/Ivane/ClickReader/MED/test/test_med.c"
#line 1 "c:/users/mikroe/desktop/ivane/clickreader/med/lib/med_library.h"




typedef void (*UART_Write_Text_t)(char *UART_text);
#line 11 "c:/users/mikroe/desktop/ivane/clickreader/med/lib/med_library.h"
void MED_init(UART_Write_Text_t fpUart_Write_Text);
#line 16 "c:/users/mikroe/desktop/ivane/clickreader/med/lib/med_library.h"
void MED_startInit(char* title);
#line 21 "c:/users/mikroe/desktop/ivane/clickreader/med/lib/med_library.h"
void MED_register(char* name, char* unit);
#line 26 "c:/users/mikroe/desktop/ivane/clickreader/med/lib/med_library.h"
void MED_endInit();
#line 31 "c:/users/mikroe/desktop/ivane/clickreader/med/lib/med_library.h"
void MED_updateValue(char* name, float num);
#line 37 "c:/users/mikroe/desktop/ivane/clickreader/med/lib/med_library.h"
void MED_txt(char* txt, char* title);

void MED_log(char* txt);

void MED_logWarning(char* txt);

void MED_logError(char* txt);
#line 27 "C:/Users/mikroe/Desktop/Ivane/ClickReader/MED/test/test_med.c"
char uart_rd;

void main() {

 int i=0;

 UART1_Init_Advanced(56000, _UART_8_BIT_DATA, _UART_NOPARITY, _UART_ONE_STOPBIT, &_GPIO_MODULE_USART1_PA9_10);
 Delay_ms(100);

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
