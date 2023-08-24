section .data
    hello db "Hello, Holberton", 0
    fmt db "%s", 0
    nl db 10, 0

section .text
    extern printf

global _start

_start:
    push rsi         ; Save rsi to restore its value later
    lea rdi, [fmt]   ; Load the format string address
    lea rsi, [hello] ; Load the string address
    xor rax, rax    ; Clear rax before making the call
    call printf     ; Call printf with the arguments in rdi and rsi

    ; Print a new line
    lea rdi, [fmt]   ; Load the format string address
    lea rsi, [nl]    ; Load the new line address
    xor rax, rax    ; Clear rax before making the call
    call printf     ; Call printf with the arguments in rdi and rsi

    pop rsi          ; Restore rsi value
    ; Exit
    mov rax, 60      ; syscall number for exit
    xor rdi, rdi     ; exit status 0
    syscall

