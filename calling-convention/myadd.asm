global myadd

section .text

myadd:
    sub rsp, 8
    push rbx
    push rbp

    mov rax, rdi
    mov rbp, rsi

    add rax, rbp
    inc rax

    pop rbp
    pop rbx
    add rsp, 8
    ret