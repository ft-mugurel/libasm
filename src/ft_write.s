		extern 		__errno_location
		section	.text
		global	ft_write

ft_write:
		mov		rax, 1
		syscall
		cmp rax, -1
		je error
		ret

error:
		neg		rax
		mov		rdx, rax
		call	__errno_location
		mov		[rax], rdx
		mov		rax, -1
		ret
