/*
231.Power Of Two
{
    Given an integer n, rerturn true if it is a power of teo .
    Otherwise ,return false.
    Constraints: int must be in range 
}

*/

#include<iostream>
#include<limits.h>

using namespace std;

bool isPowerOfTwo(int x)
{
    while (x > 1) {
        if (x % 2 == 1) {

            return false;
        
        }
        x /= 2;
    }
    return x == 1;
}

int main()
{
    int num;
    bool res;
    cout<<"Enter a number to check : ";
    cin>>num;
    res = isPowerOfTwo(num);
    cout<<res<<endl;
}