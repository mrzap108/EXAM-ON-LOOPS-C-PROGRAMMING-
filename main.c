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
    int num;		// for the input
    int loopVar;
    int sum = 0;
    int firstOnList = 1;            //first integer detected

    printf("Enter a number: ");
    scanf("%d", &num);
    loopVar = 1;
    do				//loopVar = 7
    {          //true     or    //true
        if((loopVar%3==0)||(loopVar%5==0))	//modulo operator => gets the remainder in integer form
        {
            if(firstOnList == 0)
            {
                printf("->");
            }
            printf(" %d ", loopVar);
            sum = sum + loopVar;		// 14  = 8 + 6
			//sum+=loopVar;
            firstOnList = 0;		// it is not anymore the first integer on the list
        }
        loopVar++;		// 8
    }while(loopVar<=num);	// 8 <= 7
    printf("\n\nThe sum is %d", sum);

    getchar();
}

void number2()
{
    char input;
    int countA = 0;
    int countC = 0;
    int others = 0;

    printf("Enter a character: ");
    for(;;)			// infinite loop
    {
        input = getche();
        if(input == '.')
        {
            others++;
			break;		// terminate the loop
        }
        //else if(input == 'a') 
        else if((input == 'a') || (input == 'A'))
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

        printf("\nNumber of a's: %d\n", countA);
        printf("Number of c's: %d\n", countC);
        printf("Number of otherss: %d", others);

}

void number3()
{
    int iCount;			// to determine the number of inputs
    int iSumOdd = 0;		// sum for odd numbers
    int iSumEven=0;			//sum for even numbers
    int theInteger;		// the integers entered
    int loopVar;

    printf("Enter number of times to input an integer: ");
    scanf("%d", &iCount);
    loopVar = 0;
    do{
        printf("Enter integer %d: ", loopVar+1);
        scanf("%d", &theInteger);
        if(theInteger%2 == 0)
        {
            iSumEven = iSumEven + theInteger;
            //sumEven = theInteger;
        }
        else
        {
            iSumOdd = iSumOdd + theInteger;
        }
        loopVar++;

    }while(loopVar < iCount);
    printf("\n\n");
    printf("The sum of all even integers is %d.\n", iSumEven);
    printf("The sum of all odd integers is %d.\n", iSumOdd);

    if(iSumEven > iSumOdd)
    {
        printf("\n\nThe highest of the two sums is the EVEN sum with %d compared to the ODD sum with %d.", iSumEven, iSumOdd);
    }
    else if(iSumEven < iSumOdd)
    {
        printf("\n\nThe highest of the two sums is the ODD sum with %d compared to the EVEN sum with %d.", iSumOdd, iSumEven);
    }
    else
    {
        printf("\n\n Both sums are equal");
    }
}
