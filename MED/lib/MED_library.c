#include "MED_library.h"



//static const char *nameTag = "name";

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