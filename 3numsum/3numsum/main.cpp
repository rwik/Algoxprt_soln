#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int> inpParam, int target)
{
    sort(inpParam.begin(),inpParam.end());
    int left = 0;
    int right = inpParam.size()-1;
    vector<vector<int>> triplet;
    for (int i = 0; i <inpParam.size()-2;++i) {
        left = i+1;
        while(left<right)
        {
            int tempSum = inpParam[i]+inpParam[left]+inpParam[right];
            if (tempSum==target)
            {
              triplet.push_back({inpParam[left],inpParam[i],inpParam[right]});
              left++;
              right++;
            }else if (tempSum < target)
            {
                ++left;
            }else {
                --right;
            }
        }
    }


    return triplet;
}

int main()
{

    int target = 0;
    vector<int> input;
    vector<vector<int>> result;
    input = {12,3,1,2,-6,5,0,-8,-1};

    result = threeSum(input,target);
    for (int i = 0; i < result.size(); i++) {
           for (int j = 0; j < result[i].size(); j++)
               cout << result[i][j] << " ";
           cout << endl;
       }
//    for (auto const& i : input) {
//        cout<<i<<" ";
//    }

    return 0;
}
