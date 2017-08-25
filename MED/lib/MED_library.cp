#line 1 "C:/Users/mikroe/Desktop/Ivane/ClickReader/MED/lib/MED_library.c"
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
#line 7 "C:/Users/mikroe/Desktop/Ivane/ClickReader/MED/lib/MED_library.c"
static UART_Write_Text_t fpWrite;

void MED_init(UART_Write_Text_t fpUart_Write_Text)
{
 fpWrite = fpUart_Write_Text;
}

void MED_startInit(char* title){
 fpWrite("<msg type=\"init\" title=\"");
 fpWrite(title);
 fpWrite("\">");
}
void MED_register(char* name, char* unit){
 fpWrite("<name>");
 fpWrite(name);
 fpWrite("</name>");
 fpWrite("<unit>");
 fpWrite(unit);
 fpWrite("</unit>");
}
void MED_endInit(){
 fpWrite("</msg>");
}
void MED_updateValue(char* name, float num){
 char txt[20];
 FloatToStr(num,txt);
 fpWrite("<msg type=\"update\">");
 fpWrite("<name>");
 fpWrite(name);
 fpWrite("</name>");
 fpWrite("<value>");
 fpWrite(txt);
 fpWrite("</value>");
 fpWrite("</msg>");
}


void MED_txt(char* txt, char* title) {
 fpWrite("<msg type=\"log\" title=\"");
 fpWrite(title);
 fpWrite("\">");
 fpWrite("<txt>");
 fpWrite(txt);
 fpWrite("</txt>");
 fpWrite("</msg>");
}

void MED_log(char* txt) {
 MED_txt(txt, "Message");
}

void MED_logWarning(char* txt) {
 MED_txt(txt, "Warning");
}

void MED_logError(char* txt) {
 MED_txt(txt, "Error");
}
