#include<iostream>
using namespace std;

template <class T>

T AdditionS(T No1, T No2) //Generic function
{
    T iAns = 0;
    iAns = No1 + No2;
    return iAns; 
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    cout<<"Enter frist number :\n";
    cin>>iValue1;

    cout<<"Enter second number :\n";
    cin>>iValue2;

    iRet = AdditionS(iValue1,iValue2);

    cout<<"Addition is :"<<iRet<<"\n"; 

    return 0;
}