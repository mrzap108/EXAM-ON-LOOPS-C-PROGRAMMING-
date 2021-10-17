#include <stdio.h>
#include <stdlib.h>

void main()
{
    //number1();
    //number2();
    number3();

}

void number1()
{
    int num;
    int loopVar;
    int sum = 0;
    int firstOnList = 1;            //first integer detected

    printf("Enter a number: ");
    scanf("%d", &num);
    loopVar = 0;
    do
    {
        if((loopVar%3==0)||(loopVar%5==0))
        {
            if(firstOnList == 0)
            {
                printf("->");
            }
            printf(" %d ", loopVar);
            sum+=loopVar;
            firstOnList = 0;
        }
        loopVar++;
    }while(loopVar<=num);
    printf("\n\nThe sum is %d", sum);

    getchar();
}

void number2()
{
    char input;
    int total = 0;
    int countA = 0;
    int countC = 0;
    int others = 0;

    printf("Enter a character: ");
    for(;;)
    {
        input = getchar();
        if(input == '.')
        {
            //goto stop;
            break;
        }
        if(input == 'a')
        {
            countA++;
        }
        else if(input == 'c')
        {
            countC++;
        }
        else
        {
            others++;
        }
    }

    stop:
        printf("Number of a's: %d\n", countA);
        printf("Number of c's: %d\n", countC);
        printf("Number of otherss: %d", others);

}

void number3()
{
    int numTimes;
    int theInteger;
    int sumOdd = 0;
    int sumEven=0;
    int loopVar;

    printf("Enter number of times to input an integer: ");
    scanf("%d", &numTimes);
    loopVar = 0;
    do{
        printf("Enter integer %d: ", loopVar+1);
        scanf("%d", &theInteger);
        if(theInteger%2 == 0)
        {
            sumEven = sumEven + theInteger;
            //sumEven = theInteger;
        }
        else
        {
            sumOdd = sumOdd + theInteger;
        }
        loopVar++;

    }while(loopVar < numTimes);
    printf("\n\n");
    printf("The sum of all even integers is %d.\n", sumEven);
    printf("The sum of all odd integers is %d.\n", sumOdd);

    if(sumEven > sumOdd)
    {
        printf("\n\nThe highest of the two sums is the EVEN sum with %d compared to the ODD sum with %d.", sumEven, sumOdd);
    }
    else if(sumEven < sumOdd)
    {
        printf("\n\nThe highest of the two sums is the ODD sum with %d compared to the EVEN sum with %d.", sumOdd, sumEven);
    }
    else
    {
        printf("\n\n Both sums are equal");
    }
}
