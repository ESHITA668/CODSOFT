#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Your name is " << name << endl;
    int a, b, c, d, e, p;
    cout << "Enter the five subjects marks"<<endl;
    cin >> a >> b >> c >> d >> e;
    p = ((a + b + c + d + e) /5);
    //cout<<p<<endl;
    if (p >= 90)
    {
        cout << "Your Grade is A+";
  }
    else if (p >= 80 && p<90)
    {
        cout << "Your Grade is A";
    }
    else if (p >= 70 && p<80)
    {
        cout << "Your Grade is B+";
    }
    else if (p >= 60 && p<70)
    {
        cout << "Your Grade is B";
    }
    else if (p >= 50 && p <60)
    {
        cout << "Your Grade is C";
    }
    else if (p >= 40 && p<50)
    {
        cout << "Your Grade is D";
    }
    else if (p >= 30 && p<40)
    {
 cout << "Your Grade is E";
    }
    else if (p < 30)
    {
        cout << "Your Grade is F";
    }
    else
    {
        cout << "Enter Valid Marks";
    }
    return 0;
}