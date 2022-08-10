#include<stdio.h>
int main()
{
	char alphabet;
	printf("enter any alphabet:");
	scanf("\n%c",&alphabet);
	switch(alphabet)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':	
		printf("%c s vowel",alphabet);
		break;		
	}
	printf("%c is consonant",alphabet);
	return 0;
}
