MOV A,#0
   MOV R2, #10
           AGAIN: ADD A,#03
       DJNZ R2,AGAIN
MOV R5,A
