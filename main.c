#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//mash picture that sets number of interval
int interval(){
int randomnumber= rand() % 20;
  while (randomnumber <= 1){
    randomnumber= rand() % 20;
  }
  printf("MASH Interval: %d\n\n", randomnumber);

  int limit = randomnumber;

  int count1;
  int count2;
  int count3 = limit - 1;
  //draws interval triangle picture
  for (count1=1;count1<limit*2;count1+=2){
    for (count2=0;count2<count3;count2++)
        printf(" ");
    for (count2=0;count2<count1;count2++){
        printf("*");
    }
    printf("\n");
    count3--;
  }
  //returns interval number
  return randomnumber;
}

//set topics
char *setTopic(char *topicList[], int s) {
  //generates random number to pick topic from list
  int num = rand() % (s-1);
  char *topic = topicList[num];
  //takes out topic chosen from the topic list
  for ( int i=num; i< (s-1); i++){
    topicList[i] = topicList[i + 1];
  }
  //returns the topic chosen
  return topic;
}

//get user input for choices
void getChoices(char *topicL[], char *topicName) {
  size_t malloc_size = 100;
  printf("Enter a %s that you would love. \n", topicName);
  topicL[0] = malloc(malloc_size * sizeof(char)); /* allocates 100 bytes */
  scanf("%99[^\n]%*1[\n]", topicL[0]);
  printf("Enter a %s that you would love. \n", topicName);
  topicL[1] = malloc(malloc_size * sizeof(char)); /* allocates 100 bytes */
  scanf("%99[^\n]%*1[\n]", topicL[1]);
  printf("Enter a %s that you would hate. \n", topicName);
  topicL[2] = malloc(malloc_size * sizeof(char)); /* allocates 100 bytes */
  scanf("%99[^\n]%*1[\n]", topicL[2]);
  printf("Enter a %s that you would hate. \n", topicName);
  topicL[3] = malloc(malloc_size * sizeof(char)); /* allocates 100 bytes */
  scanf("%99[^\n]%*1[\n]", topicL[3]);
}

//MASH
void mash(char *two, char *three, char *four, char *topicOne[],char *topicTwo[],char *topicThree[],char *topicFour[]){
//set numbers for interval and list amounts
int intervalMax = interval();
int interval = intervalMax;
int items1 = 4;
int items2 = 4;
int items3 = 4;
int items4 = 4;
//loop will continue until there is only one user choice left in each topic array
while((items1 != 1) || (items2 != 1) || (items3 != 1) || (items4 != 1)){
  interval= intervalMax;
  while(interval > -1){
//topicOne traversal
  //only go through array if it has more than one item left
  if(items1>1){
    //don't delete anything from array if the interval is greater than the number of answers left in array and delete array size from the interval and move onto next topic
    if(((interval - items1) > 0) && (items1 > 1)){
    interval = interval - items1;
    }
    else{
      if((items1 > 1) && (interval != 0)){
      //if the interval is less than the size of topic array, delete the answer that it lands on
        if((items1 - interval != 0)){
          for( int i= (interval-1); i< (items1); i++){
            topicOne[i] = topicOne[i + 1];
          }
          if((items1-1) >1){
            interval= intervalMax-(abs(interval - items1));
          }
          else{
            interval= intervalMax;
          }
            items1--;
            //if the interval is equal to how many items are left to traverse in the array, delete the last answer in array
            if(interval==0 && items1 >1){
              for( int i= items1-1; i< (items1); i++){
                topicOne[i] = topicOne[i + 1];
              }
            items1--;
            interval = intervalMax;
            }
            //if the interval is still less than the size of topic array, delete the answer that it lands on
            while(interval<0 && items1 >1){
              for( int i= items1+interval; i< (items1); i++){
              topicOne[i] = topicOne[i + 1];
              }
              if(items1>1){
                interval= intervalMax-(abs(abs(interval) - items1));
              }
              else{
                interval=intervalMax;
              }
                items1--;
            }
        }
          else{
            for( int i= items1-1; i< (items1); i++){
            topicOne[i] = topicOne[i + 1];
            }
            items1--;
            interval = intervalMax;
          }}}}

//topicTwo traversal
  //only go through array if it has more than one item left
  if(items2>1){
    //don't delete anything from array if the interval is greater than the number of answers left in array and delete array size from the interval and move onto next topic
    if(((interval - items2) > 0) && (items2 > 1)){
      interval = interval - items2;
    }
    else{
      if((items2 > 1) && (interval != 0)){
      //if the interval is less than the size of topic array, delete the answer that it lands on
        if((items2 - interval != 0)){
          for( int i= (interval-1); i< (items2); i++){
            topicTwo[i] = topicTwo[i + 1];
          }
          if((items2-1) >1){
            interval= intervalMax-(abs(interval - items2));
          }
          else{
            interval= intervalMax;
          }
          items2--;
          //if the interval is equal to how many items are left to traverse in the array, delete the last answer in array
          if(interval==0 && items2 > 1){
            for( int i= items2-1; i< (items2); i++){
            topicTwo[i] = topicTwo[i + 1];
            }
            items2--;
            interval = intervalMax;
          }
          //if the interval is still less than the size of topic array, delete the answer that it lands on
          while(interval<0 && items2 >1){
            for( int i= items2+interval; i< (items2); i++){
              topicTwo[i] = topicTwo[i + 1];
            }
            if (items2>1){
              interval= intervalMax-(abs(abs(interval) - items2));
            }
            else{
              interval= intervalMax;
            }
              items2--;
          }
        }
        else{
          for( int i= items2-1; i< (items2); i++){
            topicTwo[i] = topicTwo[i + 1];
          }
          items2--;
          interval = intervalMax;
  }}}}

//topicThree traversal
  //only go through array if it has more than one item left
  if(items3>1){
    //don't delete anything from array if the interval is greater than the number of answers left in array and delete array size from the interval and move onto next topic
    if(((interval - items3) > 0) && (items3 > 1)){
      interval = interval - items3;
    }
    else{
      if((items3 > 1) && (interval != 0)){
      //if the interval is less than the size of topic array, delete the answer that it lands on
        if((items3 - interval != 0)){
          for( int i= (interval-1); i< (items3); i++){
            topicThree[i] = topicThree[i + 1];
          }
          if((items3-1)>1){
          interval= intervalMax-(abs(interval - items3));
          }
          else{
          interval= intervalMax;
          }
          items3--;
          //if the interval is equal to how many items are left to traverse in the array, delete the last answer in array
          if(interval==0 && items3 > 1){
          for( int i= items3-1; i< (items3); i++){
            topicThree[i] = topicThree[i + 1];
          }
          items3--;
          interval = intervalMax;
          }
          //if the interval is still less than the size of topic array, delete the answer that it lands on
          while(interval<0 && items3 >1){
            for( int i= items3+interval; i< (items3); i++){
              topicThree[i] = topicThree[i + 1];
            }
            interval= intervalMax-(abs(abs(interval) - items3));
            items3--;
          }}
          else{
            for( int i= items3-1; i< (items3); i++){
              topicThree[i] = topicThree[i + 1];
            }
            items3--;
            interval = intervalMax;
  }}}}
//topicFour traversal
  //only go through array if it has more than one item left
  if(items4>1){
    //don't delete anything from array if the interval is greater than the number of answers left in array and delete array size from the interval and move onto next topic
    if(((interval - items4) > 0) && (items4 > 1)){
      interval = interval - items4;
    }
    else{
      if((items4 > 1) && (interval != 0)){
      //if the interval is less than the size of topic array, delete the answer that it lands on
        if((items4 - interval != 0)){
          for( int i= (interval-1); i< (items4); i++){
            topicFour[i] = topicFour[i + 1];
          }
          if((items4-1)>1){
            interval= intervalMax-(abs(interval - items4));
          }
          else{
            interval= intervalMax;
          }
          items4--;
            //if the interval is equal to how many items are left to traverse in the array, delete the last answer in array
            if(interval==0 && items4 > 1){
              for( int i= items4-1; i< (items4); i++){
                topicFour[i] = topicFour[i + 1];
              }
              items4--;
              interval = intervalMax;
            }
          //if the interval is still less than the size of topic array, delete the answer that it lands on
            while(interval<0 && items4 >1){
              for( int i= items4+interval; i< (items4); i++){
              topicFour[i] = topicFour[i + 1];
            }
            if(items4>1){
              interval= intervalMax-(abs(abs(interval) - items4));
            }
            else{
              interval= intervalMax;
            }
              items4--;
              }}
            else{
              for( int i= items4-1; i< (items4); i++){
              topicFour[i] = topicFour[i + 1];
            }
            items4--;
            interval = intervalMax;
  }}}}
  if((items1 == 1) && (items2 == 1) && (items3 == 1) && (items4 == 1)){
  interval = -1;
  }}}
//print final predictions
  printf("\nWe have determined your future. See the results below!\n");
  printf("\n* You will live in a %s.\n", topicOne[0]);
  printf("\n* Your %s will be %s.\n", two, topicTwo[0]);
  printf("\n* Your %s will be %s.\n", three, topicThree[0]);
  printf("\n* Your %s will be %s.\n", four, topicFour[0]);
}

//main function
int main(void) {
//sets random number generator
srand(time(NULL));
// initialize the topic list, MASH topic, and size of the topic list
char *topicList [10] = {"car","number of kids", "future location", "job", "spouse's name", "number of friends", "pet", "amount of money", "honeymoon destination"};
char *topicOne [5] = {"mansion","apartment","shack","house"};
int size = 10;

//arrays that will hold choices
char *topicTwo[5];
char *topicThree[5];
char *topicFour[5];

//holds names of topics
char *two = setTopic(topicList, size);
size--;
char *three= setTopic(topicList, size);
size--;
char *four = setTopic(topicList, size);
size--;

//get user input
getChoices(topicTwo,two);
getChoices(topicThree,three);
getChoices(topicFour, four);

//Mash: makes predictions based on interval and user's answers
printf("\nTime to MASH!\n");
mash(two, three, four, topicOne, topicTwo, topicThree, topicFour);
return 0;
}
