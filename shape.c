#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
  srand(time(NULL));
  int randomnumber;
  randomnumber = rand() % 19+1;
  printf("%d\n", randomnumber);

  int limit = randomnumber;

  int count1;
  int count2;
  int count3 = limit - 1;

  for (count1=1;count1<limit*2;count1+=2){
    for (count2=0;count2<count3;count2++)
        printf(" ");
    for (count2=0;count2<count1;count2++){
        printf("*");
    }
    printf("\n");
    count3--;
  }
  return 0;
}
