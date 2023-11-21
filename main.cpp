#include <iostream>
using namespace std;
// Декларація функції
bool CheckInput(double A, double B, double C);
bool HasRealRoots(double A, double B, double C);
void boolean24();
bool Input(int& number);
void CalculateResult(int number, int& sum, int& product);
void Output(int sum, int product);
void proc12();
void Integer7();
int main()
{

    cout << "Enter task number:" << endl;
    int menu;
    cin >> menu;
   
        switch (menu)
        {
        case 1:
            proc12();
            break;
        case 2:
            boolean24();
            break;
        case 3:
            Integer7();
            break;
        default:
            cout << "Only 1,2 and 3" << endl;
            break;
        }
   
    system("pause");
    return 0;
}
// Визначення процедури SortInc3
void SortInc3(double& A, double& B, double& C) {
    // Міняємо значення змінних так, щоб вони були впорядковані за зростанням
    if (A > B) {
        double temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        double temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        double temp = A;
        A = B;
        B = temp;
    }

}
void proc12() {
    // Вхідні дані для першого набору чисел
    double A1, B1, C1;

    cout << "Enter three numbers for the first set (A1, B1, C1): ";
    cin >> A1 >> B1 >> C1;

    // Виклик процедури для впорядкування за зростанням
    SortInc3(A1, B1, C1);

    // Виведення відсортованого першого набору
    cout << "Sorted first set: " << A1 << ", " << B1 << ", " << C1 <<endl;

    // Вхідні дані для другого набору чисел
    double A2, B2, C2;

    cout << "Enter three numbers for the second set (A2, B2, C2): ";
    cin >> A2 >> B2 >> C2;

    // Виклик процедури для впорядкування за зростанням
    SortInc3(A2, B2, C2);

    // Виведення відсортованого другого набору
    cout << "Sorted second set: " << A2 << ", " << B2 << ", " << C2 << endl;

}


// Визначення функції перевірки вхідних даних
bool CheckInput(double A, double B, double C) {
    return A != 0; // Перевірка, що A не дорівнює 0
}

// Визначення функції розрахунку результату
bool HasRealRoots(double A, double B, double C) {
    // Обчислення дискримінанту
    double D = B * B - 4 * A * C;

    // Перевірка, чи дискримінант не менший за 0 (має дійсні корені)
    return D >= 0;
}
void boolean24() {
    // Задані значення A, B, C
    double A, B, C;

    // Введення значень A, B, C
    cout << "Enter the value A: ";
    cin >> A;
    cout << "Enter the value B: ";
    cin >> B;
    cout << "Enter the value C: ";
    cin >> C;

    // Перевірка вхідних даних
    if (CheckInput(A, B, C)) {
        // Розрахунок результату
        bool result = HasRealRoots(A, B, C);

        // Виведення результату
        if (result) {
            cout << "The quadratic equation A * x^2 + B * x + C = 0 has real roots." << endl;
        }
        else {
            cout << "The quadratic equation A * x^2 + B * x + C = 0 has no real roots." << endl;
        }
    }
    else {
        cout << "The entered data is incorrect. Check that A is not equal to 0." << endl;
    }

}
// Функція введення вхідних значень з консолі з перевіркою на коректність
bool Input(int& number) {
    cout << "Enter a two-digit number: ";
   cin >> number;

   if (number<10 && number>99)
   {
       return false;

   }

    return true;
}

// Функція підрахунку результату
void CalculateResult(int number, int& sum, int& product) {
    // Розділення числа на цифри
    int digit1 = number / 10;
    int digit2 = number % 10;

    // Обчислення суми і твору цифр
    sum = digit1 + digit2;
    product = digit1 * digit2;
}

// Функція виведення результату в консоль
void Output(int sum, int product) {
    cout << "Sum of digits: " << sum <<endl;
   cout << "A product of numbers: " << product << endl;
}
void Integer7() {
    int number=0, sum=0, product=0;

    // Виклик функції введення
    if (Input(number)) {
        // Виклик функції підрахунку результату
        CalculateResult(number, sum, product);
        // Виклик функції виведення результату
        Output(sum, product);
    }

}
