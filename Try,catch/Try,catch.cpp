#include <iostream>
using namespace std;

int Div(int a, int b)
{
    if (b == 0)
    {
        throw exception("Divided by zero!");
    }
    return a / b;
}


int main()
{
    //try
    //{
    //    cout << 1 << endl;
    //    throw " test exp";
    //}
    //catch (int exp)
    //{
    //    cout << "Exception" <<exp<< endl;
    //}

    //catch (const char * exp)
    //{
    //    cout << "Exception" <<exp<< endl;
    //}

    //catch (...)
    //{
    //    cout << "All exceptions" << endl;
    //}

    //cout << 2 << endl;

    try 
    {
        int c = Div(1, 2);
        cout << c << endl;
    }
    catch (exception exp)
    {
        cout << "Exception in fun Div:" << exp.what() << endl;
    }
    return 0;
}

