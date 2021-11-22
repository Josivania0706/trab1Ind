//Maria Josivânia Oliveira Pinheiro
#include "canvas.h"
#include "math.h"

canvas::canvas(QWidget *parent) : QOpenGLWidget(parent){
}

void canvas::initializeGL()
{
    glClearColor(1,1,1,1); //mudar a cor da janela para branco
    glLineWidth(2); // aumenta o tamanho da linha
}

void canvas::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //mudar
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();//carrega a matriz identidade

    glViewport(0,0,width(), height());
    aspectRatio = ((float)height()/(float)width());

    glOrtho(0, width()/ aspectRatio, 0 ,height()/ aspectRatio,  -1, 1);// fazer a projecao paralela

    glMatrixMode(GL_MODELVIEW); //matriz que transforma um objeto
    glLoadIdentity(); //carrega a matriz identidade

    cenario();// desenhar o cenario
    Peca.constroiPeca();
}

void canvas::mudarCor(float corR, float corG, float corB)
{
    if(this->Peca.pecaSelecMudarCor != NULL){
        if(this->Peca.aPeca == 1){
            for(vector<quadradinho*>::iterator it = this->Peca.objL.begin(); it != this->Peca.objL.end(); it++){
                (*it)->cor1 = corR;
                (*it)->cor2  = corG;
                (*it)->cor3  = corB;
               }
        }
        if(this->Peca.aPeca == 2){
            for(vector<quadradinho*>::iterator it = this->Peca.objQ.begin(); it != this->Peca.objQ.end(); it++){
                (*it)->cor1 = corR;
                (*it)->cor2  = corG;
                (*it)->cor3  = corB;
               }
        }
        if(this->Peca.aPeca == 3){
            for(vector<quadradinho*>::iterator it = this->Peca.objZ.begin(); it != this->Peca.objZ.end(); it++){
                (*it)->cor1 = corR;
                (*it)->cor2  = corG;
                (*it)->cor3  = corB;
               }
        }
        if(this->Peca.aPeca == 4){
            for(vector<quadradinho*>::iterator it = this->Peca.objT.begin(); it != this->Peca.objT.end(); it++){
                (*it)->cor1 = corR;
                (*it)->cor2  = corG;
                (*it)->cor3  = corB;
               }
        }
        if(this->Peca.aPeca == 5){
            for(vector<quadradinho*>::iterator it = this->Peca.objR.begin(); it != this->Peca.objR.end(); it++){
                (*it)->cor1 = corR;
                (*it)->cor2  = corG;
                (*it)->cor3  = corB;
               }
        }
        if(this->Peca.aPeca == 6){
            for(vector<quadradinho*>::iterator it = this->Peca.objZZ.begin(); it != this->Peca.objZZ.end(); it++){
                (*it)->cor1 = corR;
                (*it)->cor2  = corG;
                (*it)->cor3  = corB;
               }
        }
        if(this->Peca.aPeca == 7){
            for(vector<quadradinho*>::iterator it = this->Peca.objL1.begin(); it != this->Peca.objL1.end(); it++){
                (*it)->cor1 = corR;
                (*it)->cor2  = corG;
                (*it)->cor3  = corB;
               }
        }
    }
    update();
}

void canvas::mousePressEvent(QMouseEvent *event)
{

    if(event->button() == Qt::LeftButton){

        //posicao que o mouse está clicando
        float posMouseX = event->pos().x()/aspectRatio;
        float posMouseY = (height()/aspectRatio) -  event->pos().y()/aspectRatio;

        //VERIFICA SE FOI CLICADO em algum objeto
       if (this->Peca.buscaQuadrado(posMouseX, posMouseY) != NULL){
            //PECA FOI SELECIONADA

           if(this->Peca.aPeca == 1){
               for(vector<quadradinho*>::iterator it = this->Peca.objL.begin(); it != this->Peca.objL.end(); it++){
                   //muda a cor da borda pra vermelho quando selecionado
                   (*it)->cor_borda1 = 1;
                   (*it)->cor_borda2 = 0;
                   (*it)->cor_borda3 = 0;
                }
           }
           if(this->Peca.aPeca == 2){
               for(vector<quadradinho*>::iterator it = this->Peca.objQ.begin(); it != this->Peca.objQ.end(); it++){
                   //muda a cor da borda pra vermelho quando selecionado
                   (*it)->cor_borda1 = 1;
                   (*it)->cor_borda2 = 0;
                   (*it)->cor_borda3 = 0;
                }
           }
           if(this->Peca.aPeca == 3){
               for(vector<quadradinho*>::iterator it = this->Peca.objZ.begin(); it != this->Peca.objZ.end(); it++){
                   //muda a cor da borda pra vermelho quando selecionado
                   (*it)->cor_borda1 = 1;
                   (*it)->cor_borda2 = 0;
                   (*it)->cor_borda3 = 0;
                }
           }
           if(this->Peca.aPeca == 4){
               for(vector<quadradinho*>::iterator it = this->Peca.objT.begin(); it != this->Peca.objT.end(); it++){
                   //muda a cor da borda pra vermelho quando selecionado
                   (*it)->cor_borda1 = 1;
                   (*it)->cor_borda2 = 0;
                   (*it)->cor_borda3 = 0;
                }
           }
           if(this->Peca.aPeca == 5){
               for(vector<quadradinho*>::iterator it = this->Peca.objR.begin(); it != this->Peca.objR.end(); it++){
                   //muda a cor da borda pra vermelho quando selecionado
                   (*it)->cor_borda1 = 1;
                   (*it)->cor_borda2 = 0;
                   (*it)->cor_borda3 = 0;
                }
           }
           if(this->Peca.aPeca == 6){
               for(vector<quadradinho*>::iterator it = this->Peca.objZZ.begin(); it != this->Peca.objZZ.end(); it++){
                   //muda a cor da borda pra vermelho quando selecionado
                   (*it)->cor_borda1 = 1;
                   (*it)->cor_borda2 = 0;
                   (*it)->cor_borda3 = 0;
                }
           }
           if(this->Peca.aPeca == 7){
               for(vector<quadradinho*>::iterator it = this->Peca.objL1.begin(); it != this->Peca.objL1.end(); it++){
                   //muda a cor da borda pra vermelho quando selecionado
                   (*it)->cor_borda1 = 1;
                   (*it)->cor_borda2 = 0;
                   (*it)->cor_borda3 = 0;
                }
           }


           //ponnteiros que ajudam nas mundacas
           this->Peca.pecaSelec = this->Peca.buscaQuadrado(posMouseX, posMouseY);
           this->Peca.pecaSelecMudarCor = this->Peca.buscaQuadrado(posMouseX, posMouseY);
           update();
       }
    }
}

void canvas::mouseMoveEvent(QMouseEvent *event)
{
    //se a peca tiver selecionada as posicoes do obj é atualizada com as pos do mouse
    if(this->Peca.pecaSelec != NULL){
        int identificador = this->Peca.pecaSelec->id;

        //posicao que o mouse está clicando
        float posMouseX = event->pos().x()/aspectRatio;
        float posMouseY = (height()/aspectRatio) -  event->pos().y()/aspectRatio;

        this->movimentarGrupoQuadrado(identificador, posMouseX, posMouseY);
    }
    update();
}

void canvas::mouseReleaseEvent(QMouseEvent *event)
{

    //voltar a cor original sem a selecao
    if(this->Peca.pecaSelec != nullptr){
        if(this->Peca.aPeca == 1){
            for(vector<quadradinho*>::iterator it = this->Peca.objL.begin(); it != this->Peca.objL.end(); it++){
                //muda a cor da borda pra vermelho quando selecionado
                (*it)->cor_borda1 = 0.5;
                (*it)->cor_borda2 = 0.5;
                (*it)->cor_borda3 = 0.5;
            }
        }
        if(this->Peca.aPeca == 2){
            for(vector<quadradinho*>::iterator it = this->Peca.objQ.begin(); it != this->Peca.objQ.end(); it++){
                //muda a cor da borda pra vermelho quando selecionado
                (*it)->cor_borda1 = 0.5;
                (*it)->cor_borda2 = 0.5;
                (*it)->cor_borda3 = 0.5;
            }
        }
        if(this->Peca.aPeca == 3){
            for(vector<quadradinho*>::iterator it = this->Peca.objZ.begin(); it != this->Peca.objZ.end(); it++){
                //muda a cor da borda pra vermelho quando selecionado
                (*it)->cor_borda1 = 0.5;
                (*it)->cor_borda2 = 0.5;
                (*it)->cor_borda3 = 0.5;
            }
        }
        if(this->Peca.aPeca == 4){
            for(vector<quadradinho*>::iterator it = this->Peca.objT.begin(); it != this->Peca.objT.end(); it++){
                //muda a cor da borda pra vermelho quando selecionado
                (*it)->cor_borda1 = 0.5;
                (*it)->cor_borda2 = 0.5;
                (*it)->cor_borda3 = 0.5;
            }
        }
        if(this->Peca.aPeca == 5){
            for(vector<quadradinho*>::iterator it = this->Peca.objR.begin(); it != this->Peca.objR.end(); it++){
                //muda a cor da borda pra vermelho quando selecionado
                (*it)->cor_borda1 = 0.5;
                (*it)->cor_borda2 = 0.5;
                (*it)->cor_borda3 = 0.5;
            }
        }
        if(this->Peca.aPeca == 6){
            for(vector<quadradinho*>::iterator it = this->Peca.objZZ.begin(); it != this->Peca.objZZ.end(); it++){
                //muda a cor da borda pra vermelho quando selecionado
                (*it)->cor_borda1 = 0.5;
                (*it)->cor_borda2 = 0.5;
                (*it)->cor_borda3 = 0.5;
            }
        }
        if(this->Peca.aPeca == 7){
            for(vector<quadradinho*>::iterator it = this->Peca.objL1.begin(); it != this->Peca.objL1.end(); it++){
                //muda a cor da borda pra vermelho quando selecionado
                (*it)->cor_borda1 = 0.5;
                (*it)->cor_borda2 = 0.5;
                (*it)->cor_borda3 = 0.5;
            }
        }
         update();
     }
    this->Peca.pecaSelec = nullptr;
}

//rotacionar peca
void canvas::RotacionarObjeto()
{
    for(vector<quadradinho*>::iterator it = this->Peca.objZZ.begin(); it != this->Peca.objZZ.end(); it++){

        if( (*it)->angulo < 271){
            (*it)->angulo  =  (*it)->angulo + 90;
            if((*it)->id == 1){
                (*it)->posX += 60;
                (*it)->posY -= 20;
            }
            if((*it)->id == 2){
                (*it)->posX += 20;
                (*it)->posY += 20;
            }
            if((*it)->id == 3){
                (*it)->posX -= 20;
                (*it)->posY -= 20;
            }
            if((*it)->id == 4){
                (*it)->posX -= 60;
                (*it)->posY += 20;
            }

            update();
            //this->pecaRotacionar = NULL;
        }
        if( (*it)->angulo == 360){
            (*it)->angulo = 0;
        }
    }
}

//imita um cenario para as peças serem colocadas dentro
void canvas::cenario()
{
    glColor3f(1,0,1);
    glBegin(GL_LINE_LOOP);

    glVertex2f(10,400);
    glVertex2f(10,10);
    glVertex2f(800,10);
    glVertex2f(800,400);
    glVertex2f(790,400);
    glVertex2f(790,20);
    glVertex2f(20,20);
    glVertex2f(20,400);

    glEnd();
}

void canvas::movimentarGrupoQuadrado(int identificador, float posMouseX, float posMouseY)
{
    if(this->Peca.aPeca == 1){
        for(vector<quadradinho*>::iterator it = this->Peca.objL.begin(); it != this->Peca.objL.end(); it++){
            //muda a cor da borda pra vermelho quando selecionado
            if(this->Peca.pecaSelec == (*it)){
                (*it)->posX = posMouseX ;
                (*it)->posY = posMouseY ;
            }
            if(identificador == 1){
                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 80;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY - 80;
                }
            }
            if(identificador == 2){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY - 40;
                }
            }
            if(identificador == 3){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 80;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY;
                }
            }
            if(identificador == 4){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY + 80;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY;
                }
            }


        }
    }

    if(this->Peca.aPeca == 2){
        for(vector<quadradinho*>::iterator it = this->Peca.objQ.begin(); it != this->Peca.objQ.end(); it++){
            //muda a cor da borda pra vermelho quando selecionado
            if(this->Peca.pecaSelec == (*it)){
                (*it)->posX = posMouseX ;
                (*it)->posY = posMouseY ;
            }
            if(identificador == 1){
                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY;
                }
            }
            if(identificador == 2){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY + 40;
                }
            }
            if(identificador == 3){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }
            }
            if(identificador == 4){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }
            }


        }
    }

    if(this->Peca.aPeca == 3){
        for(vector<quadradinho*>::iterator it = this->Peca.objZ.begin(); it != this->Peca.objZ.end(); it++){
            //muda a cor da borda pra vermelho quando selecionado
            if(this->Peca.pecaSelec == (*it)){
                (*it)->posX = posMouseX ;
                (*it)->posY = posMouseY ;
            }

            if(identificador == 1){
                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY - 80;
                }
            }
            if(identificador == 2){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY - 40;
                }
            }
            if(identificador == 3){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }
            }
            if(identificador == 4){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY + 80;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }
            }


        }
    }

    if(this->Peca.aPeca == 4){
        for(vector<quadradinho*>::iterator it = this->Peca.objT.begin(); it != this->Peca.objT.end(); it++){
            //muda a cor da borda pra vermelho quando selecionado
            if(this->Peca.pecaSelec == (*it)){
                (*it)->posX = posMouseX ;
                (*it)->posY = posMouseY ;
            }

            if(identificador == 1){
                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 80;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY - 40;
                }
            }
            if(identificador == 2){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY;
                }
            }
            if(identificador == 3){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 80;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY + 40;
                }
            }
            if(identificador == 4){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY - 40;
                }
            }
        }
    }

    if(this->Peca.aPeca == 5){
        for(vector<quadradinho*>::iterator it = this->Peca.objR.begin(); it != this->Peca.objR.end(); it++){
            //muda a cor da borda pra vermelho quando selecionado
            if(this->Peca.pecaSelec == (*it)){
                (*it)->posX = posMouseX ;
                (*it)->posY = posMouseY ;
            }

            if(identificador == 1){
                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 80;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 120;
                }
            }
            if(identificador == 2){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY -80;
                }
            }
            if(identificador == 3){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 80;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }
            }
            if(identificador == 4){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 120;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 80;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX ;
                    (*it)->posY = posMouseY + 40;
                }
            }
        }
    }

    if(this->Peca.aPeca == 6){
        for(vector<quadradinho*>::iterator it = this->Peca.objZZ.begin(); it != this->Peca.objZZ.end(); it++){
            //muda a cor da borda pra vermelho quando selecionado
            if(this->Peca.pecaSelec == (*it)){
                (*it)->posX = posMouseX ;
                (*it)->posY = posMouseY ;
            }

            if(identificador == 1){
                if((*it)->id == 2){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX + 80;
                    (*it)->posY = posMouseY + 40;
                }
            }
            if(identificador == 2){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX +40 ;
                    (*it)->posY = posMouseY + 40;
                }
            }
            if(identificador == 3){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY;
                }
            }
            if(identificador == 4){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX - 80;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY;
                }
            }
        }
    }

    if(this->Peca.aPeca == 7){
        for(vector<quadradinho*>::iterator it = this->Peca.objL1.begin(); it != this->Peca.objL1.end(); it++){
            //muda a cor da borda pra vermelho quando selecionado
            if(this->Peca.pecaSelec == (*it)){
                (*it)->posX = posMouseX ;
                (*it)->posY = posMouseY ;
            }

            if(identificador == 1){
                if((*it)->id == 2){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX + 80;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX + 80;
                    (*it)->posY = posMouseY + 40;
                }
            }
            if(identificador == 2){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX + 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX +40 ;
                    (*it)->posY = posMouseY + 40;
                }
            }
            if(identificador == 3){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX - 80;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY;
                }

                if((*it)->id == 4){
                    (*it)->posX = posMouseX;
                    (*it)->posY = posMouseY + 40;
                }
            }
            if(identificador == 4){

                if((*it)->id == 1){
                    (*it)->posX = posMouseX - 80;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 2){
                    (*it)->posX = posMouseX - 40;
                    (*it)->posY = posMouseY - 40;
                }

                if((*it)->id == 3){
                    (*it)->posX = posMouseX ;
                    (*it)->posY = posMouseY - 40;
                }
            }
        }
    }
    update();
}

void canvas::movimentar()
{
    for(vector<quadradinho*>::iterator it = this->Peca.objL.begin(); it != this->Peca.objL.end(); it++){
        if((*it)->posY > 140 && (*it)->id == 1){
            (*it)->posY = (*it)->posY - 4.5;
            update();
        }
        if((*it)->posY > 100 && (*it)->id == 2){
            (*it)->posY = (*it)->posY - 4.5;
            update();
        }
        if((*it)->posY > 60 && (*it)->id == 3){
            (*it)->posY = (*it)->posY - 4.5;
            update();
        }
        if((*it)->posY > 60 && (*it)->id == 4){
            (*it)->posY = (*it)->posY - 4.5;
            update();
        }
    }

    for(vector<quadradinho*>::iterator it = this->Peca.objQ.begin(); it != this->Peca.objQ.end(); it++){
        if((*it)->posY > 100 && (*it)->id == 1){
            (*it)->posY = (*it)->posY - 4.5;
            update();
        }
        if((*it)->posY > 60 && (*it)->id == 2){
            (*it)->posY = (*it)->posY - 4.5;
            update();
        }
        if((*it)->posY > 100 && (*it)->id == 4){
            (*it)->posY = (*it)->posY - 4.5;
            update();
        }
        if((*it)->posY > 60 && (*it)->id == 3){
            (*it)->posY = (*it)->posY - 4.5;
            update();
        }
    }
}
