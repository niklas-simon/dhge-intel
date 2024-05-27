global myfunc

section .text

myfunc:
    ; prologue
    push ebp ; frame pointer speichern
    mov ebp, esp ; stack pointer in frame pointer schreiben
    push ebx ; zwischenspeichern, da Register genutzt wird

    ; body
    ; ebp zeigt zu stack vor Aufruf der Funktion. 2 Werte wurden seitdem gepusht. Jeder Wert ist 32bit -> 4 byte
    mov eax, [ebp + 8] ; lade parameter 1
    mov ebx, [ebp + 12] ; lade parameter 2
    add eax, ebx ; addiere
    mov ebx, [ebp + 16] ; lade parameter 3
    sub eax, ebx ; subtrahiere
    mov ebx, [ebp + 20] ; lade parameter 4
    mul ebx ; multipliziere (immer mit eax, daher nur ein argument)

    ; epilogue
    pop ebx ; hole ebx aus zwischenspeicher
    pop ebp ; hole alten frame pointer
    ret ; zurück zu call