#include<iostream>
#include<unordered_set>
#include<iterator>
int main()
 {
   //unordered_set search,remove,insert are all constant 
    //implemented as HASH TABLE
   std::unordered_set<int> first{1,2,3,4};
   for (auto x: first)
   std::cout << x << std::endl;
}