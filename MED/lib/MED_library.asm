_MED_init:
;MED_library.c,9 :: 		void MED_init(UART_Write_Text_t fpUart_Write_Text)
; fpUart_Write_Text start address is: 0 (R0)
; fpUart_Write_Text end address is: 0 (R0)
; fpUart_Write_Text start address is: 0 (R0)
;MED_library.c,11 :: 		fpWrite = fpUart_Write_Text;
MOVW	R1, #lo_addr(MED_library_fpWrite+0)
MOVT	R1, #hi_addr(MED_library_fpWrite+0)
STR	R0, [R1, #0]
; fpUart_Write_Text end address is: 0 (R0)
;MED_library.c,12 :: 		}
L_end_MED_init:
BX	LR
; end of _MED_init
_MED_startInit:
;MED_library.c,14 :: 		void MED_startInit(char* title){
SUB	SP, SP, #8
STR	LR, [SP, #0]
STR	R0, [SP, #4]
;MED_library.c,15 :: 		fpWrite("<msg type=\"init\" title=\"");
MOVW	R4, #lo_addr(?lstr1_MED_library+0)
MOVT	R4, #hi_addr(?lstr1_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,16 :: 		fpWrite(title);
LDR	R0, [SP, #4]
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,17 :: 		fpWrite("\">");
MOVW	R4, #lo_addr(?lstr2_MED_library+0)
MOVT	R4, #hi_addr(?lstr2_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,18 :: 		}
L_end_MED_startInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #8
BX	LR
; end of _MED_startInit
_MED_register:
;MED_library.c,19 :: 		void MED_register(char* name, char* unit){
SUB	SP, SP, #12
STR	LR, [SP, #0]
STR	R0, [SP, #4]
STR	R1, [SP, #8]
;MED_library.c,20 :: 		fpWrite("<name>");
MOVW	R4, #lo_addr(?lstr3_MED_library+0)
MOVT	R4, #hi_addr(?lstr3_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,21 :: 		fpWrite(name);
LDR	R0, [SP, #4]
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,22 :: 		fpWrite("</name>");
MOVW	R4, #lo_addr(?lstr4_MED_library+0)
MOVT	R4, #hi_addr(?lstr4_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,23 :: 		fpWrite("<unit>");
MOVW	R4, #lo_addr(?lstr5_MED_library+0)
MOVT	R4, #hi_addr(?lstr5_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,24 :: 		fpWrite(unit);
LDR	R0, [SP, #8]
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,25 :: 		fpWrite("</unit>");
MOVW	R4, #lo_addr(?lstr6_MED_library+0)
MOVT	R4, #hi_addr(?lstr6_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,26 :: 		}
L_end_MED_register:
LDR	LR, [SP, #0]
ADD	SP, SP, #12
BX	LR
; end of _MED_register
_MED_endInit:
;MED_library.c,27 :: 		void MED_endInit(){
SUB	SP, SP, #4
STR	LR, [SP, #0]
;MED_library.c,28 :: 		fpWrite("</msg>");
MOVW	R4, #lo_addr(?lstr7_MED_library+0)
MOVT	R4, #hi_addr(?lstr7_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,29 :: 		}
L_end_MED_endInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _MED_endInit
_MED_updateValue:
;MED_library.c,30 :: 		void MED_updateValue(char* name, float num){
; num start address is: 4 (R1)
SUB	SP, SP, #28
STR	LR, [SP, #0]
STR	R0, [SP, #24]
; num end address is: 4 (R1)
; num start address is: 4 (R1)
;MED_library.c,32 :: 		FloatToStr(num,txt);
ADD	R2, SP, #4
MOV	R0, R1
MOV	R1, R2
; num end address is: 4 (R1)
BL	_FloatToStr+0
;MED_library.c,33 :: 		fpWrite("<msg type=\"update\">");
MOVW	R4, #lo_addr(?lstr8_MED_library+0)
MOVT	R4, #hi_addr(?lstr8_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,34 :: 		fpWrite("<name>");
MOVW	R4, #lo_addr(?lstr9_MED_library+0)
MOVT	R4, #hi_addr(?lstr9_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,35 :: 		fpWrite(name);
LDR	R0, [SP, #24]
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,36 :: 		fpWrite("</name>");
MOVW	R4, #lo_addr(?lstr10_MED_library+0)
MOVT	R4, #hi_addr(?lstr10_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,37 :: 		fpWrite("<value>");
MOVW	R4, #lo_addr(?lstr11_MED_library+0)
MOVT	R4, #hi_addr(?lstr11_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,38 :: 		fpWrite(txt);
ADD	R4, SP, #4
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,39 :: 		fpWrite("</value>");
MOVW	R4, #lo_addr(?lstr12_MED_library+0)
MOVT	R4, #hi_addr(?lstr12_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,40 :: 		fpWrite("</msg>");
MOVW	R4, #lo_addr(?lstr13_MED_library+0)
MOVT	R4, #hi_addr(?lstr13_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,41 :: 		}
L_end_MED_updateValue:
LDR	LR, [SP, #0]
ADD	SP, SP, #28
BX	LR
; end of _MED_updateValue
_MED_txt:
;MED_library.c,44 :: 		void MED_txt(char* txt, char* title) {
SUB	SP, SP, #12
STR	LR, [SP, #0]
STR	R0, [SP, #4]
STR	R1, [SP, #8]
;MED_library.c,45 :: 		fpWrite("<msg type=\"log\" title=\"");
MOVW	R4, #lo_addr(?lstr14_MED_library+0)
MOVT	R4, #hi_addr(?lstr14_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,46 :: 		fpWrite(title);
LDR	R0, [SP, #8]
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,47 :: 		fpWrite("\">");
MOVW	R4, #lo_addr(?lstr15_MED_library+0)
MOVT	R4, #hi_addr(?lstr15_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,48 :: 		fpWrite("<txt>");
MOVW	R4, #lo_addr(?lstr16_MED_library+0)
MOVT	R4, #hi_addr(?lstr16_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,49 :: 		fpWrite(txt);
LDR	R0, [SP, #4]
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,50 :: 		fpWrite("</txt>");
MOVW	R4, #lo_addr(?lstr17_MED_library+0)
MOVT	R4, #hi_addr(?lstr17_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,51 :: 		fpWrite("</msg>");
MOVW	R4, #lo_addr(?lstr18_MED_library+0)
MOVT	R4, #hi_addr(?lstr18_MED_library+0)
MOV	R0, R4
MOVW	R4, #lo_addr(MED_library_fpWrite+0)
MOVT	R4, #hi_addr(MED_library_fpWrite+0)
LDR	R4, [R4, #0]
BLX	R4
;MED_library.c,52 :: 		}
L_end_MED_txt:
LDR	LR, [SP, #0]
ADD	SP, SP, #12
BX	LR
; end of _MED_txt
_MED_log:
;MED_library.c,54 :: 		void MED_log(char* txt) {
; txt start address is: 0 (R0)
SUB	SP, SP, #4
STR	LR, [SP, #0]
; txt end address is: 0 (R0)
; txt start address is: 0 (R0)
;MED_library.c,55 :: 		MED_txt(txt, "Message");
MOVW	R1, #lo_addr(?lstr19_MED_library+0)
MOVT	R1, #hi_addr(?lstr19_MED_library+0)
; txt end address is: 0 (R0)
BL	_MED_txt+0
;MED_library.c,56 :: 		}
L_end_MED_log:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _MED_log
_MED_logWarning:
;MED_library.c,58 :: 		void MED_logWarning(char* txt) {
; txt start address is: 0 (R0)
SUB	SP, SP, #4
STR	LR, [SP, #0]
; txt end address is: 0 (R0)
; txt start address is: 0 (R0)
;MED_library.c,59 :: 		MED_txt(txt, "Warning");
MOVW	R1, #lo_addr(?lstr20_MED_library+0)
MOVT	R1, #hi_addr(?lstr20_MED_library+0)
; txt end address is: 0 (R0)
BL	_MED_txt+0
;MED_library.c,60 :: 		}
L_end_MED_logWarning:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _MED_logWarning
_MED_logError:
;MED_library.c,62 :: 		void MED_logError(char* txt) {
; txt start address is: 0 (R0)
SUB	SP, SP, #4
STR	LR, [SP, #0]
; txt end address is: 0 (R0)
; txt start address is: 0 (R0)
;MED_library.c,63 :: 		MED_txt(txt, "Error");
MOVW	R1, #lo_addr(?lstr21_MED_library+0)
MOVT	R1, #hi_addr(?lstr21_MED_library+0)
; txt end address is: 0 (R0)
BL	_MED_txt+0
;MED_library.c,64 :: 		}
L_end_MED_logError:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _MED_logError
