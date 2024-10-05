#include<stdio.h>
 
int main(){
     int player1,player2;
    // rock 0
    // scissor 1
    // paper 2
printf("the value of rock is 0 , the value of scissor is 1 and the value of paper is 2\n");
printf("player1\n");
scanf("%d",&player1);
printf("player2\n");
scanf("%d",&player2);


while(player1==player2){

    printf("play again");

   printf("the value of rock is 0 , the value of scissor is 1 and the value of paper is 2\n");
printf("player1\n");
scanf("%d",&player1);
printf("player2\n");
scanf("%d",&player2);

}

if(player1==1&&player2==0){
    printf("player2 won");
}
else if(player1==1&&player2==2)
{ 
    printf("player1 won");
}
else if(player1==0&&player2==1){
    printf("player1 won");
}
else if(player1==0&&player2==2){
    printf("player2 won");
}

else if(player1==2&&player2==1){
    printf("player2 won");
}
else if(player1==2&&player2==0){
    printf("player1 won");
   }
else
printf("error!!!");

//printf("something is wrong!!!!");
return 0;
}