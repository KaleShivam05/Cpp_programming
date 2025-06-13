#include<iostream>
using namespace std;

template <class T>

T MaximumG(T Arr[], int iNo) //Generic function
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }

    return Max; 
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    
    cout<<"Enter number of elements :\n";
    cin>>iSize;

    int *ptr = new int[iSize]; //Dynamic memory allocation

    cout<<"Enter elements :\n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    iRet = MaximumG(ptr,iSize);

    cout<<"Maximum is :"<<iRet<<"\n"; 

    return 0;
}