global myadd

section .text

myadd:
    push rbx
    push rbp

    mov rax, rdi
    mov rbp, rsi

    add rax, rbp
    inc rax

    pop rbp
    pop rbx
    ret