
//Maria Josivânia Oliveira Pinheiro
#include "quadradinho.h"

quadradinho::quadradinho()
{}

quadradinho::quadradinho(float posx, float posy,float c1, float c2, float c3)
{
    //inicialização das posições do objeto
    this->posX = posx;
    this->posY = posy;
    this->cor1 = c1;
    this->cor2 = c2;
    this->cor3 = c3;
}

void quadradinho::desenhaQuadradinho()
{
    glTranslatef(posX,posY, 0);
    glRotatef(this->angulo,0,0,1);

    glColor3f(this->cor1,this->cor2,this->cor3);   //cores
    glBegin(GL_QUADS);                             //quadrado
        glVertex2f(-20, 20);
        glVertex2f(-20, -20);
        glVertex2f(20, -20);
        glVertex2f(20, 20);
    glEnd();

    glColor3f(cor_borda1,cor_borda2,cor_borda3); //cores
    glBegin(GL_LINE_LOOP); //linhas
        glVertex2f(-20,20);
        glVertex2f(-20,-20);
        glVertex2f(20,-20);
        glVertex2f(20,20);
    glEnd();

    glRotatef(-this->angulo,0,0,1);
    glTranslatef(-posX,-posY, 0);


}

