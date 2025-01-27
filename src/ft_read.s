		extern 		__errno_location
		section	.text
		global	ft_read

ft_read:
		mov		rax, 0
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
