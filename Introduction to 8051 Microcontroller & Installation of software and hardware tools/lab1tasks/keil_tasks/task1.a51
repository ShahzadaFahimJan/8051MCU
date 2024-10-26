org  0000h      ; Set the origin (starting address) of the code to 0000h
    
back:
    mov A, #55H ; Move the immediate value 55H into the accumulator A
    mov P0, A   ; Move the value in the accumulator A to the port P0
    ACALL DELAY ; Call a subroutine DELAY
   
    mov A, #0AAH ; Move the immediate value 0AAH into the accumulator A
    mov P0, A   ; Move the value in the accumulator A to the port P0
    ACALL DELAY ; Call a subroutine DELAY

    sjmp back   ; Unconditional jump to the label back (creating an infinite loop)
    
DELAY:
    MOV R2, #30   ; Outer loop count
DELAY_LOOP:
    MOV R1, #250  ; Inner loop count
INNER_LOOP:
    DJNZ R1, INNER_LOOP ; Decrement R1 and jump if not zero
    DJNZ R2, DELAY_LOOP ; Decrement R2 and jump if not zero
    RET
   
end            ;End of the code
