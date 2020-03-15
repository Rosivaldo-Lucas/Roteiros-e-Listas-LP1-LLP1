#include <iostream>
#include <fstream>

#include "persiste.h"

std::ostream &operator<<(std::ostream &out, Lista *lista){
  out << lista->getItem();
  return out;
}

std::ifstream &operator>>(std::ifstream &in, Lista *lista){
  in >> lista;
  return in;
}

std::vector<Lista*> Persiste::recupera(){
  std::ifstream stream;
  stream.open("teste.txt", std::ios::in);
  std::string item;
  Lista *lista;
  std::vector<Lista*> listaRetorno;

  if(!stream.is_open()){
    std::cout << "Nao foi possivel abrir o arquivo" << std::endl;
    stream.close();
    exit(0);
  }

  while(!stream.eof()){
    getline(stream, item);
    if(item != ""){
      lista = new Lista();
      lista->setItem(item);
      listaRetorno.push_back(lista);
    }
  }

  stream.close();
  return listaRetorno;

}

void Persiste::ler(){
  std::vector<std::string> lista;
  std::string item;
  std::ifstream stream;
  std::ofstream gravar;
  stream.open("teste.txt", std::ios::in);

  if(!stream.is_open()){
    std::cout << "Nao foi possivel abrir o arquivo" << std::endl;
    stream.close();
    return;
  }

  std::cout << "AQUI" << std::endl;

  while(!stream.eof()){
    getline(stream, item);
    lista.push_back(item);
  }

  stream.close();

  gravar.open("teste_copia.txt", std::ios::out);

  if(!gravar.is_open()){
    std::cout << "Nao foi possivel abrir o arquivo" << std::endl;
    gravar.close();
    return;
  }

  for(int i = 0; i != lista.size(); i++){
    gravar << lista[i] << std::endl;
  }

}

void Persiste::salvarLista(std::vector<Lista*> lista){
  std::ofstream stream;
  stream.open("teste.txt", std::ios::out);
  int cont = 0;

  if(!stream.is_open()){
    std::cout << "Nao foi possivel abrir o arquivo" << std::endl;
    stream.close();
    return;
  }

  for(int i = 0; i != lista.size(); i++){
    if(cont > 0){
      stream << "\n";
    }
    stream << lista[i];
    cont++;
  }
  stream.close();
}

void Persiste::fazerCopia(std::vector<Lista*> lista){
  std::ofstream stream;
  stream.open("teste_copia.txt", std::ios::app);

  if(!stream.is_open()){
    std::cout << "Nao foi possivel abrir o arquivo" << std::endl;
    stream.close();
    return;
  }

  for(int i = 0; i != lista.size(); i++){
    stream << lista[i] << std::endl;
  }
}