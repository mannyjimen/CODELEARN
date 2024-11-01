#include <iostream>
#include <set>
#include <vector>
#include <iterator>

bool containsNearbyAlmostDuplicate(std::vector<int>& nums, int indexDiff, int valueDiff)
{
    std::set<int> last_k; //initializing set

    for (auto it = nums.begin(); it != nums.end(); ++it) //iterating through nums
    {
        auto lb = last_k.lower_bound(*it - valueDiff);//

        if ((lb != last_k.end()) && (*lb - *it <= valueDiff))
            return true;

        last_k.insert(*it);

        //implementation of fixed-size sliding window (deleting each number that moves out
        // of the window)
        if(it - nums.begin() >= indexDiff)
            last_k.erase(*(it - indexDiff));//erases the value that joined first (not beginning of set)
             
    }
}

int main()
{
    
}