#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    if(iPos <= 0 || iPos > 32) // filter
    {
        cout<<"Invalid bit position\n";
        return false;
    }  

    iMask = iMask << (iPos - 1); //mask

    iResult = iNo & iMask; //logic

    return (iResult == iMask); 
    
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    cout<<"Enter number :\n";
    cin>>iValue;

    cout<<"Enter the position :\n";
    cin>>iLocation;

    bRet = CheckBit(iValue,iLocation); //function call

    if(true == bRet)
    {
        cout<<"bit is ON at location "<<iLocation<<"\n";
    }
    else
    {
        cout<<"bit is OFF at location "<<iLocation<<"\n";
    }
    
    return 0;

}
