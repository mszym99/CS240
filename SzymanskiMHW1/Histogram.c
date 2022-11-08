
#include <stdio.h>
#include <ctype.h>

#define MAXROWS 100
#define NUM_ALPHABETS 26

int main() {
        int count, i, j, k;

        char sentence[MAXROWS];
        char alphabets[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                        'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        int frequency[NUM_ALPHABETS] = {0};

        //step 1: write a function that reads a sentence from the keyboard

        //use fgets()
        //      fgets(sentence, sizeof(sentence), stdin);

        printf("Please enter a sentence: \n"); // eventually move this up.............
        fgets(sentence, sizeof(sentence), stdin);

        //step 2: Find out the frequency of the alphabets in the sentence, ignore uppercase or lowercase in the sentence

        for(i = 0; sentence[i] != '\n'; i++) {
                for(j = 0; j < NUM_ALPHABETS; j++) {
                        if(alphabets[j] == sentence[i]) { //ignore case
                                frequency[j]++;

                        }
        }
}
//      if(sentence[i] == tolower(j) || sentence[i] == toupper(j)) {
        //      ++frequency[j];
//      }

                //step 3 provide the histogram for the display
printf("%s%15s%15s\n", "letters", "Frequency", "Histogram");

        for(i = 0; i < NUM_ALPHABETS; i++) {  //As i is < 26 i++ counts alphabets
                printf(  "%c%15d           ", alphabets[i], frequency[i]); //prints out formally with the spaces
                for(j = 0; j < frequency[i]; j++) { //Histogram *** parts for the number of times
                        printf("%c", '*');
                }
                printf("\n");
        }

        return 0;
}
