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
    int counter=1;
    while (counter < input)
    {
        for (int i = 0; i < input-counter; i++)
        {
            if (values[i] > values[i + 1])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i+1] = temp;
            }
        }
        counter++;
    }
for (int i = 0; i < input; i++)
    {
        cout  << values[i];
    }
    return 0;
}
