%define PARSE_SYSCALL(num)  0x2000000 | num
%define WRITE               4
%define STDOUT              1

section .data
isnull: db  "(null)", 0xA
new_ln: db  0xA

section .text
global  _ft_puts

extern  _ft_strlen

_ft_puts:
    ;push    rbp
    ;mov     rbp, rsp

    cmp     rdi, 0
    je      is_null
    call    _ft_strlen
    mov     rdx, rax
    mov     rsi, rdi
    mov     rdi, STDOUT
    mov     rax, PARSE_SYSCALL(WRITE)
    syscall

    ;add rax, '0'
    ;mov rsi, rax
    ;mov rdx, 2
    ;mov rdi, STDOUT
    ;mov rax, PARSE_SYSCALL(WRITE)
    ;syscall
    ;jmp end

    mov     rdi, STDOUT
    lea     rsi, [rel new_ln]
    mov     rax, PARSE_SYSCALL(WRITE)
    mov     rdx, 1
    syscall
    jmp     end
    
    is_null:
        mov rax, PARSE_SYSCALL(WRITE)
        mov rdi, STDOUT
        lea rsi, [rel isnull]
        mov rdx, 7
        syscall

    end:
        ;mov     rsp, rbp
        ;pop     rbp
        ret