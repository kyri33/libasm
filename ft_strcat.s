global  _ft_strcat
section .text

_ft_strcat:
    mov         r8, rdi             ; Store string1 in r8 for return
    loop_arg1:
        cmp     byte[rdi], 0    ; Check for null termination
        je      copy            ; If at end then start copying
        inc     rdi
        jmp     loop_arg1

    copy:
        mov     al, byte[rsi]   ; Copy character of string2 to al
        mov     byte[rdi], al   ; Copy character to end of rdi
        cmp     byte[rsi], 0    ; Check if end of string2
        je      end
        inc     rsi
        inc     rdi
        jmp     copy
    end:
        mov     rax, r8         ; Copy string1 back into rax
        ret