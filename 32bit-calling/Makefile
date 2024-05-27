SRC_C=main.c
SRC_ASM=func.asm

DEST_ASM=func.o
DEST_C=main.o
DEST=prog

ASM_COMPILER=nasm
ASM_ARGS=-felf32

C_COMPILER=gcc
C_ARGS=-m32 -Wall -c

LINKER=gcc
LINKER_ARGS=-m32

RUN_ARGS=2 3 1 5

${DEST_ASM}:
	${ASM_COMPILER} ${ASM_ARGS} ${SRC_ASM} -o ${DEST_ASM}

${DEST_C}:
	${C_COMPILER} ${C_ARGS} -o ${DEST_C} ${SRC_C}

${DEST}: ${DEST_C} ${DEST_ASM}
	${LINKER} ${LINKER_ARGS} -o ${DEST} ${DEST_ASM} ${DEST_C}

# tags as non-file target
.PHONY: clean
clean:
	rm ${DEST_C} &\
	rm ${DEST_ASM} &\
	rm ${DEST}

.PHONY: run
run: ${DEST}
	./${DEST} ${RUN_ARGS}