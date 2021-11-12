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
    
    //Algorithim {3,2,1}
               // 0 1 2
    for (int i = 1 ; i < input ; i++)
    {
        int current=values[i];// |i=2
        int j=i-1;//1-1--->>j=0 |j=0
        while (values[j]>current && j>=0)//true
        {
            values[j+1]=values[j];// j=0+1 index:1      index.. 3
            j--; // j=0

        }
        values[j+1]=current; // j=1 
    }
    
    
for (int i = 0; i < input; i++)
    {
        cout  << values[i];
    }
    return 0;
}
