#include <iostream>

using namespace std;
void insertionSort(int a[],int size)
{
    int prev,i,key;
    for(i=1;i<size;i++)
    {
        key= a[i];
        prev = i-1;
        while (prev >= 0 && a[prev]>key) {
            a[prev+1]=a[prev];
            prev=prev-1;

        }
        a[prev+1]=key;
    }




}

void printarr(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[] = {12,-11,13,5,6};
    int n= sizeof (a) / sizeof (a[0]);
    printarr(a,n);
    insertionSort(a,n);
    printarr(a,n);

    return 0;
}
