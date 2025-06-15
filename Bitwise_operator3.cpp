#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OfBitMultipe(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << 3;  // bit 4
    iMask2 = iMask2 << 6;  // bit 7

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;
 
    iResult = iNo & (iMask1 & iMask2);

    return iResult;    
}

int main()
{
    UINT iValue = 0, iRet = 0;
   
    cout<<"Enter number :\n";
    cin>>iValue;

    iRet = OfBitMultipe(iValue);

    cout<<"Updated number is :"<<iRet<<"\n";
    
    return 0;
}