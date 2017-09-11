#ifndef MEDASHBOARD_H
#define MEDASHBOARD_H


typedef void (*UART_Write_Text_t)(char *UART_text);

/*
 * \brief    Allows choosing a specific UART.
 */
 
void MED_init(UART_Write_Text_t fpUart_Write_Text);

/*
 * \brief   Starts registration.
 */
 
void MED_startInit(char* title);

/*!
 * \brief    Registers a new field by its name and unit.
 */
 
void MED_register(char* name, char* unit);

/*
 * \brief     Ends registration.
 */
 
void MED_endInit();

/*
 * \brief      Updates the value of a field found by its name.
 */
 
void MED_updateValue(char* name, float num);

/*
 * \brief       Displays given text.
 */
 
void MED_txt(char* txt, char* title);

void MED_log(char* txt);

void MED_logWarning(char* txt);

void MED_logError(char* txt);

#endif // MEDASHBOARD_H