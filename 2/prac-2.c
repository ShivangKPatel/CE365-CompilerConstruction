#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct transitionTable{
     int crrState;
     char inputSymbol;
     int outState;
};


int main(){
     char *inputStr, *inputSymbol;
     struct transitionTable *t1;
     int noOfInputSymbol, noOfState, initialState, noOfAcceptingState, acceptingState;

     printf("Enter number of input symbol: ");
     scanf("%d", &noOfInputSymbol);
     inputSymbol = malloc(noOfInputSymbol*sizeof(char));

     printf("Enter number of state: ");
     scanf("%d", &noOfState);
     printf("Enter number of accepting state: ");
     scanf("%d", &noOfAcceptingState);

     t1 = malloc(noOfInputSymbol*noOfState*sizeof(struct transitionTable));


     // printf("Enter the length of string: ");
     // scanf("%d", &length);
     // str = malloc(length*sizeof(char));
     
     // printf("Enter the string a*bb : ");
     // scanf("%s", str);

     // // printf("%s", str);
     // // printf("%ld", strlen(str));
     // validateString(str, strlen(str));
}