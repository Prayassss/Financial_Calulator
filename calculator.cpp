#include <iostream>
#include <cmath>
using namespace std;

float SimpleInterest(float principle, float rate, int time)
{
    return (principle * rate * time) / 100;
}

float CompoundInterest(float principle, float rate, int time)
{
    return (principle * (pow(1 + rate / 100, time)));
}

int main()
{
    int emi, time, choice ;
    double principle, rate, Investment,reg_inv, final,interest;

    cout << "INVESTMENT CALCULATOR\n";
    cout << "1. Simple Interest\n";
    cout << "2. Compund Interest\n";
    cout << "3. SIP Return\n";
    cout << "Enter choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter Principle Amount : ";
        cin >> principle;
        cout << "Enter Rate Of Interest : ";
        cin >> rate;
        cout << "Enter Time Period (in years) : ";
        cin >> time;
        cout << "Simple Interest : " << SimpleInterest(principle, rate, time);
        break;

    case 2:
        cout << "Enter Principle Amount : ";
        cin >> principle;
        cout << "Enter Rate Of Interest : ";
        cin >> rate;
        cout << "Enter Time Period (in years) : ";
        cin >> time;
        cout << "Compund Interest : " << CompoundInterest(principle, rate, time);
        break;

    case 3:
        cout << "Enter investment : ";
        cin >> Investment;
        cout << "Enter Rate of Return(P.A) : ";
        cin >> rate;
        cout << "Enter Number of EMI's : ";
        cin >> emi;
        reg_inv = Investment;
        for (int i = 0; i < emi; i++)
        {
            double interest = reg_inv * (rate / 1200);
            cout << "\nPeriod: " << i + 1 << " | Interest: " << interest << " | Total Money: " << reg_inv;
            final=0;
            final = reg_inv;
            final += interest;

            reg_inv += Investment ;
            reg_inv += interest;
        }
    
        cout <<"\nHence the final amount: " << final;
        break;

    default:
        cout << "INVALID CHOICE";
        break;
    }

    return 0;
}
