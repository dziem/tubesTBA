#include <iostream>
#include <string>

using namespace std;

int main()
{
    string expr;
    bool err = false;
    bool num = false;
    getline(cin, expr);
    for(int i = 0; i < expr.length(); i++){
        if(expr[i] != ' '){
            if(err != true){
                if(num != true){
                    if(expr[i] == '('){
                        cout << "kurbuka\n";
                    }else if(expr[i] == ')'){
                        cout << "kurtutup\n";
                    }else if(expr[i] == 'x' || expr[i] == '+' || expr[i] == '-' || expr[i] == ':'){
                        if(expr[i+1] == ' '){
                            cout << "opr\n";
                        }else{
                            num = true;
                        }
                    }else{
                        if(expr[i] == '0' || expr[i] == '1' || expr[i] == '2' || expr[i] == '3' || expr[i] == '4'
                        || expr[i] == '5' || expr[i] == '6' || expr[i] == '7' || expr[i] == '8' || expr[i] == '9'){
                            if(i != (expr.length() - 1)){
                                if(expr[i+1] != ' '){
                                    num = true;
                                }else{
                                    cout << "num\n";
                                }
                            }else{
                                cout << "num\n";
                            }
                        }else{
                            err = true;
                            cout << "error\n";
                        }
                    }
                }else{//ini buat cek numnya
                    if(i != (expr.length() - 1)){
                        if(expr[i+1] == ' '){
                            num = false;
                            cout << "num\n";
                        }
                    }else{
                        num = false;
                        cout << "num\n";
                    }
                }
            }
        }
    }
    return 0;
}
