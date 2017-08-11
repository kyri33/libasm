global  _ft_isalnum
section .text

extern  _ft_isalpha
extern  _ft_isdigit

_ft_isalnum:
    call    _ft_isdigit
    cmp     rax, 1
    jne      next
    ret

next:
    call    _ft_isalpha
    cmp     rax, 1 ; Compare so neccessary flag is set
    ret