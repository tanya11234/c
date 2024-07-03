#include<stdio.h>
int main()
{
	char character,small,capital;
     printf("Enter the alphabet  :  ");
	 scanf("%c",&character);
	 small = (character=='a'||character=='e'||character=='i'||character=='o'||character=='u');
	 capital = (character=='A'||character=='E'||character=='I'||character=='O'||character=='U');
	 
	 
	 if (small||capital)
	 { printf("it is vowel");
	}
 else{
	 printf(" It is a consonent");
	}
	return 0;
}