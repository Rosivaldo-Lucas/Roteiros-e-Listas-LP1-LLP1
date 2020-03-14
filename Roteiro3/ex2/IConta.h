#ifndef _I_CONTA_
#define _I_CONTA_

class IConta{
  public:
    virtual void sacar(double valor) = 0;
    virtual void depositar(double valor) = 0;
  private:

};

#endif //_I_CONTA_