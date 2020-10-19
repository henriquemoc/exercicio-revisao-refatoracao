#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:

    Vendedor(){}
    ~Vendedor(){}

	double quotaTotalAnual();

};

#endif
