#include<stdio.h>
#include<stdlib.h>

int main() {

//1,2,3 : 1 == rock, 2 == paper, 3 == Scissors

//The move ther person running the code will make
int usermove;
//The move the computer will make
int computermove;
//infinite while loop to keep the game running
while(1){
//explaining the rules of the game
printf("\n Enter your move: \t 1 for Rock \t 2 for Paper \t 3 for Scissors \t 0 to quit : ");
scanf("%d",&usermove);
//randomizing the computers moves 1-3
computermove = rand() % 3; 
//if and else if statements for all possible outcomes
if (usermove == 0)
{
    printf("Scared?");
    exit(1);
}
else if (usermove == 1 && computermove == 2)
{
    printf("YOU LOST, computer threw paper");
}
else if (usermove == 1 && computermove == 3)
{
    printf("YOU WIN, computer threw scissors");
}
else if (usermove == 2 && computermove == 1)
{
    printf("YOU WIN, computer threw rock");
}

else if (usermove == 2 && computermove == 3)
{
    printf("YOU LOST, computer threw scissors");
}
else if (usermove == 3 && computermove == 1)
{
    printf("YOU LOST, computer threw rock");
}
else if (usermove == 3 && computermove == 2)
{
    printf("YOU WIN, computer threw paper");
}
else (computermove == usermove)
    printf("DRAW, you and computer threw %d",usermove);

}


}

