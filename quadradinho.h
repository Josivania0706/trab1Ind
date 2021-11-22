//maria Josivania Oliveira Pinheiro
#ifndef QUADRADINHO_H
#define QUADRADINHO_H
#include <GL/gl.h>

class quadradinho
{
public:
    quadradinho();
    quadradinho(float posx, float posy,float c1, float c2, float c3);
    int id = 0;
    float posX = 0, posY = 0, angulo = 0;
    float cor1, cor2, cor3;
    float cor_borda1 = 0.5, cor_borda2 = 0.5, cor_borda3= 0.5;  //cor da borda quando obj está selecionado

    void desenhaQuadradinho();

};

#endif // QUADRADINHO_H
