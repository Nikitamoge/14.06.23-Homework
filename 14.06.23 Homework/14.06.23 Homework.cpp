#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Task 1
    int count_task1 = 0;
    for (int i = 100; i <= 999; i++) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if (a == b || a == c || b == c) {
            count_task1++;
        }
    }
    cout << count_task1 << "\n";


    //Task 2
    int count_task2 = 0;
    for (int i = 100; i <= 999; i++) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if (a != b && a != c && b != c) {
            count_task2++;
        }
    }
    cout << count_task2 << "\n";


    //Task 3
    string number_task3;
    cout << "type an interer: "; 
    cin >> number_task3;

    int num_to_find = number_task3.find_first_of("3,6");
    while (num_to_find != -1) {
        number_task3.erase(num_to_find, 1);
        num_to_find = number_task3.find_first_of("3,6", num_to_find);
    }

    cout << number_task3 << "\n";


    //Task 4
    int A;
    cout << "Type a number: ";
    cin >> A;

    for (int B = 1; B * B * B <= A; B++) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << "\n";
        }
    }


    //Task 5
    int A_task5;
    cout << "Type a number: ";
    cin >> A_task5;

    int summa = 0;
    while (A_task5 > 0) {
        summa += A_task5 % 10;
        A_task5 /= 10;
    }

    if (summa * summa * summa == A * A) {
        cout << "equal to A*A" << "\n";
    }
    else {
        cout << "Not equal to A*A" << "\n";
    }


    //Task 6
    int A_task6;
    cout << "Type a number: ";
    cin >> A_task6;

    for (int i = 1; i <= A_task6; i++) {
        if (A_task6 % i == 0) {
            cout << i << "\n";
        }
    }


    //Task 7
    int A_task7, B_task7;
    cout << "Type two numbers: ";
    cin >> A_task7 >> B_task7;

    for (int i = 1; i <= min(A_task7, B_task7); i++) {
        if (A_task7 % i == 0 && B_task7 % i == 0) {
            cout << i << "\n";
        }
        else
        {
            break;
        }
    }

    return 0;
}

