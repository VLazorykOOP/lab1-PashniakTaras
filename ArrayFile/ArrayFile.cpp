 // ArrayFile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

int main()
{   
    /*Завдання 1
    
    double A[MAX];
    int nA, nZero=0, i;
    do {
        cout << "Input array size N< "<< MAX << endl;
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
    return;
    */ 

    /*Завдання 2
        Заданий одномірний масив цілих чисел А розміру N. 
        Знайти номер останнього максимального значення серед від’ємних елементів,
        розташованих правіше елемента, рівного Т. 

        Створюєш вказівник
        Виділяєш потрібну к-сть пам'яті за допомогою цього вказівника
        Тепер обраний вказівник вказує на початок масиву з виділеною пам'яттю.

        Вказівник - посередник між пам'яттю та програмою. Використовується щоб займати менше пам'яті.
        
    double *A;
    int N, i, T, iT=0, max=0, res=0, *pA=A;
    cout << "Input array size: " << endl;
    cin >> N;
    A = new double[N];
    for (i = 0; i < N; i++){
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
    for (i=0; i < N; i++) 
    {
        if ((i > iT) && (A[i] < 0)) {
            if (A[i] > max) {
                max = A[i];  
                //res = i;
                *pA = A[i];
            }
        }
    }
    //cout << "Index RESULT: " << res;
    cout << "Index RESULT: " << *pA;
    delete[] A;
    return 0;
    */
    
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

    /* Завдання 3 
    Задано масив дійсних чисел An, n <= 200
    Розробити програму, яка будує масив Bn за правилом: 
    bi є середнім арифметичним значенням чисел a1 a2,..., an, 
    крім ai. i = 1,2,..., n; */
    //  Кожен ел-т є сер арифм значенням з ел-тів масиву А, окрім поточного і. 
    
    double A[MAX2], B[MAX2];
    int nA, nB, i, j, sum;
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

    for (i = 0; i < nA; i++) {
        cout << B[i] << "\t";
    }
    cout << endl;

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
