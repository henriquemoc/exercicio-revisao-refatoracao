#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {

    int jornadaDiaria = 8;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > jornadaDiaria) {
        double horasExtras = horasTrabalhadas - jornadaDiaria;
        return (horasTrabalhadas + (horasExtras/2)) * salarioHora;
    } else {
        return horasTrabalhadas * salarioHora;
    }

}

void Empregado::setName(std::string _nome) {

    this->nome = _nome;

}

std::string Empregado::getName() {

    return this->nome;

}

void Empregado::setSalarioHora(double _salarioHora) {

    this->salarioHora = _salarioHora;

}

double Empregado::getSalarioHora() {

    return this->salarioHora;

}
