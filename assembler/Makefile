TARGET=hello
SOURCE=hello.asm

$(TARGET): $(SOURCE)
	nasm -f elf64 -o out.o $(SOURCE)
	ld -o $(TARGET) out.o
	rm out.o

