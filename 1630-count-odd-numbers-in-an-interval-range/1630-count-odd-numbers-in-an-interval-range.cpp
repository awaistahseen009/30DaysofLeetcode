#include <iostream>
#include <cmath>
class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        try{
            if(low>=0 && high<=pow(10,9)){
            for(int i=low;i<=high;i++){
                if(i%2!=0)
                    count++;
            }
        }
        else
            throw -5;
        }
        catch(int x){
                if(x==-5)
                    cout<<"Low and High constraints are violated";
        }
        return count;
    }
};