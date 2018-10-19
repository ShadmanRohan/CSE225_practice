#include <iostream>
#include "MinMax.cpp"
using namespace std;

int main()
{
    double *d = new double[5];
    for(int i = 0; i < 5; i++)
    {
        cin>>d[i];
    }

    MinMax<double> m;
    m.initializeMinMax(d, 5);
    double temp = m.getMax();

    cout<<"Maximum Double Element is "<<temp<<endl;
    temp = m.getMin();
    cout<<"Minimum Double Element is "<<temp<<endl;

    return 0;
}
