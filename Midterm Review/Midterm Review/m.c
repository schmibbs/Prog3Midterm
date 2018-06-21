#include <stdio.h>
/*Doesnt work, I predict it was because name has an undefined size and is trying to be assigned a sequence of chars*/
/*Could be that site's members are being defined before anything can access it*/
/*Wont run because the members are being assigned values in the construction of the struct. Also, the struct is being created in the main()*/

//////int mainm() {
//////	struct site
//////	{
//////		char name[100] = "Hello World!";
//////		int no_of_pages = 200;
//////	};
//////	struct site *ptr;
//////	printf("%d", ptr->no_of_pages);
//////	printf("%s", ptr->name);
//////	getchar();
//////	return 0;
//////}