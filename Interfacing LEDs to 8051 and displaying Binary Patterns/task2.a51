MOV A,#55H
MOV R3,#2
NEXT: MOV R2,#3
AGAIN: CPL A
DJNZ R2,AGAIN
DJNZ R3,NEXT