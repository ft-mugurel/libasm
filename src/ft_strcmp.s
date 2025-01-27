section .text
global ft_strcmp

ft_strcmp:
		mov		rax, 0
		mov		rdx, 0
		mov		rcx, -1

loop:
		inc		rcx
		mov		al, byte[rdi + rcx]
		mov		dl, byte[rsi + rcx]
		cmp		dl, 0
		je		return
		cmp		al, dl
		je		loop

return:
		sub		rax, rdx
		ret
