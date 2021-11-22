//Maria Josivânia Oliveira Pinheiro
#ifndef CANVAS_H
#define CANVAS_H
#include <QOpenGLWidget> // essa serve pro pinel opengl
//maria Josivania Oliveira Pinheiro
#include <GL/gl.h>
#include <GL/glu.h>
#include <QMouseEvent>
#include <iostream>
using namespace std;

#include"peca.h"

class canvas:public QOpenGLWidget{

public:
    canvas(QWidget *parent);

    float aspectRatio;
    peca Peca;

    //funçoes
    void initializeGL();
    void paintGL();
    void mudarCor(float corR, float corG, float corB); //muda a cor do objeto
    void mousePressEvent(QMouseEvent *event);          //verificar se foi  pressionado
    void mouseMoveEvent(QMouseEvent *event);          //verifica se foi movido
    void mouseReleaseEvent(QMouseEvent *event);       //atuatualizar os valores pra Null
    void RotacionarObjeto();                          //atualizar a roatação da peca em 90°
    void cenario();                                   //desenha um "cenario"
    void movimentarGrupoQuadrado(int identificador, float posMouseX, float posMouseY);
    void movimentar();
};

#endif // CANVAS_H
