global adder

section .text

adder:
    ; prologue
    push ebp
    mov ebp, esp
    push ebx

    ; body
    mov eax, [ebp + 8]
    mov ebx, [ebp + 12]
    add eax, ebx

    ; epilogue
    pop ebx
    pop ebp
    ret