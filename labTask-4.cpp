#include <iostream>
using namespace std;

int bubbleSort(int arr[], int size)
{
int passes = 0;

for (int i = 0; i < size - 1; i++)
{
    bool swapped = false;
    passes++;

    for (int j = 0; j < size - 1 - i; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;

            swapped = true;
        }
    }

    if (swapped == false)
    {
        break;
    }
}

return passes;

}

void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
{
cout << arr[i] << " ";
}

cout << endl;

}

int main()
{
int arr1[] = {9, 7, 5, 3, 1};
int arr2[] = {1, 2, 3, 4, 5};

int size = 5;

int passes1 = bubbleSort(arr1, size);
cout << "Reverse order array: ";
printArray(arr1, size);
cout << "Passes: " << passes1 << endl;

int passes2 = bubbleSort(arr2, size);
cout << "Already sorted array: ";
printArray(arr2, size);
cout << "Passes: " << passes2 << endl;

return 0;

}
