#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

public:
    Engenheiro(){}
    ~Engenheiro(){}

    void setProjetos(int _projetos);
    int getProjetos();

private:
    int projetos;

};

#endif
