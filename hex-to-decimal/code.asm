ORG OOH;
	MOV A, #0AH;
	MOV B, #0AH;
	DIV AB;
	MOV R0, B;
	MOV B, #0AH;
	DIV AB;
	MOV R1, B;
	MOV R2, A;
END: