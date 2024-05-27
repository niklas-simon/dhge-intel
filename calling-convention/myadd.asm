global myadd

section .text

myadd:
    ; prolog
    push rbp
    mov rbp, rsp

    ; (a + b - c) * d
    mov rax, rdi ; argument 1
    add rax, rsi ; argument 2
    sub rax, rdx ; argument 3
    mul rcx ; argument 4

    ; epilog
    pop rbp
    ret