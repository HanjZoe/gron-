/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{
    setlocale(0, "");
    string a;
    
        cout << "Введите слово, которое хотите зашифровать: ";
        cin >> a;
    
   string m;
    
        cout << "Введите ключ: ";
        cin >> m;
        string b;
        
            for (int i = 0; i < a.size(); i++)
            {
                for (int i = 0; i < a.size(); i++)
                {
                    b.push_back(char((a[i]) + (m[i] - 48)));
                }
                cout << endl << "Зашифрованое слово: " << b << endl;
                exit(0);
            }
        
    
    return 0;
}
