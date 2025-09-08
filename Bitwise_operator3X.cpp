#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OfBitMultipe(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1); 
    iMask2 = iMask2 << (iPos2 - 2); 

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;  
 
    iResult = iNo & (iMask1 & iMask2);

    return iResult;    
}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation1 = 0, iLocation2 = 0;
   
    cout<<"Enter number :\n";
    cin>>iValue;

    cout<<"Enter first position :\n";
    cin>>iLocation1;

    cout<<"Enter Second positon :\n";
    cin>>iLocation2;

    iRet = OfBitMultipe(iValue, iLocation1, iLocation2);

    cout<<"Updated number is :"<<iRet<<"\n";
    
    return 0;

}
