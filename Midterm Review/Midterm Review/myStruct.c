#include <stdio.h>

char vowelless(char words[]) {
	int i = 0;
	char *pwords = words;
	printf("\t\t");

	while (*pwords != '\0') {
		while (words[i] == 'a' || words[i] == 'e' || words[i] == 'i' || words[i] == 'o' || words[i] == 'u' ||
			   words[i] == 'A' || words[i] == 'E' || words[i] == 'I' || words[i] == 'O' || words[i] == 'U')
					i++;

		printf("%c", words[i++]);
		//i++;
		pwords++;
	}

	printf("\n\n");

	return pwords;
}

int palindrome(char words[]) {
	char *front, *back;

	front = back = words; 

	while (*back != '\0')
		back++;

	back--;

	while (front <= back) {
		if (*front != *back)
			return 0;

		front++;
		back--;
	}

	return 1;
}

struct words {
	char *forwards;
	char *backwards;
	char *disemvowel;
	int palindrome;
};

struct words phrase(char phraseHere[]) {
	struct words temp;

	temp.forwards = phraseHere;
	//temp.backwards = print_reverse(phraseHere);
	//temp.disemvowel = vowelless(phraseHere);
	temp.palindrome = palindrome(phraseHere);

	printf("The word\tReversed\tPalindrome?\tBoneless\n%s\t\t", temp.forwards);// , temp.backwards, temp.disemvowel);
	temp.backwards = print_reverse(phraseHere);
	temp.palindrome ? printf("\t\tyes") : printf("\t\tno");
	printf("\t%s\t\t", vowelless(phraseHere));

	return temp;
}

mmmmmmmainbachmusic() {
	
	//struct words phrase;
	//phrase.forwards = "asdf";

	//printf("%s \n", phrase.forwards);

	phrase("yee");
	//vowelless("Computer science");
	//printf("%d", palindrome("asdf"));
}