#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() {

    return quotaMensalVendas * 12;

}

void Empregado::setQuotaMensalVendas(double _quota) {

    this->quotaMensalVendas = _quota;

}

double Empregado::getQuotaMensalVendas() {

    return this->quotaMensalVendas;

}
