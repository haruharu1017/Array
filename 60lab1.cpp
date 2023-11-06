#include <iostream>
#include<array> 
using namespace std;

int get_max(int arr[], int s)
{
    int v = arr[0];
    for(int i = 0; i < s; i++)
    {
        if (arr[i] > v)
        {
            v = arr[i];
        }
    }
    return v;
}

void swap_largest(int arr[], int s)
{
    int tar = get_max(arr, s);
    int last = arr[s-1];
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == tar)
        {
            arr[i] = last;
            arr[s-1] = tar;
        }
    }
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " "; 
    }
}

void swap_second_largest(int arr[], int s)
{
    int tar = get_max(arr, s-1);
    int last = arr[s-2];

    for (int i = 0; i < s-1; i++)
    {
        if (arr[i] == tar)
        {
            arr[i] = last;
            arr[s-2] = tar;
        }
    }
    cout << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " "; 
    }
}

void swap(int arr[], int s)
{
    for (int x = 0; x < s; x++)
    {
        int tar = get_max(arr, s-x);
        int last = arr[s-1-x];

        for (int i = 0; i < s-1; i++)
    {
        if (arr[i] == tar)
        {
            arr[i] = last;
            arr[s-1-x] = tar;
        }
    }
    }

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " "; 
    }
}

int main()
{
    int arr[5] = {23, 12, 4, 53, 21};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout << "The maximum is " << get_max(arr, s) << endl;
    // swap_largest(arr, s);
    // swap_second_largest(arr, s);
    swap(arr, s);
    return 0;
}