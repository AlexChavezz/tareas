#include <iostream>
#include <vector>
using namespace std;


vector <int> burbleMethod(vector <int> v)
{
    int aux;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    return v;
}

void printVector(vector <int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector <int> v = { 5, 4, 3, 2, 1 };
    vector orderArray = burbleMethod(v);
    printVector(v);
    return 0;
}