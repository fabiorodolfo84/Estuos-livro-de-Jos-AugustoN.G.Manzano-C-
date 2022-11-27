// O programa seguinte solicita dois valores inteiros desconhecidos e apresenta em seguida o resultado da soma dos valores fornecidos.

#include <iostream>
using namespace std;

int main()
{
              int A, B, R;
              cout << "Informe um valor para a variavel <A>: ";
              cin >> A;
              cout << "Informe um valor para a variavel <B>: ";
              cin >> B;

              R = A + B;
              cout << "Resultado = " << R << endl;
              return 0;
}
