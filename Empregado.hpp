#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

public:

    double pagamentoMes(double horasTrabalhadas);

    void setName(std::string _nome);
    std::string getName();

    void setSalarioHora(double _salarioHora);
    double getSalarioHora();

private:
    std::string nome;
    double salarioHora;

};

#endif
