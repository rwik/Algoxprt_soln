#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int> inpParam, int target)
{
    sort(inpParam.begin(),inpParam.end());
    int left = 0;
    int right = inpParam.size()-1;
    while(left<right)
    {
        int tempSum = inpParam[left]+inpParam[right];
        if (tempSum==target)
        {
            return {inpParam[left],inpParam[right]};
        }else if (tempSum < target)
        {
            ++left;
        }else {
            --right;
        }
    }

    return {};
}

int main()
{
    int ticker = 1;
    int target = 0;
    vector<int> input;

    while(ticker != 00)
    {
        cout << "Insert array elements (insert 00 to break) :" << endl;
        cin >>ticker;
        input.push_back(ticker);
    }
    cout<<"Enter target sum = ";
    cin>>target;
    input = twoSum(input,target);
    for (auto const& i : input) {
        cout<<i<<" ";
    }

    return 0;
}
