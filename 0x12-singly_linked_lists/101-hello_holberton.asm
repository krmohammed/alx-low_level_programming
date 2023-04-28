section .data
	message db "Hello, Holberton", 0
	format db "%s\n", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	push qword message
	push qword format
	call printf

	add rsp, 16
	mov rsp, rbp
	pop rbp
	ret
