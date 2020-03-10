#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 


//set topics
char setTopic(char *topicList[], int *s) {
  int num = (rand() % (10)); 
  char *topic = topicList[num];
  for( int i=num-1; i<*s-1; i++){
    topicList[i] = topicList[i + 1];
  }
  s--;  
  return *topic;
}

//get user input for choices 
void getChoices(char topicL[], char topicName) {
  int i = 0;
  char *choice = (char *) malloc(sizeof(char) * 3);
  printf("Enter a %c\n that you would hate.", topicName);
  scanf("%2c", choice);
  topicL[0]= *choice;
  i++;
  printf("Enter a %c\n that you would hate.", topicName);
  scanf("%2c", choice);
  topicL[1]= *choice;
  i++;
  printf("Enter a %c\n that you would hate.", topicName);
  scanf("%2c", choice);
  topicL[2]= *choice;
  i++;
  printf("Enter a %c\n that you would hate.", topicName);
  scanf("%2c", choice);
  topicL[3]= *choice;
}

//MASH
void mash(char two, char three, char four, char *topicOne[],char *topicTwo[],char *topicThree[],char *topicFour[]){
//var interval = spiral();
//var intervalMax = interval;
int interval = 2;
int intervalMax = 4;
int items1 = 4;
int items2 = 4;
int items3 = 4;
int items4 = 4;
  /*
  console.log(topic1);
  console.log(topic2);
  console.log(topic3);
  console.log(topic4);
  */

while((items1 != 1) || (items2 != 1) || (items3 != 1) || (items4 != 1)){
  /*
  interval = intervalMax;
  items1 = topic1.length;
  items2 = topic2.length;
  items3 = topic3.length;
  items4 = topic4.length;
*/

  while(interval > 0){
    if(((interval - items1) > 0) && (items1 > 1)){ 
    interval = interval - items1;
    }
  
    else{
      if((items1 > 1) && (interval != 0)){
        if((items1 - interval != 0)){
        for (int c = items1 - (items1 - interval) - 1; c < items1 - 1; c++){
         topicOne[c] = topicOne[c+1];
        }
        //removeItem(topic1, ((topic1.length - (items1 - interval))- 1));
      } else {
        for (int c = items1- 1; c < items1 - 1; c++){
        topicOne[c] = topicOne[c+1];
        items1--;
        }
      //removeItem(topic1, (topic1.length - 1));
      }
      interval = 0;
    }
    }
  
  if(((interval - items2) > 0) && (items2 > 1)){ 
      interval = interval - items2;
  }
      else{
        if((items2 > 2) && (interval != 0)){
          if((items2 - interval != 0)){
          for (int c = items2 - (items2 - interval) - 1; c < items2 - 1; c++){
          topicTwo[c] = topicTwo[c+1];
          }
        } else {
          for (int c = items2- 1; c < items2 - 1; c++){
          topicTwo[c] = topicTwo[c+1];
          items2--;
        interval = 0;
        }
        }
      
    }
  if(((interval - items3) > 0) && (items3 > 1)){ 
      interval = interval - items3;
  }
  else{
    if((items3 > 2) && (interval != 0)){
      if((items3 - interval != 0)){
        for (int c = items3 - (items3 - interval) - 1; c < items3 - 1; c++){
          topicThree[c] = topicThree[c+1];
          }
        } else {
          for (int c = items3- 1; c < items3 - 1; c++){
          topicThree[c] = topicThree[c+1];
          items3--;
        interval = 0;
  }}}}
      
  if(((interval - items4) > 0) && (items4 > 1)){ 
      interval = interval - items4;
  }
  else{
    if((items4 > 2) && (interval != 0)){
      if((items4 - interval != 0)){
        for (int c = items4 - (items4 - interval) - 1; c < items4 - 1; c++){
          topicFour[c] = topicFour[c+1];
          }
        } else {
          for (int c = items4- 1; c < items4 - 1; c++){
          topicFour[c] = topicFour[c+1];
          items4--;
        interval = 0;
  }}}}

  if((items1 == 1) && (items2 == 1) && (items3 == 1) && (items4 == 1)){
  interval = 0;
  }
  }

  }

  printf("You will live in a %s\n. ", topicOne[0]);
  printf("Your %c\n will be %s\n", two, topicTwo[0]);
  printf("Your %c\n will be %s\n", three, topicThree[0]);
  printf("Your %c\n will be %s\n", four, topicFour[0]);
}}
//main function
int main(void) {
// initialize 
char *topicList [10] = {"car","number of kids", "future location", "job", "spouse's name", "number of friends", "pet", "amount of money", "honeymoon destination"};
char topicOne [5] = {"mansion","apartment","shack","house"};
int size = 10;
//arrays that will hold choices
char topicTwo[5];
char topicThree[5];
char topicFour[5];

//holds names of topics
char two= setTopic(topicList, &size);
char three= setTopic(topicList, &size);
char four = setTopic(topicList, &size);

//get user input 
getChoices(topicTwo,two);
getChoices(topicThree,three);
getChoices(topicFour, four);

//Mash
mash(two, three, four, topicOne, topicTwo, topicThree, topicFour);

}











/*
// function spiral sets the interval; written by Gia
function spiral(){
penColor("white");
  var side=5;
var x= randomNumber(4, 51);
var number= x/2;
turnLeft(180);
for (var y=0; y<= x; y++) {
  moveForward(side);
  turnLeft(90);
  side=side +3;
}
console.log(Math.round(number));
return(Math.round(number));
}
getChoices(topicList, topicTwo);
getChoices(topicList, topicThree);
getChoices(topicList, topicFour);
Mash(topicOne,topicTwo,topicThree,topicFour);
});
*/
