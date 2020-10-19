#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

public:
    Empregado(){}
    ~Empregado(){}

    double pagamentoMes(double horasTrabalhadas);

    void setName(std::string _nome);
    std::string getName();

    void setSalarioHora(double _salarioHora);
    double getSalarioHora();

    void setQuotaMensalVendas(double _quota);
    double getQuotaMensalVendas();

private:
    std::string nome;
    double salarioHora;
    double quotaMensalVendas;

};

#endif
