#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string(char *s, size_t size);

// function creates a word using random letters
void rand_string(char *s, size_t size){
   char letters[] = "qwertyuiopasdfghjklzxcvbnm";
   for(size_t i = 0; i < size; i++){
       int index = rand() % (int)(sizeof(letters) - 1); // selects a random index
       s[i] = letters[index]; // adds the random letter to the string
   }
   s[size] = '\0'; 
}