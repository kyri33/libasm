global  _ft_memset
section .text

_ft_memset:
    push    rdi ; Store pointer to first character
    mov     rax, rsi
    mov     rcx, rdx
    cld
    rep     stosb
    pop     rax
    ret