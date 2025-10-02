
#include <ctime>
#include <cmath>
#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;

using std::string;
using std::to_string;

//1 задание
double fraction(double x) {
  return double(x) - int(x);
}

//3 задание
int charToNum(char x) {
  return (int(x) - 48);
}

//5 задание
bool is2Digits(int x) {
  return (x > 10 && x < 100);
}

//7 задание
bool isInRange(int a, int b, int num) {
  int temp;
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }

  return (num >= a && num <= b);

}
//9 задание
bool isEqual(int a, int b, int c) {
  return (a == b && b == c);
}

//1 задание 
int abs(int x) {
  if (x > 0) {
      return x;
  }
  return -x;
}

//3 задание
bool is35(int x) {
    if (x % 3 == 0 && x % 5 == 0) { return false; }
    else if (x % 3 == 0 || x % 5 == 0) { return true; }
    return false;
}

//5 задание
int max3(int x, int y, int z) {
    int max_num;
    if (x > y && x > z) {
        max_num = x;
    }
    else if (y > x && y > z) {
        max_num = y;
    }
    else { max_num = z; }

    return max_num;
}

//7 задание 
int sum2(int x, int y) {
  int sum = x + y;
  if (sum >= 10 && sum <= 20) {
      return 20;
  }
  return sum;
}

//9 задание 
string day(int x) {
    switch (x) {
    case 1: {
        return "Понедельник";
    }
    case 2: {
        return "Вторник";
    }
    case 3: {
        return "Среда";
    }
    case 4: {
        return "Четверг";
    }
    case 5: {
        return "Пятница";
    }
    case 6: {
        return "Суббота";
    }
    case 7: {
        return "Воскресенье";
    }
    default: {
        return "Это не день недели";
    }
    }
}

//1 задание 
string listNums(int x) {

    string str;
    for (int i = 0; i <= x; i++) {
        str += to_string(i) + " ";
    }

    return str;
}

//3 задание
string chet(int x) {

    string str;
    for (int i = 0; i <= x; i += 2) {
        str += to_string(i) + " ";
    }

    return str;
}

//5 задание
int numLen(long x) {

    int cnt = 0;
    while (x > 0) {
        x /= 10;
        cnt++;
    }

    return cnt;
}

//7 задание
void square(int x) {

    for (int i = 0; i < x; i++) {
        string str = "";
        for (int j = 0; j < x; j++) {
            str += "* ";
        }
        cout << str << endl;
    }
}

//9 задание
void rightTriangle(int x) {

    int cnt = 0;
    for (int i = 0; i < x; i++) {
        cnt++;
        string str = "";
        for (int i = 0; i < x-cnt; i++) {
            str += "  ";
        }
        for (int j = 0; j < cnt; j++) {
            str += "* ";
        }
        cout << str << endl;
    }
}

//1 задание 
int findFirst(int arr[], int x) {
  for (int i = 0; i < 10; i++) {
      if (arr[i] == x) { return i; }
  }

  return -1;
}

//3 задание 
void maxAbs(int arr[], int sizeArr) {

    int max_abs = abs(arr[0]);  
    int max_elem = arr[0];   

    for (int i = 1; i < sizeArr; i++) {
        int cur_abs = abs(arr[i]);

        if (cur_abs > max_abs) {
            max_abs = cur_abs;
            max_elem = arr[i];
        }
    }

    cout << max_elem << " - maxAbs" << endl;
}


float proverkaFloat(float x) {
    
    bool flag = 1;
    while (flag) {
        cin >> x;
        if (x < 0) {
            cout << "Попробуйте снова - ";
        }
        else { flag = 0; }
    }

    return x;
}

int proverkaInt(int x) {

    bool flag = 1;
    while (flag) {
        cin >> x;
        if (x < 0) {
            cout << "Попробуйте снова - ";
        }
        else { flag = 0; }
    }

    return x;
}

int main() {

    setlocale(LC_ALL, "Rus");
    srand(time(0));


    cout << "Нечетные варианты заданий" << endl;
    cout << "Первый блок заданий - 1, 2, 3, 4, 5" << endl;
    cout << "Второй блок заданий - 6, 7, 8, 9, 10" << endl;
    cout << "Третий блок заданий - 11, 12, 13, 14, 15" << endl;
    cout << "Четвертый блок заданий - 16, 17, 18, 19, 20" << endl;
    int flag = 1;
    while (flag) {
        int numTask;
        cout << "\nЧтобы выйти укажите -1" << endl;
        cout << "Введите номер задания - ";
        cin >> numTask;

        if (numTask == -1) { break; }

        switch (numTask) {
        case 1: {

            double num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 1, Задание 1: Получить дробную часть от числа с точкой" << endl;
            cout << "Введите число с точкой - ";

            num = proverkaFloat(num);
            cout << "Результат - " << fraction(num) << endl;

        }; break;
        case 2: {

            char num;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 1, Задание 3: Преобразовать один из символов 0 1 2 3 4 5 6 7 8 9 в число" << endl;
            cout << "(char) '3' -> (int) 3" << endl;
            cout << "Введите символ из следующего списка (0 1 2 3 4 5 6 7 8 9): ";
            cin >> num;
            cout << "Результат - " << charToNum(num) << endl;

        }; break;
        case 3: {

            int num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 1, Задание 5: Проверить является ли число двузначным" << endl;
            cout << "Введите неотрицательное число: ";

            num = proverkaInt(num);
            cout << "Результат - " << boolalpha << is2Digits(num) << endl;

        }; break;
        case 4: {

            int first_lim = 0, second_lim = 0, num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 1, Задание 7: Проверить входит ли указанное значение в диапазон" << endl;


            cout << "Введите первую неотрицательную часть границы: ";
            first_lim = proverkaInt(first_lim);
            cout << "Введите вторую неотрицательную часть границы: ";
            second_lim = proverkaInt(second_lim);
            cout << "Введите неотрицательное число для проверки вхождения в диапазон: ";
            num = proverkaInt(num);
            cout << "Результат - " << boolalpha << isInRange(first_lim, second_lim, num) << endl;

        }; break;
        case 5: {

            int first_num = 0, second_num = 0, third_num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 1, Задание 9: Проверить являются ли все три числа одинаковыми" << endl;


            cout << "Введите первое неотрицательное число: ";
            first_num = proverkaInt(first_num);
            cout << "Введите второе неотрицательное число: ";
            second_num = proverkaInt(second_num);
            cout << "Введите третье неотрицательное число: ";
            third_num = proverkaInt(third_num);
            cout << "Результат - " << boolalpha << isEqual(first_num, second_num, third_num) << endl;

        }; break;
        case 6: {

            int num;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 2, Задание 1: Вернуть модуль числа" << endl;


            cout << "Введите число: ";
            cin >> num;
            cout << "Результат - " << abs(num) << endl;

        }; break;
        case 7: {

            int num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 2, Задание 3: Проверить делится число на 3 или 5. Если число делится и на 3, и на 5, тогда вернуть false" << endl;


            cout << "Введите неотрицательное число: ";
            num = proverkaInt(num);
            cout << "Результат - " << boolalpha << is35(num) << endl;

        }; break;
        case 8: {

            int first_num = 0, second_num = 0, third_num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 2, Задание 5: Вернуть максимальное число из указанных трех" << endl;


            cout << "Введите первое неотрицательное число: ";
            first_num = proverkaInt(first_num);
            cout << "Введите второе неотрицательное число: ";
            second_num = proverkaInt(second_num);
            cout << "Введите третье неотрицательное число: ";
            third_num = proverkaInt(third_num);
            cout << "Результат - " << max3(first_num, second_num, third_num) << endl;

        }; break;
        case 9: {

            int first_num = 0, second_num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 2, Задание 7: Вернуть сумму чисел. Если сумма входит в диапазон от 10 до 19, вернуть 20." << endl;


            cout << "Введите первое неотрицательное число: ";
            first_num = proverkaInt(first_num);
            cout << "Введите второе неотрицательное число: ";
            second_num = proverkaInt(second_num);
            cout << "Результат - " << sum2(first_num, second_num) << endl;

        }; break;
        case 10: {

            int num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 2, Задание 9: Вернуть дни недели в соответсвии их номеру(Понедельник - 1, Пятница - 5)" << endl;


            cout << "Введите неотрицательное число: ";
            num = proverkaInt(num);
            cout << "Результат - " << day(num) << endl;

        }; break;
        case 11: {

            int num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 3, Задание 1: Вернуть строку от 0 до x" << endl;


            cout << "Введите неотрицательное число: ";
            num = proverkaInt(num);
            cout << "Результат - " << listNums(num) << endl;

        }; break;
        case 12: {

            int num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 3, Задание 3: Вернуть строку с четными числами от 0 до x" << endl;


            cout << "Введите неотрицательное число: ";
            num = proverkaInt(num);
            cout << "Результат - " << chet(num) << endl;

        }; break;
        case 13: {

            int num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 3, Задание 5: Вернуть длину числа" << endl;


            cout << "Введите неотрицательное число: ";
            num = proverkaInt(num);
            cout << "Результат - " << numLen(num) << endl;

        }; break;
        case 14: {

            int num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 3, Задание 7: Вывести квадрат из зведочек размерностью x" << endl;


            cout << "Введите неотрицательное число: ";
            num = proverkaInt(num);
            square(num);

        }; break;
        case 15: {

            int num = 0;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 3, Задание 9: Вывести треугольник размерностью x и выровнять по правой стороне" << endl;


            cout << "Введите неотрицательное число: ";
            num = proverkaInt(num);
            rightTriangle(num);

        }; break;
        case 16: {

            int num = 0;
            int array[16]{ 1,1,1,2,3,4,4,4,5,34,1,5,14,6,90 };
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 4, Задание 1: Вернуть индекс первого вхождения числа x в массиве" << endl;

            string str = "";
            for (int i = 0; i < 16; i++) {
                str += to_string(array[i]) + " ";
            }
            cout << "Массив - " << str << endl;
            cout << "Введите неотрицательное число: ";
            num = proverkaInt(num);
            cout << "Результат - " << findFirst(array, num) << endl;
            

        }; break;
        case 17: {

            int num = 0;
            int array[16]{ 1,1,1,-32,3,4,40,4,5,-34,-1,5,-14,-6,90 };
            cout << "-----------------------------------------------------------" << endl;
            cout << "Блок 4, Задание 3: Найти максимальное значение по модулю числа x в массиве" << endl;

            string str = "";
            for (int i = 0; i < 16; i++) {
                str += to_string(array[i]) + " ";
            }
            cout << "Массив - " << str << endl;
            maxAbs(array, 16);


        }; break;

        }


        
    }
    
}










