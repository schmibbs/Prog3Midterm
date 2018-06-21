#include <stdio.h>
#include <stdlib.h>

/*reverses an input char string*/
char reverse(char cArr[]) {
	if (cArr[0] == '\0') {
		printf("\n");
		return;
	}
	else {
		int i = 0, j;
		char temp[140];

		while (cArr[i] != '\0') {
			temp[i] = cArr[i];
			i++;
		}

		if (i > 0)
			printf("%c", temp[--i]);

		temp[i] = '\0';

		return reverse(temp);
	}
}

/*Question 1 done in class; see notes*/
void print_reverse(char *input) {
	if (*input != '\0') { //we havent reached the end of a string

		print_reverse(input + 1);	//*input is the content of input
		printf("%c", *input);
	}
}

/*Predicted it would print odd numbers from [7,1]*/
int a(){
	int n;
	for (n = 7; n != 0; n--)
		printf("n = %d\n", n--);	//infinite loop; skips over zero and loops forever; 
	getchar();						//decrements once after printing and again to see whether or not to continue
	return 0;
}

/*Predict that it will print user input + Hello world! twice*/
void b(){
# define scanf "%s Hello World! "

		printf(scanf, scanf);//prints %s Hello World! Helo World!; 
		getchar();			 //second Hello World feeds the place holder which contains a placeholder, but it is treated like a string
		return 0;
}

/*Predict it will print [1,15]*/
void c() {
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
		if (i < 15)
			continue;
	} while (0);//only executes once(always false), then lets user type something in to quit
	getchar();	//continue jumps straight to the condition to see if it should continue
	return 0;
}

/*Assigns a char pointer to a specified message and returns the pointer to it*/
char *getStringD()
{
	char *str = "Nice test for strings";
	return str;
}

/*Predict it will print Nice test for strings*/
int d() {
	printf("%s", getStringD());
	
	getchar();//correct. does just that
	return 0;
}

char *getStringE()
{
	char str[] = "Will I be printed?";//no you won't
	return str;
}

/*Predict it will break. Str is an array of undefined size*/
int e() {
	printf("%s", getStringE());	//prints garbage
	getchar();					//The array is a local variable that is destroyed ater getStrE executes. The garbage is where it used to be
}

/*Predict it will overflow. i is always 5 and redeclared when f is called*/
int f() {
	static int i = 5;//static declares i and throws it away; geeksforgeeks/static-varibles-in-c
	
	if (--i) {
		f();
		printf("%d ", i);//prints 4 zeros then quits; Maybe it throws the static line away after initial execution?
						 //f() is called 4 times AFTER i is declared. After it is substracted 4 times, the print functions are allowed to run
	}
}

/*Predict it will print a bunch of 5's*/
int g() {
	static int var = 5;
	printf("%d ", var--);//counts perfectly backwards
	if (var)			 //5 exists the first time it is called and printed, afterwards, it is subtracted until it is zero.
		g();
}

/*Predict it will run every case(no break statements except in default case) final result is 22*/
int h() {
	int i = 0;
	for (i; i<20; i++)
	{
		switch (i)
		{
		case 0:
			i += 5;
		case 1:
			i += 2;
		case 5:
			i += 5;
		default:
			i += 4;
			break;
		}
		printf("%d ", i);
	}
	getchar();	//prints 16 and 21 then quits
	return 0;
}

/*Predict that it will print the address of i or throw an exception*/
int i() {
	printf("%d", i);	//the name of the function is a pointer to the beginning of where the function is stored.
	getchar();			//prints 12062795; I think this is the address of i; totes was

	return 0;
}

void jIsAnotherFile() {}

/*Predict this will print 3 and then throw an exception (i is not an array)*/
int k() {
	int i;
	i = 1, 2, 3;
	printf("i = %d\n", i);	//prints i = 1
	i = (1, 2, 3);
	
	printf("i = %d\n", i);	//prints i = 3
	getchar();
	return 0;//https://stackoverflow.com/questions/17251584/difference-between-int-i-1-2-3-and-int-i-1-2-3-variable-declaration-with
}

//Predict it will print -> 110 /* And this? */ followed by a new line
int l() {
	int first = 50, second = 60, third;
	third = first /* Will this comment work? */ + second;
	printf("%d /* And this? */ \n", third);	
	
	getchar();//Correct
	return 0;
}

void mIsAnotherFile() {}

/*Predict it will print "m"*/
int n() {
	char a[2][3][3] = { 'm','a','k','e',' ','C',' ',
		'g','r','e','a','t','!' };

	printf("%s ", **a);
	
	getchar();//prints the entire statement; **a is pointing to the start of the array, printf takes this and prints everything until \0. **a + 1 starts from the 'e' in great 
	return 0;
}

/*Predict that it will print m and then the whole prhase, or throw an exception because the operations are incrementing the contents of str, not the addresses*/
int o() {
	char str[] = "waita\nminute!!";
	char *ptr1, *ptr2;
	
	ptr1 = &str[3];
	ptr2 = str + 5;

	printf("%c", ++*str - --*ptr1 + *ptr2 + 2);//https://i.ytimg.com/vi/Qn977W9HjWM/hqdefault.jpg
	printf("%s", str);
	
	getchar();//prints this instead: xaisa \nminute!!
	return 0;
}

/*Very inefficient function used to sum a value from 0 to n*/
int fun(int n)
{
	int i, j, sum = 0;
	for (i = 1; i <= n; i++)
		for (j = i; j <= i; j++)
			sum = sum + j;
	return(sum);
}

/*Predict it will print 120*/
void p() {
	printf("%d", fun(15));
	
	getchar();//Correct
	return 0;
}

/*Predict it will print 8 after running 5 times*/
int q() {
	int c = 5, no = 1000;
	do {
		no /= c;
	} while (c--);
	
	printf("%d\n", no);	//doesnt print anything; c becomes zero and function is rude enough to not tell you
	return 0;
}

/*Predict it will break or go into an infinite loop*/
void r() {
	while (1) {
		if (printf("%d", printf("%d", 123)))//prints 1233
			break;
		else
			continue;
	}
	return 0;
}

/*Predict it will print garbage and 2; the if branch is not taken bc x = 0*/
int s() {
	int x, y = 2, z, a;
	if (x = y % 2)
		z = 2;
	a = 2;

	printf("%d %d ", z, x);//correct; visual studio even had a warning against using an undefined variable here
	return 0;
}

/*Predict it will print 15*/
int t() {
	#define prod(a,b) a*b

	int x = 3, y = 4;
	printf("%d\n", prod(x + 2, y - 1)); //prints 10; it DOES NOT add and then pass those arguments. It treats it as 3 + 2 * 4 - 1
	return 0;
}

/*Predict it will print garbage. a[10] was not instantiated, contains random values*/
void u() {
	int a[10];
	printf("%d\n\n", *a);
	printf("%d", *a + 1 - *a + 3);//prints 4; *a = -858993460 *a - *a = 0; literally 2 + 2 afterwards
	return 0;
}

int mainss() {
	//reverse("Someone set a fire in your car, because you too long, and i got bored");
	r();


	//phrase("tuna");
	//printf("Is this a palindrome? %d\n", palindrome("OMEMSAHIBBARTRABBIHASMEMO"));
}