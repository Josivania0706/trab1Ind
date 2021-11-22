//Maria Josivânia Oliveira Pinheiro
#include "objetol.h"

objetoL::objetoL(){}

objetoL::objetoL(float posx, float posy,float c1, float c2, float c3)
{
    //inicialização das posições do objeto
    this->posX = posx;
    this->posY = posy;
    this->cor1 = c1;
    this->cor2 = c2;
    this->cor3 = c3;
}

void objetoL::desenhaPecaL()
{

    glTranslatef(posX,posY, 0);
    glRotatef(this->angulo,0,0,1);
    glScalef(1.5,1.5,1);
        glColor3f(this->cor1,this->cor2,this->cor3);   //cores
        glBegin(GL_QUADS);                             //quadrado
            glVertex2f(-10, 30);
            glVertex2f(-10, 10);
            glVertex2f(10, 10);
            glVertex2f(10, 30);
        glEnd();
                                                glColor3f(128,128,128); //cores
                                                glBegin(GL_LINE_LOOP);  //linhas
                                                    glVertex2f(-10, 30);
                                                    glVertex2f(-10, 10);
                                                    glVertex2f(10, 10);
                                                    glVertex2f(10, 30);
                                                glEnd();

        glColor3f(this->cor1,this->cor2,this->cor3);   //cores
        glBegin(GL_QUADS);                             //quadrado
            glVertex2f(-10,10);
            glVertex2f(-10,-10);
            glVertex2f(10,-10);
            glVertex2f(10,10);
        glEnd();

                                                glColor3f(128,128,128); //cores
                                                glBegin(GL_LINE_LOOP); //linhas
                                                    glVertex2f(-10,10);
                                                    glVertex2f(-10,-10);
                                                    glVertex2f(10,-10);
                                                    glVertex2f(10,10);
                                                glEnd();

        glColor3f(this->cor1,this->cor2,this->cor3);   //cores
        glBegin(GL_QUADS);                             //quadrado
            glVertex2f(-10,-10);
            glVertex2f(-10,-30);
            glVertex2f(10,-30);
            glVertex2f(10,-10);
        glEnd();

                                                glColor3f(128,128,128); //cores
                                                glBegin(GL_LINE_LOOP); //linhas
                                                    glVertex2f(-10,-10);
                                                    glVertex2f(-10,-30);
                                                    glVertex2f(10,-30);
                                                    glVertex2f(10,-10);
                                                glEnd();

         glColor3f(this->cor1,this->cor2,this->cor3);   //cores
        glBegin(GL_QUADS);                              //quadrado
            glVertex2f(10,-10);
            glVertex2f(10,-30);
            glVertex2f(30,-30);
            glVertex2f(30,-10);
        glEnd();

                                                glColor3f(128,128,128); //cores
                                                glBegin(GL_LINE_LOOP); //linhas
                                                    glVertex2f(10,-10);
                                                    glVertex2f(10,-30);
                                                    glVertex2f(30,-30);
                                                    glVertex2f(30,-10);
                                                glEnd();

        glColor3f(this->cor_borda1,this->cor_borda2,this->cor_borda3); //cores
        glBegin(GL_LINE_LOOP);                                       //desenha a linha em
             glVertex2f(-10,30);                                   //volta do objeto selecionado
             glVertex2f(-10,-30);
             glVertex2f(30,-30);
             glVertex2f(30,-10);
             glVertex2f(10,-10);
             glVertex2f(10,30);
        glEnd();

    glScalef(1.0/1.5,1.0/1.5,1);
    glRotatef(-this->angulo,0,0,1);
    glTranslatef(-posX,-posY, -0);

}
