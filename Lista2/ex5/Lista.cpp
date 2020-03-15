#include "Lista.h"

Lista::Lista(){
  this->setItem("");
}
Lista::Lista(std::string item){
  this->setItem(item);
}

std::string Lista::getItem(){
  return this->item;
}
void Lista::setItem(std::string item){
  this->item = item;
}
