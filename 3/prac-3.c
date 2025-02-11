#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char *keywords[] = {
     "auto", "break", "case", "char", "const", "continue", "default", 
     "do", "double", "else", "enum", "extern", "float", "for", "goto", 
     "if", "int", "long", "register", "return", "short", "signed", 
     "sizeof", "static", "struct", "switch", "typedef", "union", 
     "unsigned", "void", "volatile", "while"
};


const char *punctuations[] = { 
     "!", "\"", "#", "$", "%", "&", "'", "(", ")", ",", ".", ":", ";", "?", "@", "[", "\\", "]", "^", "_", "`", "{", "|", "}", "~"
};

const char *operators[] = {
     "+", "-", "*", "/", "%", "==", "!=", "<", ">", "<=", ">=", "&&", "||", "!", "&", "|", "^", "~", ">>", "<<", "++", "--", "+=", "-="
};

int isPunctuation(char *punc){
     int noOfPunc = sizeof(punctuations)/sizeof(punctuations[0]);
     for(int i = 0; i < noOfPunc; i++)  if(!strcmp(punctuations[i], punc)) return 1;
     return 0;
}

int isOperator(char *oper){
     int noOfOper = sizeof(operators)/sizeof(operators[0]);
     for(int i = 0; i < noOfOper; i++)  if(!strcmp(punctuations[i], oper)) return 1;
     return 0;
}

int isKeyWord(char *keyWord){
     int noOfKeywords = sizeof(keywords)/sizeof(keywords[0]);
     for(int i = 0; i < noOfKeywords; i++)   if(!strcmp(keywords[i], keyWord)) return 1;        
     return 0;
}

int generateToken(char *code, long int codeSize){
     int noOfToken;
     char *token;

     char *str;

     for(int i = 0; i < 26; i++){
          str = malloc(sizeof(char));
          str[i] = (65+i);
          printf("%c", str[i]);
     }

     printf(" \n %s", str);

     // for(int i = 0; i < codeSize; i++){

     //      if()
     // }

     return 0;
}

int main(){
     FILE *fptr;
     char *code, ch;
     int pointer = 0;

     fptr = fopen("./testingCode-1.c", "r");

     fseek(fptr, 0L, SEEK_END); 
     long int res = ftell(fptr); 
     code = (char *)malloc(res*sizeof(char));
     
     fseek(fptr, 0, SEEK_SET);
     while ((ch = fgetc(fptr)) != EOF) {
          code[pointer++] = ch;
     }

     printf("%d", generateToken(code, res));
}