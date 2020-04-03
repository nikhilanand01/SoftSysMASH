#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
  

//set topics
char *setTopic(char *topicList[], int s) {
int num = rand() % (s-1);
  //int num = (srand() % (s)); 
  char *topic = topicList[num];
  for ( int i=num; i< (s-1); i++){
    topicList[i] = topicList[i + 1];
  } 
  return topic;
}

//get user input for choices 
void getChoices(char *topicL[], char *topicName) {
  size_t malloc_size = 100; 
  printf("Enter a %s that you would love. \n", topicName);
  topicL[0] = malloc(malloc_size * sizeof(char)); /* allocates 100 bytes */
  scanf("%99s", topicL[0]);
  printf("Enter a %s that you would love. \n", topicName);
  topicL[1] = malloc(malloc_size * sizeof(char)); /* allocates 100 bytes */
  scanf("%99s", topicL[1]);
  printf("Enter a %s that you would hate. \n", topicName);
  topicL[2] = malloc(malloc_size * sizeof(char)); /* allocates 100 bytes */
  scanf("%99s", topicL[2]);
  printf("Enter a %s that you would hate. \n", topicName); 
  topicL[3] = malloc(malloc_size * sizeof(char)); /* allocates 100 bytes */
  scanf("%99s", topicL[3]);
}
//MASH
void mash(char *two, char *three, char *four, char *topicOne[],char *topicTwo[],char *topicThree[],char *topicFour[]){

//var interval = spiral();
//var intervalMax = interval;
//set numbers for interval and list amounts
int interval = 7;
int items1 = 4;
int items2 = 4;
int items3 = 4;
int items4 = 4;

while((items1 != 1) || (items2 != 1) || (items3 != 1) || (items4 != 1)){
 interval= 7; 
  while(interval > 0){

    if(((interval - items1) > 0) && (items1 > 1)){ 
    interval = interval - items1;
    }
    else{
      if((items1 > 1) && (interval != 0)){
        if((items1 - interval != 0)){
          for( int i= ((items1 - (items1-interval))-1); i< (items1); i++){
            topicOne[i] = topicOne[i + 1];
            items1--;
          }
        }
          else{
            for( int i= ((items1 - (items1-1))); i< (items1); i++){
            topicOne[i] = topicOne[i + 1];
            items1--;
          }
          items1--;}
          interval = 0;
    }}

    if(((interval - items2) > 0) && (items2 > 1)){ 
    interval = interval - items2;
    }
    else{
      if((items2 > 1) && (interval != 0)){
        if((items2 - interval != 0)){
          for( int i= ((items2 - (items2-interval))-1); i< (items2); i++){
            topicTwo[i] = topicTwo[i + 1];
            items2--;
          }
        }
          else{
            for( int i= ((items2 - (items2-1))); i< (items2); i++){
            topicTwo[i] = topicTwo[i + 1];
            items2--;
          }
          items2--;}
          interval = 0;
    }}

    if(((interval - items3) > 0) && (items3 > 1)){ 
    interval = interval - items3;
    }
    else{
      if((items3 > 1) && (interval != 0)){
        if((items3 - interval != 0)){
          for( int i= ((items3 - (items3-interval))-1); i< (items3); i++){
            topicThree[i] = topicThree[i + 1];
            items3--;
          }
        }
          else{
            for( int i= ((items3 - (items3-1))); i< (items3); i++){
            topicThree[i] = topicThree[i + 1];
            items3--;
          }
          items3--;}
          interval = 0;
    }}

    if(((interval - items4) > 0) && (items4 > 1)){ 
    interval = interval - items4;
    }
    else{
      if((items4 > 1) && (interval != 0)){
        if((items4 - interval != 0)){
          for( int i= ((items4 - (items4-interval))-1); i< (items4); i++){
            topicFour[i] = topicFour[i + 1];
            items4--;
          }
        }
          else{
            for( int i= ((items4 - (items4-1))); i< (items4); i++){
            topicFour[i] = topicFour[i + 1];
            items4--;
          }
          items4--;}
          interval = 0;
    }}
    
  if((items1 == 1) && (items2 == 1) && (items3 == 1) && (items4 == 1)){
  interval = 0;
  }
  }}

  printf("You will live in a %s.\n", topicOne[0]);
  printf("Your %s will be %s.\n", two, topicTwo[0]);
  printf("Your %s will be %s.\n", three, topicThree[0]);
  printf("Your %s will be %s.\n", four, topicFour[0]);
}

//main function
int main(void) {
srand(time(NULL));   
// initialize 
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

//Mash
printf("Time to MASH!\n");

mash(two, three, four, topicOne, topicTwo, topicThree, topicFour);
return 0;

}
