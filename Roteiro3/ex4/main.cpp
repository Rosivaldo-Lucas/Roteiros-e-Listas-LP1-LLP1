#include <iostream>

#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

using namespace std;

int main(int argc, char *argv[]){
  SistemaGerenciaFolha sistema = SistemaGerenciaFolha();
  Funcionario *funcionario;

  double salario;

  // Teste de Assalariado
  funcionario = new Assalariado(800, "Rosivaldo", 123);
  sistema.setFuncionarios(funcionario);
  try{
    cout << "Salario calculado 1: " << funcionario->calcularSalario() << endl;
    salario = sistema.consultaSalarioFuncionario("Rosivaldo");
    cout << "Salario pesquisado 1: " << salario << endl;    
  }catch(FuncionarioNaoExisteException e){
    e = FuncionarioNaoExisteException();
  }

  cout << "" << endl;
  cout << "" << endl;

  // Teste de Horista
  funcionario = new Horista(20, 40,  "Lucas", 456);
  sistema.setFuncionarios(funcionario);
  try{
    cout << "Salario calculado 2: " << funcionario->calcularSalario() << endl;
    salario = sistema.consultaSalarioFuncionario("Lucas");
    cout << "Salario pesquisado 2: " << salario << endl;    
  }catch(FuncionarioNaoExisteException e){
    e = FuncionarioNaoExisteException();
  }

  cout << "" << endl;
  cout << "" << endl;

  // Teste de Comissionado
  funcionario = new Comissionado(20, 20, "Silva", 789);
  sistema.setFuncionarios(funcionario);
  try{
    cout << "Salario calculado 3: " << funcionario->calcularSalario() << endl;
    salario = sistema.consultaSalarioFuncionario("Silva");
    cout << "Salario pesquisado 3: " << salario << endl;    
  }catch(FuncionarioNaoExisteException e){
    e = FuncionarioNaoExisteException();
  }

  cout << "" << endl;

  try{
    cout << "Folha salarial: " << sistema.calculaValorTotalFolha() << endl;
  }catch(OrcamentoEstourouException e){
    e = OrcamentoEstourouException();
  }

  return 0;
}