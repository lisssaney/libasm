section   .text
	global _ft_strcmp
_ft_strcmp:
loop:
	mov al, byte [rdi]
	mov bl, byte [rsi]
	cmp al, bl
	jne exit
	cmp al, 0
	je null
	inc rdi
	inc rsi
	jmp loop 
exit:
	sub al, bl
	cmp al, 0
	jl minus
	cmp al, 0
	jg plus
plus:
	mov rax, 1
	ret
minus:
	mov rax, -1
	ret
null:
	mov rax, 0
	ret

