# include <iostream>

using namespace std;

int main(){

    string ast;
    float aux_ast;
    float aux_esp;
    float cant_ast;
    float cant_esp;
    string esp;
    float n;
    cout << "Ingrese un numero impar:" << endl;
    cin >> n;
    cant_ast = 0;
    ast = "*";
    cant_esp = n-3;
    while (cant_ast<=n-1) {
        aux_esp = 0;
        esp = "";
        while (aux_esp<=cant_esp) {
            aux_esp = aux_esp+1;
            esp = esp+".";
        }
        cout << ast+esp+ast << endl;
        cant_ast = cant_ast+2;
        cant_esp = cant_esp-2;
        ast = ast+"*";
    }    
    cant_esp = 0;
    esp = ".";
    cant_ast = (n-3)/2;
    while (cant_esp<(n-2)/2) {
        aux_ast = 0;
        ast = "";
        while (aux_ast<=cant_ast) {
            aux_ast = aux_ast+1;
            ast = ast+"*";
        }
        cout << ast+esp+ast << endl;
        cant_esp = cant_esp+1;
        cant_ast = cant_ast-1;
        esp = esp+"..";
    }
    return 0;
}
