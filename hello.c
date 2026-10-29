#incude<stdio.h>
int main()
{
    int secret =25;
    int guess;
    int attemps =0;

    printf("===== number guessing game =====\n");

    printf("guess a numberbetwwn 1 and 50: ");
    scanf("%d",&guess);

    while(guess !=secret)
    {
        attemps++;

        if(guess>secret)
        {
            printf("Too high! try Again.\n");
        }
        else
        {
        printf("Too low! Try Again.\n");
        }
        printf("\nGuess a number between 1 and 50: ");
        scanf("%d",&guess);
    }
    attemps++;

    printf("\nCongratulation! you guessed the correct number.\n");
    printf("Total attemps: %d\n", attemps);

    printf("===== GAME OVER =====");

    return 0;
}