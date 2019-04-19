#include <algorithm>
#include <iostream>
#include <random>

using namespace std;

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int Partition(int data[], int length, int start, int end)
{
    if (data == nullptr || length <= 0 || start < 0 || end >= length)
    {
        cout << "error\n";
    }
    int small = start - 1;
    for (int i = start; i < end; i++)
    {
        if (data[i] < data[end])
        {
            small++;
            if (small != i)
            {
                Swap(&data[small], &data[i]);
            }
        }
    }
    small++;
    Swap(&data[small], &data[end]);
    return small;
}

void QuickSort(int data[], int length, int start, int end)
{
    if (start == end)
    {
        return;
    }
    int index = Partition(data, length, start, end);
    if (index > start)
    {
        QuickSort(data, length, start, index - 1);
    }
    if (index < end)
    {
        QuickSort(data, length, index + 1, end);
    }
}

int main()
{
    int data[] = {2, 4, 3, 1, 5, 7, 6};
    QuickSort(data, 7, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << data[i] << endl;
    }
    return 0;
}