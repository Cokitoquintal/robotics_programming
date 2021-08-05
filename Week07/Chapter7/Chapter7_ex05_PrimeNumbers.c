/*
Exercise 7-5: Write a program to tell if a number is prime.
*/
#include<stdio.h>  

int n,i,flag=0;
char line[100];
//flag is a variable used as a signal in a program
//n is the number so be tested
//i acts as a 'checker' to verify if n is a prime number
// 

#include <stdio.h>
int main() {
	printf("Program to verify prime numbers\n");
	printf("Type the number:\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line,"%d",&n);

  for (i = 2; i <= n / 2; ++i) { //this loop for will verify if there is any number avove 0 capable of divide 'n
    if (n % i == 0) { //if n is divisible by i, is not a prime number
      flag = 1; //variable flag will print which statement is true
      break;
    }
  }

  if (n == 1) { //if n is 1, is not a prime number
    printf("1 is not a prime number.\n");
  } 
  else {
    if (flag == 0) //if flag is 0, it means that n is only divided my itself and 1, so it is a prime number
      printf("%d is a prime number.\n", n);
    else //if flag is 1, as it was stated before, is not a prime number
      printf("%d is not a prime number.\n", n);
  }

  return 0;
}

//part of the code were substracted from https://www.programiz.com/c-programming/examples/prime-number and used as guide
