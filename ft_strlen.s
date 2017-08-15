global  _ft_strlen
section .text

_ft_strlen:
    push rdi    ; Push to stack to save the value
    mov rcx, -1 ; RCX Decreases with each scan
    xor al, al  ; AL must be set to 0 (what scasb is searching for)
    cld         ; Direction flag must be set to forwards for scasb
    repne scasb ; Repeat until not equal to, scan string until al (0)
    mov rax, -2 ; RAX Holds return value, -2 must be subtracted from rcx to get length without null
    sub rax, rcx; Subtraction
    pop rdi     ; Restore string
    ret