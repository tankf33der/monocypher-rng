all:
	clang -fsanitize=address *.c && ./a.out
	clang -fsanitize=memory *.c && ./a.out
	clang -fsanitize=undefined *.c && ./a.out
