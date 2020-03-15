#include <iostream>

#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

using namespace std;


int main(int argc, char *argv[]){
  TestaValidaNumero teste;

  try{
    teste.validaNumero(-1); // Exception ValorAbaixo
  }catch(ValorAbaixoException e){
    e; // Retorna o tratamento da exception
  }

  try{
    teste.validaNumero(110); // Exception ValorAcima
  }catch(ValorAcimaException e){
    e; // Retorna o tratamento da exception
  }

  try{
    teste.validaNumero(1100); // Exception ValorMuitoAcima
  }catch(ValorMuitoAcimaException e){
    e; // Retorna o tratamento da exception
  }
  
  return 0;
}