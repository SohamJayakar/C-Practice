# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int snakeWaterGun(char you, char comp) {
    //returns 1 if you win,0 if draw and -1 if you lose.

    if(you == comp) {
        return 0;
    }
    
    if(you == 's' && comp == 'w') {
        return 1;
    }
    else if(you == 'w' && comp == 's') {
        return -1;
    }
    if(you == 'w' && comp == 'g') {
        return 1;
    }
    else if(you == 'g' && comp == 'w') {
        return -1;
    }
    if(you == 'g' && comp == 's') {
        return 1;
    }
    else if(you == 's' && comp == 'g') {
        return -1;
    }
    
}

int main()
{
    char you, comp;
    
    srand(time(0));
    int number = rand()%100 + 1;

    if(number <= 33) {
        comp = 's';
    }
    else if(number >33 && number <=66) {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter 's' for snake, 'w' for water, 'g' for gun\n");
    scanf("%c", &you);
    printf("You chose %c and computer chose %c\n",you,comp);
    int result = snakeWaterGun(you,comp);
    if(result == 1){
    printf("You won!!!");
    }
    else if(result == 0) {
        printf("Its a Draw.");
    }
    else {
        printf("Computer won!!!");
    }
    return 0;
}