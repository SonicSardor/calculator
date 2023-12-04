#include <iostream>
#include <math.h>

using namespace std;

void enter1(float *n){
    cout << "Enter the first number: ";
    cin >> *n;
}
void enter2(float *n){
    cout << "Enter the second number: ";
    cin >> *n;
}

float multiplay(float n1, float n2){
    float ans = n1 * n2;
    return ans;
}

float divide(float n1, float n2){
    float ans = n1 / n2;
    return ans;
}

float plus_(float n1, float n2){
    float ans = n1 + n2;
    return ans;
}

float minus_(float n1, float n2){
    float ans = n1 - n2;
    return ans;
}

float power(float n1, float n2){
    float ans = pow(n1, n2);
    return ans;
}

int main()
{
    cout << "*  multiplay " << endl;
    cout << "/  divide " << endl;
    cout << "+  plus" << endl;
    cout << "-  minus" << endl;
    cout << "^  power\n" << endl;
    float n1, n2, answer;
    char act;
    cout << "Choose a action: ";
    cin >> act;
    enter1(&n1);
    enter2(&n2);
    if (act == '*'){
        answer = multiplay(n1, n2);
    }
    else if (act == '/'){
         answer = divide(n1, n2);
    }
    else if (act == '+'){
         answer = plus_(n1, n2);
    }
    else if (act == '-'){
         answer = minus_(n1, n2);
    }
    else if (act == '^'){
         answer = power(n1, n2);
    }
    cout << "Answer = " << answer << endl;

    return 0;
}
