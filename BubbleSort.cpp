#include "BubbleSort.h"

vector<int> BubbleSort::sort(vector<int> list)
{
    // Get the length of list
    int n = (int)list.size();

    int i,j;

    // The nested loop
    // When find the greatest number in the vector, then next time the n will -1
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                // if list[j] > list[j + 1] will call swap function
                swap(list[j],list[j + 1]);
            }
        }
    }

    // Create a new vector that store the sorted value in list;
    vector<int> res = list;


    return res;
}