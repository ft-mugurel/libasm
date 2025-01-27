		section .text
		global ft_strcpy

ft_strcpy:
		xor	rax, rax
		cmp	rsi, 0
		je	null_terminate_ret

loop:
		cmp	BYTE [rsi + rax], 0
		je	null_terminate_ret
		mov	cl, BYTE [rsi + rax]
		mov	BYTE [rdi + rax], cl
		inc	rax
		jmp	loop

null_terminate_ret:
		mov	BYTE [rdi + rax], 0
		mov	rax, rdi
		ret
