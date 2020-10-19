#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {

    double t = horasTrabalhadas;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
    }
    return t * salarioHora;
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
