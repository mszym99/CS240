#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 100

int main() {
	char ch;
	int i;
	char sentence[MAXSIZE];
	int alphabetsCount = 0;
	printf("Type a sentence:\n");

	//Write the code that reads a sentence from the keyboard
	fgets(sentence, sizeof(sentence), stdin);
	printf("Type a character that you'd like to find the number of occurrences in a sentence:\n");
	//Write the code that reads a character from the keyboard
	scanf(" %c", &ch);

	//Write the code that counts the number of occurrences of the character in the sentence
	for(i = 0; sentence[i] != '\n'; i++){
		if(sentence[i] == ch) { //Compares if sentence[i] is equal to ch
			alphabetsCount++; // if so then alphabetsCount++;
		}
	}
	//Ignore uppercase or lowercase
	//<ctype.h> includes tolower and toupper
	if(sentence[i] == tolower(ch) || sentence[i] == toupper(ch)) {
		++alphabetsCount;
	}


	printf("Alphabet %c has a frequency of %d\n", ch, alphabetsCount);
	return 0;
}
