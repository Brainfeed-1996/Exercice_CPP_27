/*
Écrire une fonction qui reçoit en arguments 2 nombres flottants et un caractère, et qui fournit un résultat correspondant à l’une des 4 opérations appliquées à ses deux premiers arguments, en fonction de la valeur du dernier, à savoir : addition pour le caractère +, soustraction pour -, multiplication pour * et division pour / (tout autre caractère que l’un des 4 cités sera interprété comme une addition). On ne tiendra pas compte des risques de division par zéro.
Écrire un petit programme (main) utilisant cette fonction pour effectuer les 4 opérations sur les 2 nombres fournis en donnée.
*/

#include <iostream>
using namespace std ;
float operation (float v1, float v2, char op)
{   float res ;
    switch (op)
    { case '+' : res = v1 + v2 ;
        break ;
    case '-' : res = v1 - v2 ;
        break ;
    case '*' : res = v1 * v2 ;
        break ;
    case '/' : res = v1 / v2 ;
        break ;
    default : res = v1 + v2 ;
    }
return res ;
}
int main()
{   float operation (float, float, char) ;
    float x, y ;
    cout << "donnez deux nombres réels : " ;
    cin >> x >> y ;
    cout << "leur somme est : " << operation (x, y, '+') << "\n" ;
    cout << "leur différence est : " << operation (x, y, '-') << "\n" ;
    cout << "leur produit est : " << operation (x, y, '*') << "\n" ;
    cout << "leur quotient est : " << operation (x, y, '/') << "\n" ;
}

/*Résultat :
donnez deux nombres réels : 10
20
leur somme est : 30
leur différence est : -10
leur produit est : 200
leur quotient est : 0.5


=== Code Execution Successful ===

Résultat pour la division par 0 :

donnez deux nombres réels : 50
0
leur somme est : 50
leur différence est : 50
leur produit est : 0
leur quotient est : inf
*/
