global  _ft_isdigit
section .text

_ft_isdigit:
    xor rax, rax
    cmp rdi, '0'
    jl  end
    cmp rdi, '9'
    jg  end
    mov rax, 1

    end:
        ret