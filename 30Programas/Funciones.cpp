#include <iostream>
#include <vector>
using namespace std;

// 15 FUNCIONES EN C++

// 1.- FUNCION QUE RETORNA LA MULTIPLICACION DE DOS NUMEROS ENTEROS
int multiplicacion(int numero1, int numero2)
{
    int res = numero1 * numero2;
    return res;
}

// 2.- FUNCION QUE RETORNA UNA LISTA DE NUMEROS INGRESADA POR EL USUARIO
vector<int> getList()
{
    int size;
    cout << "Type size: ";
    cin >> size;
    vector<int> list(size);
    for (int i = 0; i < list.size(); i++)
    {
        cout << "[" << i << "]: ";
        cin >> list[i];
    }
    return list;
}

// 3.- FUNCION QUE RESIVA COMO ARGUMENTO UNA LISTA Y LA IMPRIMA
void printList(vector<int> list)
{
    cout << "IMPRIMIENDO VALORES" << endl;

    for (int i = 0; i < list.size(); i++)
    {
        cout << "[" << i << "]: " << list[i] << endl;
    }
}

// 4.- FUNCION QUE RESIVA UN ARREGLO DE ENTEROS Y SI EXISTE UN NUMERO 10
// EN CUALQUIER POSICION RETORNE UN TRUE
bool isThere10(vector<int> listNumber)
{
    bool result = false;
    for (int i = 0; i < listNumber.size(); i++)
    {
        if (listNumber[i] == 10)
        {
            result = true;
        }
    }
    return result;
}

// 5.- FUNCION QUE RESIVA UN ARRAY Y QUE RETORNE UN TRUE SI TIENE ALGO,
// PERO SI ESTA VACIO TIENE QUE RETORNAR UN FALSE
bool isEmpty(vector<int> numberList)
{
    return numberList.empty() ? false : true;
}

// 6.- FUNCION RECURSIVA QUE SE EJECUTE A SI MISMA 10 VECES
void recursivityFunction(int counter = 0)
{
    counter++;
    cout << counter << endl;
    if (counter < 10)
    {
        recursivityFunction(counter);
    }
}

// 7.- FUNCION EN DONDE EL USUARION DEBE INGRESAR UNA PALABRA Y SI LA LETRA Z SE ENCUENTRA O NO EN ESA PALABRA
// DEBERA RETORNAR UN BOLEANO

bool isThereZInTheWord()
{
    string word;
    bool status = false;
    cout << "Ingresa una palabra: ";
    cin >> word;
    int index = word.find('z');
    cout << index << endl;
    if (index != -1)
    {
        status = true;
    }
    return status;
}

// 8.- FUNCION QUE RESIVA UN ARRAY DE NUMEROS Y RETORNE UN ENTERO CON EL VALOR
// DEL NUMERO MAYOR QUE EXISTA EN EL ARREGLO
int getMaxNumber(vector<int> numberList)
{
    int max = 0;
    for (int i = 0; i < numberList.size(); i++)
    {
        if (numberList[i] > max)
        {
            max = numberList[i];
        }
    }
    return max;
}

// 9.- FUNCION QUE RESIVA UN ARREGLO DE NUMEROS Y RETORNE EL NUMERO MENOR
int getMinNumber(vector<int> listNumber)
{
    int min = listNumber[0];
    for (int i = 0; i < listNumber.size(); i++)
    {
        if (listNumber[i] < min)
        {
            min = listNumber[i];
        }
    }
    return min;
}

// 10.- FUNCTION QUE RESIVA UN ARREGLO DE NUMEROS LE INCREMENTE EN 2 A CADA POSICION
// Y RETORNE UN NUEVO ARREGLO
vector<int> incrementList(vector<int> listNumber)
{
    vector<int> newListNumber(listNumber.size());
    for (int i = 0; i < listNumber.size(); i++)
    {
        newListNumber[i] = listNumber[i] + 2;
    }
    return newListNumber;
}

// 11.- FUNCTION QUE RESIVA UN ARREGLO DE NUMEROS Y LE DECREMENTE EN 2 A CADA POSICION
// Y RETORNE UN NUEVO ARREGLO
vector<int> decrementList(vector<int> listNumber)
{
    vector<int> newListNumber(listNumber.size());
    int i = -1;
    while (i++, i < listNumber.size())
    {
        newListNumber[i] = listNumber[i] - 2;
    }
    return newListNumber;
}

// 12.- FUNCION QUE RESIVA UN AREGLO DE BOOLEAS Y RETORNE UN NUEVO ARRAY CON VALORES OPUESTOS
vector<bool> cambiarDatos(vector<bool> boolList)
{
    vector<bool> newList(boolList.size());
    for (int i = 0; i < newList.size(); i++)
    {
        if (boolList[i])
        {
            newList[i] = false;
        }
        else
        {
            newList[i] = true;
        }
    }
    return newList;
}

// 13.- FUNCIONE QUE ME COMPARE DOS STRING Y ME RETORNE UN BOLEANO SI COINCIDEN
bool areTheSame(string value1, string value2)
{
    return (value1 == value2);
}

// 14.- FUNCION QUE COMPARE DOS ARREGLOS Y SI LOS COINCIDEN EN IGUAL NUMERO DE VALORES REGRESE UN BOLEANO

bool compareArrays(vector<int> arrayOne, vector<int> arrayTwo)
{
    bool areTheSame = true;
    for (int i = 0; i < arrayOne.size(); i++)
    {
        if (arrayOne[i] != arrayTwo[i])
        {
            areTheSame = false;
        }
    }
    return areTheSame;
}

// 15.- FUNCION QUE RESIVA DOS ARAYS Y ME LOS JUNTE Y ME RETORNE UN SOLO
vector<int> convineArrays(vector<int> arrayOne, vector<int> arrayTwo)
{
    int size = arrayOne.size() + arrayTwo.size();
    vector<int> newListNumber(size);
    for (int i = 0; i < arrayOne.size(); i++)
    {
        newListNumber.push_back(arrayOne[i]);
    }
    for (int i = 0; i < arrayTwo.size(); i++)
    {
        newListNumber.push_back(arrayTwo[i]);
    }
    return newListNumber;
}
int main()
{
    // vector<int> list = getList();
    // vector <int> decrement = decrementList(list);
    // printList(decrement);
    // bool result = isEmpty(list);
    // recursivityFunction();
    vector<int> arrayOne = {1, 2, 3, 4, 5};
    vector<int> arrayTwo = {6, 7, 8, 9, 10};
    vector<int> convinedArray = convineArrays(arrayOne, arrayTwo);
    printList(convinedArray);
    return 0;
}
