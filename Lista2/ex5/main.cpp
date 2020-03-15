#include <iostream>
#include <fstream>

#include "Lista.h"
#include "SistemaLista.h"
#include "persiste.h"

using namespace std;

int main(int argc, char*argv[]){
  vector<Lista*> pegaLista;
  Lista *lista;
  SistemaLista sistema;
  Persiste persiste;
  string item;
  int cont = 0;
  int op;
  
  pegaLista = persiste.recupera();
  for(int i = 0; i != pegaLista.size(); i++){
    sistema.addLista(pegaLista[i]);
  }
  while(true){
    cout << "" << endl;
    cout << "Pressione 0 para sair e salvar os itens na lista." << endl;
    cout << "" << endl;
    cout << "Add item " << (cont + 1) << ": ";
    getline(cin, item);
    if(item == "0"){
      break;
    }
    lista = new Lista();
    lista->setItem(item);
    sistema.addLista(lista);
    cont++;
    system("clear");
  }
  pegaLista = sistema.retornaLista();
  persiste.salvarLista(pegaLista);
  sistema.mostraLista();

  cout << "1 - Fazer backup." << endl;
  cout << "2 - Sair sem fazer backup." << endl;
  cin >> op;
  if(op == 1){
    // Faz backup
    persiste.ler();
  }

  return 0;
}