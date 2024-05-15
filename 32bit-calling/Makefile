DEST_C=main.c
DEST_ASM=func.asm

TARGET_ASM=func.o
TARGET=prog

compile_asm:
	nasm -felf32 ${DEST_ASM} -o ${TARGET_ASM}

compile: compile_asm
	gcc ${DEST_C} func.o -o ${TARGET} -m32

clean:
	rm ${TARGET_ASM}
	rm ${TARGET}

run: compile
	./${TARGET} 2 3