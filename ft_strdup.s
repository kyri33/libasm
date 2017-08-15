section .text
global  _ft_strdup

extern  _ft_memcpy
extern  _malloc
extern  _ft_strlen

_ft_strdup:
    push rbp
	mov rbp, rsp

    push    rdi
    call    _ft_strlen
    push    rax
    add     rax, 1
    mov     rdi, rax
    call    _malloc
    mov     rdi, rax
    pop     rdx
    pop     rsi
    call    _ft_memcpy

    leave
    ret
