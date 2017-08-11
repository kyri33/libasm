global  _ft_isascii
section .text

_ft_isascii:
    xor rax, rax
    cmp rdi, 0
    jl  end
    cmp rdi, 127
    jg  end
    mov rax, 1
end:
    ret