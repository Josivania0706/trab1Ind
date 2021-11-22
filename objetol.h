//Maria Josivânia Oliveira Pinheiro
#ifndef OBJETOL_H
#define OBJETOL_H
#include <GL/gl.h>
#include "math.h"

class objetoL
{
public:

    objetoL();
    objetoL(float posx, float posy,float c1, float c2, float c3);

    //atributos do objeto
    float angulo = 0;                                     //angulo de rotação
    int selecionado = 0;                                  //se peça está selecionda
    float posX , posY, posZ = 0;                          //posicoes do objeto
    float cor1 = 1, cor2 = 0, cor3= 1;                    // cores do objeto
    float cor_borda1 = 1, cor_borda2 = 1, cor_borda3= 1;  //cor da borda quando obj está selecionado

    //funções
    void desenhaPecaL(); //desenha peca L

};

#endif // OBJETOL_H
