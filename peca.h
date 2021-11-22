#ifndef PECA_H
//maria Josivania Oliveira Pinheiro
#define PECA_H
#include "quadradinho.h"
#include "math.h"
#include <iostream>
using namespace std;
#include <vector>

class peca
{
public:
    peca();
    //vetores das pecas
    vector<quadradinho*> objL;
    vector<quadradinho*> objL1;
    vector<quadradinho*> objQ;
    vector<quadradinho*> objZ;
    vector<quadradinho*> objT;
    vector<quadradinho*> objR;
    vector<quadradinho*> objZZ;

    int aPeca;// guarda a informaçãopra é o vetor q será trabalhado
    quadradinho *pecaSelec = NULL;          //peca selecionada
    quadradinho *pecaRotacionar = NULL;     //peca pra rotacionar
    quadradinho *pecaSelecMudarCor = NULL;  //mudar cor da peca selecionada

    void constroiPeca();
    quadradinho *buscaQuadrado(float x, float y);             //retorna um objeto selecionado
};

#endif // PECA_H
