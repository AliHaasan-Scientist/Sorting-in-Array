#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int input;
    cout << "Enter numbers for sorting:" << endl;
    cin >> input;
    int values[input];
    for (int i = 0; i < input; i++)
    {
        cin >> values[i];
    }
    //selection sort Algorithim
    for (int i = 0; i < input-1; i++)
    {
        for (int j = i+1; j < input ;j++)
        {
            if (values[j] < values[i])
            {
                int bucket = values[j];
                values[j] = values[i];
                values[i] = bucket;
            }
        }
    }
    for (int i = 0; i < input; i++)
    {
        cout  << values[i];
    }

}
