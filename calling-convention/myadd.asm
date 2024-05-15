global myadd

section .text

myadd:
    mov rax, rdi
    add rax, rsi
    ret