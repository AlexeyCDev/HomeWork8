#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    double V, T, param, result;
    const double Pi = asin(1.0), g = 9.8;
    cout << " V = ";
    cin >> V;

    cout << endl << " T = ";
    cin >> T;

    if(1 < fabs(g*T/(2*V)))
        cout <<"Incorrect"<< endl;
    else
    {
        param = asin(g*T/(2*V));
        cout<<" Corner = "<<param*(90/Pi)<<endl;
    }

    return 0;
}

