_main:
;test_med.c,29 :: 		void main() {
;test_med.c,31 :: 		int i=0;
;test_med.c,33 :: 		UART1_Init_Advanced(56000, _UART_8_BIT_DATA, _UART_NOPARITY, _UART_ONE_STOPBIT, &_GPIO_MODULE_USART1_PA9_10);
MOVW	R0, #lo_addr(__GPIO_MODULE_USART1_PA9_10+0)
MOVT	R0, #hi_addr(__GPIO_MODULE_USART1_PA9_10+0)
PUSH	(R0)
MOVW	R3, #0
MOVW	R2, #0
MOVW	R1, #0
MOVW	R0, #56000
BL	_UART1_Init_Advanced+0
ADD	SP, SP, #4
;test_med.c,34 :: 		Delay_ms(100);                  // Wait for UART module to stabilize
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_main0:
SUBS	R7, R7, #1
BNE	L_main0
NOP
NOP
NOP
;test_med.c,36 :: 		MED_init(UART1_Write_Text);
MOVW	R0, #lo_addr(_UART1_Write_Text+0)
MOVT	R0, #hi_addr(_UART1_Write_Text+0)
BL	_MED_init+0
;test_med.c,38 :: 		MED_startInit("MY PROGRAM");
MOVW	R0, #lo_addr(?lstr1_test_med+0)
MOVT	R0, #hi_addr(?lstr1_test_med+0)
BL	_MED_startInit+0
;test_med.c,39 :: 		MED_register("Temperature","C");
MOVW	R1, #lo_addr(?lstr3_test_med+0)
MOVT	R1, #hi_addr(?lstr3_test_med+0)
MOVW	R0, #lo_addr(?lstr2_test_med+0)
MOVT	R0, #hi_addr(?lstr2_test_med+0)
BL	_MED_register+0
;test_med.c,40 :: 		MED_register("Pressure","mB");
MOVW	R1, #lo_addr(?lstr5_test_med+0)
MOVT	R1, #hi_addr(?lstr5_test_med+0)
MOVW	R0, #lo_addr(?lstr4_test_med+0)
MOVT	R0, #hi_addr(?lstr4_test_med+0)
BL	_MED_register+0
;test_med.c,41 :: 		MED_register("ADC", "mV");
MOVW	R1, #lo_addr(?lstr7_test_med+0)
MOVT	R1, #hi_addr(?lstr7_test_med+0)
MOVW	R0, #lo_addr(?lstr6_test_med+0)
MOVT	R0, #hi_addr(?lstr6_test_med+0)
BL	_MED_register+0
;test_med.c,42 :: 		MED_endInit();
BL	_MED_endInit+0
;test_med.c,45 :: 		while(1){
L_main2:
;test_med.c,46 :: 		MED_updateValue("Temperature",25.3);
MOVW	R0, #lo_addr(?lstr8_test_med+0)
MOVT	R0, #hi_addr(?lstr8_test_med+0)
MOVW	R1, #26214
MOVT	R1, #16842
BL	_MED_updateValue+0
;test_med.c,47 :: 		MED_updateValue("Pressure",1000);
MOVW	R0, #lo_addr(?lstr9_test_med+0)
MOVT	R0, #hi_addr(?lstr9_test_med+0)
MOVW	R1, #0
MOVT	R1, #17530
BL	_MED_updateValue+0
;test_med.c,48 :: 		MED_updateValue("ADC", 20);
MOVW	R0, #lo_addr(?lstr10_test_med+0)
MOVT	R0, #hi_addr(?lstr10_test_med+0)
MOVW	R1, #0
MOVT	R1, #16800
BL	_MED_updateValue+0
;test_med.c,49 :: 		MED_log("hello");
MOVW	R0, #lo_addr(?lstr11_test_med+0)
MOVT	R0, #hi_addr(?lstr11_test_med+0)
BL	_MED_log+0
;test_med.c,50 :: 		Delay_ms(1000);
MOVW	R7, #6911
MOVT	R7, #183
NOP
NOP
L_main4:
SUBS	R7, R7, #1
BNE	L_main4
NOP
NOP
NOP
;test_med.c,52 :: 		MED_logWarning("lalala");
MOVW	R0, #lo_addr(?lstr12_test_med+0)
MOVT	R0, #hi_addr(?lstr12_test_med+0)
BL	_MED_logWarning+0
;test_med.c,53 :: 		MED_updateValue("Temperature",27);
MOVW	R0, #lo_addr(?lstr13_test_med+0)
MOVT	R0, #hi_addr(?lstr13_test_med+0)
MOVW	R1, #0
MOVT	R1, #16856
BL	_MED_updateValue+0
;test_med.c,54 :: 		MED_updateValue("Pressure",1500);
MOVW	R0, #lo_addr(?lstr14_test_med+0)
MOVT	R0, #hi_addr(?lstr14_test_med+0)
MOVW	R1, #32768
MOVT	R1, #17595
BL	_MED_updateValue+0
;test_med.c,55 :: 		MED_updateValue("ADC", 30);
MOVW	R0, #lo_addr(?lstr15_test_med+0)
MOVT	R0, #hi_addr(?lstr15_test_med+0)
MOVW	R1, #0
MOVT	R1, #16880
BL	_MED_updateValue+0
;test_med.c,56 :: 		Delay_ms(1000);
MOVW	R7, #6911
MOVT	R7, #183
NOP
NOP
L_main6:
SUBS	R7, R7, #1
BNE	L_main6
NOP
NOP
NOP
;test_med.c,58 :: 		MED_logError("lalala");
MOVW	R0, #lo_addr(?lstr16_test_med+0)
MOVT	R0, #hi_addr(?lstr16_test_med+0)
BL	_MED_logError+0
;test_med.c,59 :: 		MED_updateValue("Temperature",32);
MOVW	R0, #lo_addr(?lstr17_test_med+0)
MOVT	R0, #hi_addr(?lstr17_test_med+0)
MOV	R1, #1107296256
BL	_MED_updateValue+0
;test_med.c,60 :: 		MED_updateValue("Pressure",2000);
MOVW	R0, #lo_addr(?lstr18_test_med+0)
MOVT	R0, #hi_addr(?lstr18_test_med+0)
MOVW	R1, #0
MOVT	R1, #17658
BL	_MED_updateValue+0
;test_med.c,61 :: 		MED_updateValue("ADC", 35);
MOVW	R0, #lo_addr(?lstr19_test_med+0)
MOVT	R0, #hi_addr(?lstr19_test_med+0)
MOVW	R1, #0
MOVT	R1, #16908
BL	_MED_updateValue+0
;test_med.c,62 :: 		Delay_ms(1000);
MOVW	R7, #6911
MOVT	R7, #183
NOP
NOP
L_main8:
SUBS	R7, R7, #1
BNE	L_main8
NOP
NOP
NOP
;test_med.c,63 :: 		}
IT	AL
BAL	L_main2
;test_med.c,66 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
