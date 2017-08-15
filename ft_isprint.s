global  _ft_isprint
section .text

_ft_isprint:
    xor rax, rax
    cmp rdi, 32
    jl  end
    cmp rdi, 126
    jg  end
    mov rax, 1
    end:
        ret