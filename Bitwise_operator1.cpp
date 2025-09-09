#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 67108864; 
    UINT iResult = 0;

    iResult = iNo & iMask; //logic

    return (iResult == iMask); 
    
}  

int main()
{
    UINT iValue = 0, iRet = 0;
    bool bRet = false;

    cout<<"Enter number :\n";
    cin>>iValue;

    bRet = CheckBit(iValue);//function call

    if(true == bRet)
    {
        cout<<"27th bit is ON\n";
    }
    else
    {
        cout<<"27th bit is OFF\n";
    }
    
    return 0;

}
