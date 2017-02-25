/*
* Name: ANDHIKA RAGIL KESUMA
* NPM: 1506797091
* Class: EKSTENSI
* Comment: OS EXT ANDHIKA
*/
#define LOOP 4
#include <stdio.h>
void main() {
 int input = 5;int loop = LOOP;
 int result;
 for(input;loop>0;){
  result += input;
  loop--;
 }
 printf("%d times %d equals %d \n", input, LOOP, result);
}

