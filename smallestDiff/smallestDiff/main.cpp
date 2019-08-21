#include <iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    vector<int> firstarr =   {4,5,1,7,1,3,5,8,5,3};
    vector<int> secondtarr = {9,5,4,7,2,1,4,6,7,7};
    sort(firstarr.begin(),firstarr.end());
    sort(secondtarr.begin(),secondtarr.end());
    vector<int> result;
    int smallest = INT_MAX;
    int current = INT_MAX;
    int p1 =0, p2 =0;
    while(p1<firstarr.size() && p2 < secondtarr.size())
    {
        int firstNum = firstarr[p1];
        int secondNum = secondtarr[p2];
        if(firstNum<secondNum)
        {
            current = secondNum -firstNum;
            p1++;

        }else if(firstNum>secondNum)
        {
            current =  firstNum-secondNum;
            p2++;

        }else {
           result = {firstNum,secondNum};
           break;
        }
        if(smallest > current)
        {
            smallest = current;
            result = {firstNum,secondNum};
        }

    }
    cout <<" "<< result[0] <<" "<<result[1]<< endl;
    return 0;
}
