
//Find the point where maximum intervals overlap

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void findMaxGuest(vector<int> entry,vector<int> exit)
{
    sort(entry.begin(),entry.end());
    sort(exit.begin(),exit.end());

    int entry_counter = 1 , exit_counter =0;
    int guestIn = 1 , maxGuest = 1;
    int time = entry[0];

    while(entry_counter < int(entry.size()) && exit_counter < int(entry.size()))
    {
        if(entry[entry_counter] <= exit[exit_counter])
        {
            guestIn ++;
            if(guestIn > maxGuest)
            {
                maxGuest = guestIn;
                time = entry[entry_counter];
            }
            entry_counter++;

        }
        else
        {
            guestIn--;
            exit_counter++;

        }

    }

     cout << maxGuest << " "<<time ;
}

int main()
{
    vector<int> entry = {1,2,10,5,5};
    vector<int> exit = {4,5,12,9,12};

    findMaxGuest(entry,exit);


    return 0;
}