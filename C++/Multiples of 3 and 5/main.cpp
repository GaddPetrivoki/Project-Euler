#include <iostream>

using namespace std;

int main()
{
    int checkingMultThree = 0;
    int checkingMultFive = 0;
    int SumMult = 0;
    int i = 0;
  while (i<1000-1)
    {
        checkingMultFive  = checkingMultFive+1;
        checkingMultThree = checkingMultThree+1;
        i = i+1;
        cout << i << endl;
        if(checkingMultFive%5==0&&checkingMultFive%3==0)
        {
            cout << checkingMultFive << endl;
            SumMult = checkingMultFive + SumMult;
        }
        else if(checkingMultThree%3==0&&checkingMultThree%5==0)
        {
            SumMult = checkingMultThree + SumMult;
        }
         else {

         if(checkingMultFive%5==0)
              {
                  cout << "MultofFive:" << SumMult << endl;
                  SumMult = checkingMultFive + SumMult;
              }
          if(checkingMultThree%3==0)
              {
                  cout << "MultofThree:" << SumMult <<endl;
              SumMult = checkingMultThree + SumMult;
              }
         }
    }

    cout << SumMult << endl;
}
