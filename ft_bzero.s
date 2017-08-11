global  _ft_bzero
section .text

_ft_bzero:
    cmp rdi, 0  ;First paramter void* passed to rdi
    jz end      ;If 0 then end
    mov rax, rdi
    mov rbx, rsi

_rep:
        cmp rbx, 0  ;rbx has loop counter passed from rsi
        jle end     ;If loop is over return
        mov byte[rax], 0    ;Zero the current byte
        inc rax     ;Increment to the next byte of rax
        dec rbx     ; Decrease the loop counter
        jmp _rep    ;loop
    end:
        ret
