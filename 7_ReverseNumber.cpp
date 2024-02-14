/*
7. Reverse Integer 
{
    Given a signed 32-bit integer x, return x with its digit reversed.
    If reversing x causes the value to go outside the signed 32-bit 
    integer range [pow(-2 ,31), pow(2,31)-1] return 0;

}

*/

#include<iostream>
#include<limits.h>
using namespace std;

int reverseNumber(int x)
{
    int ans = 0;
    while (x != 0){
        if((ans > INT_MAX/10) || (ans <INT_MIN/10))
        {
            return 0;
        }
        int digit = x % 10;
        ans = (ans *10) + digit;
        x = x/10;
    }
    return ans;
}
int main(){
    int num, result;
    cout<<"Enter a number to reverse : ";
    cin>>num;
    cout<<"Reversed number is : "<<reverseNumber(num)<<endl;
}