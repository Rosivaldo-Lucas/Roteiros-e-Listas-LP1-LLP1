#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

int main(void){
    Invoice *in1 = new Invoice(1, "Caneta", 5, 2.50);
    Invoice *in2 = new Invoice(2, "Lapis", 2, 2.0);
    cout << "=========================================" << endl;
    cout << "INFORMACOES DO #1 PROTUDO" << endl;
    cout << "=========================================" << endl;
    cout << "Id produto: " << in1->getNumero() << endl;
    cout << "Descricao: " << in1->getDescricao() << endl;
    cout << "Quantidade: " << in1->getQtd() << endl;
    cout << "Preco: " << in1->getPreco() << endl;
    cout << "=========================================" << endl;
    cout << "FATURA DA COMPRA" << endl;
    cout << "=========================================" << endl;
    cout << "Fatura: " << in1->getInvoiceAmount() << endl;
    cout << endl;    
    cout << "=========================================" << endl;
    cout << "INFORMACOES DO #2 PRODUTO" << endl;
    cout << "=========================================" << endl;
    cout << "Id produto: " << in2->getNumero() << endl;
    cout << "Descricao: " << in2->getDescricao() << endl;
    cout << "Quantidade: " << in2->getQtd() << endl;
    cout << "Preco: " << in2->getPreco() << endl;
    cout << "=========================================" << endl;
    cout << "FATURA DA COMPRA" << endl;
    cout << "=========================================" << endl;
    cout << "Fatura: " << in2->getInvoiceAmount() << endl;
    return 0;
}