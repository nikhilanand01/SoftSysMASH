#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 

//main function
int main(void) {
printf("Hello World\n");
char *topicList [] = {"car","number of kids", "future location", "job", "spouse's name", "number of friends", "pet", "amount of money", "honeymoon destination"};
char *topicOne [] = {"mansion","apartment","shack","house"};
char *topicTwo[];
char *topicThree[];
char *topicFour[];
}

//set topics
void setTopic(char topicList[], char topicNum) {
  int num = (rand() % (upper - lower + 1)); 
  char *topic = topicList[num];
  removeItem(topicList,topicList.indexOf(topic));
  topicNum= topic;
}
setTopic(topicList, topicTwo);
setTopic(topicList, topicThree);
setTopic(topicList, topicFour);


//get user input for choices 
void getChoices(char topicList[], char topic[][]) {
  int i = 0;
  char *choice = (char *) malloc(sizeof(char) * 3);
  printf("Enter a %c\n that you would hate.", topic[i]);
  scanf("%2c", choice);
  topic[i][0]= choice;
  i++;
  printf("Enter a %c\n that you would hate.", topic[i]);
  scanf("%2c", choice);
  topic[i][1]= choice;
  i++;
  printf("Enter a %c\n that you would hate.", topic[i]);
  scanf("%2c", choice);
  topic[i][2]= choice;
  i++;
  printf("Enter a %c\n that you would hate.", topic[i]);
  scanf("%2c", choice);
  topic[i][3]= choice;
  }

//MASH
void Mash(topic1,topic2,topic3,topic4){
var interval = spiral();
var intervalMax = interval;
var items1 = 3;
var items2 = 3;
var items3 = 3;
var items4 = 3;
  console.log(topic1);
  console.log(topic2);
  console.log(topic3);
  console.log(topic4);

while((items1 !== 1) || (items2 !== 2) || (items3 !== 2) || (items4 !== 2)){
  interval = intervalMax;
  items1 = topic1.length;
  items2 = topic2.length;
  items3 = topic3.length;
  items4 = topic4.length;


  while(interval > 0){
    if(((interval - items1) > 0) && (items1 > 1)){ 
    interval = interval - items1;
    }
  
    else{
      if((items1 > 1) && (interval !== 0)){
        if((items1 - interval !== 0)){
        removeItem(topic1, ((topic1.length - (items1 - interval))- 1));
      } else {
      removeItem(topic1, (topic1.length - 1));
        
      }
      interval = 0;
    }
    }
  
 if(((interval - items2) > 0) && (items2 > 2)){ 
    interval = interval - items2;
 }
  
    else{
      if((items2 > 2) && (interval !== 0)){
        if((items3 - interval !== 0)){
        removeItem(topic2, (topic2.length - (items2 - interval)));
      } else {
        removeItem(topic2, (topic2.length - 1));
      interval = 0;
      }
      }
    
  }
 if(((interval - items3) > 0) && (items3 > 2)){ 
    interval = interval - items3;
    
  }
    else{
      if((items3 > 2) && (interval !== 0)){
        if((items3 - interval !== 0)){
        removeItem(topic3, (topic3.length - (items3 - interval)));
        } else{
          removeItem(topic3, (topic3.length-1));
        }
      interval = 0;
        }
        }
    
 if(((interval - items4) > 0) && (items4 > 2)){ 
    interval = interval - items4;
    
  }
    else{
      if((items4 > 2) && (interval !== 0)){
        if((items4 - interval !== 0)){
        removeItem(topic4, (topic4.length - (items4 - interval)));
      } else{
        removeItem(topic4, (topic4.length - 1));
      }
      interval = 0;
      }
      
    }
if((items1 == 1) && (items2 == 2) && (items3 == 2) && (items4 == 2)){
 interval = 0;
}
}

}
  console.log("You will live in a " +topic1[0]+".");
  console.log("Your "+topic2[0]+" will be "+topic2[1]);
  console.log("Your "+topic3[0]+" will be "+topic3[1]);
  console.log("Your "+topic4[0]+" will be "+topic4[1]);
  setText("topic1", ("You will live in a " +topic1[0]+".") );
  setText("topic2", "Your "+topic2[0]+" will be "+topic2[1]);
  setText("topic3", "Your "+topic3[0]+" will be "+topic3[1]);
  setText("topic4", "Your "+topic4[0]+" will be "+topic4[1]);
}
//function setTopic selects the topics from the list to be used; written by Lenny





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

