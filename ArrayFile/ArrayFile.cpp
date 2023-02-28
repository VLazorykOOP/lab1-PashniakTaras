﻿ // ArrayFile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <ios>
#include <vector>

#include <time.h>
const int MAX = 100;
const int MAX2 = 200;
const int m = -100000;
using namespace std;

/* Завдання 1
   Задано одновимірний масив А розміру N. Знайти кількість нульових елементів. */
void task1( int N, int A[])
{
    double A[MAX];
    int nA, nZero = 0, i;
    do {
        cout << "Input array size N< " << MAX << endl;
        cin >> nA;
    } while (nA<0 || nA>MAX);
    for (i = 0; i < nA; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    for (i = 0; i < nA; i++)
        if (A[i] == 0) nZero++;
    cout << "Amount of zero-elemts: " << nZero << endl;
\
}

/* Завдання 2
   Заданий одномірний масив цілих чисел А розміру N.
   Знайти номер останнього максимального значення серед від’ємних елементів,
   розташованих правіше елемента, рівного Т. */
void task2(int N, int A[])
{
    double* A, * pA;
    int N, i, T, iT = 0, max = 0, res = 0;
    cout << "Input array size: " << endl;
    cin >> N;
    A = new double[N];
    pA = A;
    for (i = 0; i < N; i++) {
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }

    cout << "Input T: ";
    cin >> T;
    for (i = 0; i < N; i++)
    {
        if (A[i] == T) {
            iT = i;
        }
    }
    cout << "Index T: " << iT << endl;

    //max = A[iT+1];
    max = m;
    for (i = 0; i < N; i++)
    {
        if ((i > iT) && (A[i] < 0)) {
            if (A[i] >= max) {
                max = A[i];
                //res = i;
                *pA = A[i];
            }
        }
    }
    //cout << "Index RESULT: " << res;
    cout << "Index RESULT: " << *pA;
    delete[] A;
}

/* Завдання 3
   Задано масив дійсних чисел An, n <= 200
   Розробити програму, яка будує масив Bn за правилом:
   bi є середнім арифметичним значенням чисел a1 a2,..., an,
   крім ai. i = 1,2,..., n; */
void task3(int N, int A[])
{
    double A[MAX2], B[MAX2], sum;
    int nA, nB, i, j;
    do {
        cout << "Input array size N< " << MAX2 << endl;
        cin >> nA;
    } while (nA<0 || nA>MAX2);

    for (i = 0; i < nA; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    for (i = 0; i < nA; i++) {
        sum = 0;
        for (j = 0; j < nA; j++) {
            if (i != j) sum += A[j];
        }
        sum = sum / (nA - 1);
        B[i] = sum;
    }
    cout << endl;

    for (i = 0; i < nA; i++) {
        cout << B[i] << "\t";
    }
    cout << endl;
    
}

int realise_functions()
{
    int function_number = 0;
    cout << "Possible functions:\n   Function 1: Input/Output from console to file\n   Function 2: Input array from console + Input random numbers to array + Output array to binary file\n   Function 3: Input/Output array from file to file to console\n   Function 4: InputOutput array from file to vector to console\n";
    cout << "Enter function number you want to use: ";
    cin >> function_number;
    system("cls");
    return function_number;
}

int realise_tasks()
{
    printf("Main menu:\n   1. Task 1\n   2. Task 2\n   3. Task 3\n");
    int task = 0;
    do {
        cin >> task;
    } while (0 < task > 3);
    system("cls");
    return task;
}

int main()
{
    int task;
    printf("Main menu:\n   1. Task 1\n   2. Task 2\n   3. Task 3\n");
    do {
        cin >> task;
    } while (0 < task > 3);
       switch (task)
    {
    case 1:
        system("cls");
        task_1();
        break;
    case 2:
        system("cls");
        task_2();
        break;
    case 3:
        system("cls");
        task_3();
        break;
}
    

   

        
        
   
    
    /* Тест vector 

    vector<int> numbers{1,2,3,4,5};
    int n1 = numbers.front();
    int n2 = numbers.back();
    int x = numbers[3];
    cout << n1 << endl;
    cout << n2 << endl;
    cout << x << endl;
    for (int n : numbers) cout << n << "\t";
    cout << endl;
    return 0; 
    */

    
    //  Кожен ел-т є сер арифм значенням з ел-тів масиву А, окрім поточного і. 
    
     
   

}
   

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
