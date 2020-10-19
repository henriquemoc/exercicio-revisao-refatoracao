#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

public:

	double quotaTotalAnual();

	void setQuotaMensalVendas(double _quota);
    double getQuotaMensalVendas();

private:

    double quotaMensalVendas;

};

#endif
