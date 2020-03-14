#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){
  this->orcamentoMax = 10000.00;
}
SistemaGerenciaFolha::~SistemaGerenciaFolha(){}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *funcionario){
  this->funcionarios.push_back(funcionario);
}
    
double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome){
  double salario = 0;
  for(int i = 0; i <this->funcionarios.size(); i++){
    if(this->funcionarios[i]->getNome() == nome){
      salario = this->funcionarios[i]->calcularSalario();
      return salario;
    }
  }
  throw FuncionarioNaoExisteException();
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
  double folha = 0;
  for(int i = 0; i < this->funcionarios.size(); i++){
    folha = folha + this->funcionarios[i]->calcularSalario();
  }

  if(folha > this->orcamentoMax){
    throw OrcamentoEstourouException();
  }

  return folha;
}
