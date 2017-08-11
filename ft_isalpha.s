global  _ft_isalpha
section .text

_ft_isalpha:
    xor rax, rax
    cmp rdi, 'A'
    jl  end
    cmp rdi, 'z'
    jg  end
    mov rax, 1
    cmp rdi, 'Z'
    jle end
    cmp rdi, 'a'
    jge end
    mov rax, 0
    
    end:
        ret