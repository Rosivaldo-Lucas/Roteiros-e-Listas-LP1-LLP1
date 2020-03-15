#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"


void TestaValidaNumero::validaNumero(int numero){
  if(numero <= 0){
    throw ValorAbaixoException();
  }
  if(numero > 100 && numero < 1000){
    throw ValorAcimaException();
  }
  if(numero >= 1000){
    throw ValorMuitoAcimaException();
  }
}