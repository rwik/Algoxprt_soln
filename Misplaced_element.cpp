#include<iostream>
#include<algorithm>
using namespace std;

void misplaced(int a[],int n)
{
    int cpy[n];
    std::copy(a,a+n,cpy);
    std::sort(cpy,cpy+n);

    for(int i =0;i<n;i++)
    {
        if(a[i]!=cpy[i])
           cout<<a[i]<<endl;
    }

}
int main()
{
    int a[]={1,2,6,2,4,5};
    int size = sizeof(a) / sizeof(a[0]);
    misplaced(a,size);
    return 0;
}