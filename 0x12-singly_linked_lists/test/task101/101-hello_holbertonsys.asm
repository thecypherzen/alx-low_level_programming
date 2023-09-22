	;; prints a message to stdout using syscall

	section .data 		;data section start
msg:	db "Hello, Holberton", 10

	section .text 		;text section start
	global main
main:
	mov rax, 0x01
	mov rdi, 0x01
	mov rsi, msg
	mov rdx, 17
	syscall

	mov rax, 0x3c
	mov rdi, 0x00
	syscall
