/*TEST LATER; BREAKS HERE*/

void func() {

}

void anotherfunc() {

}

struct symtab
{
	char *name;
	int (*funcptr)();
}
symtab[] = {
	"func", func,
	"anotherfunc", anotherfunc,
};

int main() {
	printf("%s", (symtab + 1)->name);
	getchar();
	return 0;
}
	
/*
char* getString() {
char* str = "THIS";	//creates memory somewhere in the heap(END of execution stack)

//strlen is a stdio function that returns the length of a string
char *p = malloc(strlen(str + 1))// +1 is for \0
strcpy(p, str);
return p;

//stacks cannot grow so large as to intercept the heap
}

heaps grow DOWN
stacks grow UP
the sum of both is what the OS allocates for the program to run
*/