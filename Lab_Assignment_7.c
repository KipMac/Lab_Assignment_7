//Kipling McLaren
//COP 3502-4
//Lab Assignment #7
 //3/22/2023

#include <stdio.h>


int bubbleSort(int array[], int arrayNum)
{
    int i, j, temp;
    int swapNum = 0;
    int count=0;
    for(i = 0; i < arrayNum-1; ++i)
    {
        printf("Iteration# %d ",i+1);
        for(j=0; j<arrayNum-1-i; ++j)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swapNum++;
                count ++;

            }



        }
        printf("Number of swaps= %d\n",count);
        count =0;
    }

    return swapNum;
}




int main(void)
{

    int array[] ={97, 16, 45, 63, 13, 22, 7, 58, 72};
    int arrayNum = 9;
    int i, totalSwaps;


    totalSwaps = bubbleSort(array, arrayNum);

    if (totalSwaps == 0)
    {

        printf("This is a sorted Array\n");
        return 0;
    }
    printf("\n\nSorted Array: ");

    for (i = 0; i < arrayNum; i++)

        printf("%d ", array[i]);

     printf("\n \nNumber of swaps: %d\n", totalSwaps);
    return 0;
}




