; unsigned char PSGSFXGetStatus(void)

SECTION code_clib
SECTION code_PSGlib

PUBLIC PSGSFXGetStatus

EXTERN asm_PSGlib_SFXGetStatus

defc PSGSFXGetStatus = asm_PSGlib_SFXGetStatus

; SDCC bridge for Classic
IF __CLASSIC
PUBLIC _PSGSFXGetStatus
defc _PSGSFXGetStatus = PSGSFXGetStatus
ENDIF

