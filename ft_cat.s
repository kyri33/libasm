%define PARSE_SYSCALL(num)  0x2000000 | num
%define WRITE               4
%define READ                3
%define STDOUT              1
%define BUFF_SIZE           4096

section .bss    ; Reserve uninitialize variables
buffer: resb BUFF_SIZE

section .text
global  _ft_cat

_ft_cat:
    push    rbp
    mov     rbp, rsp

_read:
    push    rdi
    lea     rsi, [rel buffer]
    mov     rdx, BUFF_SIZE
    mov     rax, PARSE_SYSCALL(READ)
    syscall

    cmp     rax, 0
    jle     end

    mov     rdi, STDOUT
    lea     rsi, [rel buffer]
    mov     rdx, rax
    mov     rax, PARSE_SYSCALL(WRITE)
    syscall
    
    pop     rdi
    jmp     _read

end:
    leave
    ret
