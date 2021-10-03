#include <iostream>
using namespace std;
int getMaxValue(int arr[], int start, int last)
{
    int max = start;
    for (int i = start + 1; i <= last; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    return max;
}
void swap(int arr[], int val1, int val2)
{
    int temp = arr[val1];
    arr[val1] = arr[val2];
    arr[val2] = temp;
}
int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10};
    int size = 10;

    for (int i = 0; i < 10; i++)
    {
        int lastIndex = size - i - 1;
        int maxValueIndex = getMaxValue(arr, 0, lastIndex);
        swap(arr, maxValueIndex, lastIndex);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
logic of selection sort is :
                             just select the biggest value in the array and 
         put it at the right index.
         ex- array [5,4,3,1,2];
         here biggest element is 5 so take it and put at the last index;

         logic is pretty simple , we are just finding the largest value in the array
         and just pasting or swapping that elemnt with the last index every time,

         Time complexity : O (n^2)
         Space complexit : O (1)
         Stability : N o

*/
