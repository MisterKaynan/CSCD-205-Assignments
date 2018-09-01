#include <iostream>

using namespace std;

int main()
{
   float g;
    cout << "Welcome To the Jury Grading System. \n Please input your score." << endl;
    cin >> g;


    if (g >= 0 && g<= 40 )
        {
        cout << "Per Your Efforts, You have an E. \n Contact Your Department for resit details." <<endl;
}
else { if (g >= 41 && g<= 50)

    cout << "By the skin of your teeth, you had a D. \n Proceed to next requirement." <<endl;
    }
    { if (g >= 51 && g<= 60)

        cout << "Per our standards, you had a C. \n Proceed to next requirement and more room for improvement." <<endl;
    }
     {if (g >= 61 && g<= 70)

            cout << "Very well done, you had a B. \n Proceed to next requirement and excellent job done." <<endl;
    }
    {if (g >= 71 && g<= 80)

            cout << "You are quite close, you had a B+. \n Proceed to next requirement and continue to aim high." <<endl;
    }
     {if (g >= 81 && g<=100)

        cout << "Outstanding performance! You had an A. \n Proceed to next requirement and keep up the good work." <<endl;
    }

cout << " \n THANK YOU AND HAVE A NICE DAY" <<endl;


    return 0;
    }
