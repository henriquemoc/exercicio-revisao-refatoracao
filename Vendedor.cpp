#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() {

    return quotaMensalVendas * 12;

}

void Vendedor::setQuotaMensalVendas(double _quota) {

    this->quotaMensalVendas = _quota;

}

double Vendedor::getQuotaMensalVendas() {

    return this->quotaMensalVendas;

}

