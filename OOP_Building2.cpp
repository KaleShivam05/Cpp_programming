#include<iostream>
using namespace std;

class ArrayX
{
    private :      
        float *Arr;
        int iSize;

    public :
        ArrayX(int iLength = 5)
        {
            cout<<"Inside constructor \n";
            iSize = iLength;
            Arr = new float[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Distructor \n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements :\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of the array are :\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        float Maximum()
        {
            int iCnt = 0; 
            float fMax = 0;

            fMax = Arr[0];

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > fMax)
                {
                    fMax = Arr[iCnt];
                }
            }
            return fMax;
        }

};

int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();

    float iRet = aobj.Maximum();

    cout<<"Maximum element is :"<<iRet<<"\n";
    
    return 0;
}
