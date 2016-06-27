#include <iostream>

using namespace std;

int main()
{
    /**
            //f_Number: Fibonacci Number
            //lf_Number: Last Fibonacci Number
            //This took about half an hour to resolve...

            int f_Number = 1;
            int lf_Number = 0;
            int x = 0;

        while(f_Number<20)
        {
            x = f_Number + lf_Number;
            lf_Number = f_Number;
            f_Number = x;

            cout << f_Number << endl;
        }

    **/
            int f_Number = 1;
            int lf_Number = 0;
            int x = 0;
            int Result = 0;
    while(f_Number<4000000)
        {
                    x   = f_Number + lf_Number;
            lf_Number   = f_Number;
             f_Number    = x;

            if(f_Number%2==0)
            {
                Result  += f_Number;
            }

        }

    cout << "F_Number value:" << f_Number << endl;
    cout << "The Result:" << Result << endl;
}

