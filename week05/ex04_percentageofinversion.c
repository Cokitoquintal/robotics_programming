#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){

  int per1, per2, per3, total, q1, q2, q3, sum=0;

  printf("The total inversion is: ");
  scanf("%d", &total);
  printf("Inversion of person a is: ");
  scanf("%d", &q1);
  printf("Inversion of person b is: ");
  scanf("%d", &q2);
  printf("Inversion of person c is: ");
  scanf("%d", &q3);

  if(sum=total){
    per1=(q1/total)*100;
    printf("Person a inverted %d\%\n",per1);
    
    per2=(q2/total)*100;
    printf("Person b inverted %d\%\n",per2);

    per3=(q3/total)*100;
    printf("Person c inverted %d\%\n",per3);
  }else{
printf("The sum of the inversions and the total doesn't match.'\n");
  }
  return 0;
}
