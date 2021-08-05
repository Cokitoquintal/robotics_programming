/*Exercise 7-3: A serial transmission line can transmit 960 characters each second.
Write a program that will calculate the time required to send a file, given the file's
size. Try the prog ram on a 400MB (419,430,400 -byte) file. Use appropriate units.
(A 400MB file takes days.)
*/

#include <stdio.h>

char line[100];
float estimated_time, file_size;
  
int main(void) {
  printf("Size of the file:\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%f",&size );
  
  //1 mb = 1048576 bytes
  estimated_time = (file_size*1048576)/960); //960 characters per second

  printf("This file will be sent in %f seconds\n",time);
  return 0;
}

