#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  

void randomPasswordGeneration2(int N){
    int i = 0;
    int randomizer = 0;

    srand((unsigned int)(time(NULL)));

    char numbers[] = "0123456789";

    char letter[] = "abcdefghijklmnoqprstuvwyzx";

    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";


    char symbols[] = "!@#$^&*?";

    char password[N];

    randomizer = rand() % 4;

    for (i = 0; i < N; i++) {

        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    
        else if (randomizer == 2) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }


        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
}



void randomPasswordGeneration(int N){
    int i = 0;
    int randomizer = 0;

    srand((unsigned int)(time(NULL)));
  
    char numbers[] = "0123456789";
  
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
  
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
  

    char symbols[] = "!@#$^&*?";
  
    char password[N];
  
    randomizer = rand() % 4;
  
    for (i = 0; i < N; i++) {
  
        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
}
  

int main(){

    int N;
    		printf("Type length for password: ");
		scanf("%d", &N);
	    	
glup_si:
		printf("Do you want password to contains symbols 1 for yes 0 for no. ");
    int choice;
		scanf("%d", &choice);
	switch(choice){
		case 1:
			randomPasswordGeneration(N);
			printf("\n");
			break;
		case 0:
			randomPasswordGeneration2(N);
			printf("\n");
			break;
		default:
			printf("please enter valid number 1 or 0\n");
			goto glup_si;}            
    return 0;
}


