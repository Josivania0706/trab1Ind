//Maria Josivânia Oliveira Pinheiro
#include "peca.h"

peca::peca()
{
    //CRIAR OS QUADRADOS DA PECA L
    quadradinho *QL1 = new quadradinho(100,740,  0,1,0);
    QL1->id=1;
    this->objL.push_back(QL1);
    quadradinho *QL2 = new quadradinho(100,700,  0,1,0);
    QL2->id=2;
    this->objL.push_back(QL2);
    quadradinho *QL3 = new quadradinho(100,660,  0,1,0);
    QL3->id=3;
    this->objL.push_back(QL3);
    quadradinho *QL4 = new quadradinho(140,660,  0,1,0);
    QL4->id=4;
    this->objL.push_back(QL4);

    //CRIAR OS QUADRADOS DA PECA L1
    quadradinho *QL11 = new quadradinho(880,620,  0.5,0,0.5);
    QL11->id=1;
    this->objL1.push_back(QL11);
    quadradinho *QL22 = new quadradinho(920,620,  0.5,0,0.5);
    QL22->id=2;
    this->objL1.push_back(QL22);
    quadradinho *QL33 = new quadradinho(960,620,  0.5,0,0.5);
    QL33->id=3;
    this->objL1.push_back(QL33);
    quadradinho *QL44 = new quadradinho(960,660,  0.5,0,0.5);
    QL44->id=4;
    this->objL1.push_back(QL44);

    //CRIAR OS QUADRADOS DA PECA Q
    quadradinho *QQ1 = new quadradinho(240,740,  0,0,1);
    QQ1->id=1;
    this->objQ.push_back(QQ1);
    quadradinho *QQ2 = new quadradinho(240,700,  0,0,1);
    QQ2->id=2;
    this->objQ.push_back(QQ2);
    quadradinho *QQ3 = new quadradinho(280,740,  0,0,1);
    QQ3->id=3;
    this->objQ.push_back(QQ3);
    quadradinho *QQ4 = new quadradinho(280,700,  0,0,1);
    QQ4->id=4;
    this->objQ.push_back(QQ4);

    //CRIAR OS QUADRADOS DA PECA Z
    quadradinho *QZ1 = new quadradinho(420,740,  1,0,1);
    QZ1->id=1;
    this->objZ.push_back(QZ1);
    quadradinho *QZ2 = new quadradinho(420,700,  1,0,1);
    QZ2->id=2;
    this->objZ.push_back(QZ2);
    quadradinho *QZ3 = new quadradinho(380,700,  1,0,1);
    QZ3->id=3;
    this->objZ.push_back(QZ3);
    quadradinho *QZ4 = new quadradinho(380,660,  1,0,1);
    QZ4->id=4;
    this->objZ.push_back(QZ4);

    //CRIAR OS QUADRADOS DA PECA T
    quadradinho *QT1 = new quadradinho(540,740,  0,1,1);
    QT1->id=1;
    this->objT.push_back(QT1);
    quadradinho *QT2 = new quadradinho(540,700,  0,1,1);
    QT2->id=2;
    this->objT.push_back(QT2);
    quadradinho *QT3 = new quadradinho(540,660,  0,1,1);
    QT3->id=3;
    this->objT.push_back(QT3);
    quadradinho *QT4 = new quadradinho(500,700,  0,1,1);
    QT4->id=4;
    this->objT.push_back(QT4);

    //CRIAR OS QUADRADOS DA PECA R
    quadradinho *QR1 = new quadradinho(620,740,  1,1,0);
    QR1->id=1;
    this->objR.push_back(QR1);
    quadradinho *QR2 = new quadradinho(620,700,  1,1,0);
    QR2->id=2;
    this->objR.push_back(QR2);
    quadradinho *QR3 = new quadradinho(620,660,  1,1,0);
    QR3->id=3;
    this->objR.push_back(QR3);
    quadradinho *QR4 = new quadradinho(620,620,  1,1,0);
    QR4->id=4;
    this->objR.push_back(QR4);

    //CRIAR OS QUADRADOS DA PECA ZZ
    quadradinho *QZZ1 = new quadradinho(720,620,  0.5,0.5,0);
    QZZ1->id=1;
    this->objZZ.push_back(QZZ1);
    quadradinho *QZZ2 = new quadradinho(760,620,  0.5,0.5,0);
    QZZ2->id=2;
    this->objZZ.push_back(QZZ2);
    quadradinho *QZZ3 = new quadradinho(760,660,  0.5,0.5,0);
    QZZ3->id=3;
    this->objZZ.push_back(QZZ3);
    quadradinho *QZZ4 = new quadradinho(800,660,  0.5,0.5,0);
    QZZ4->id=4;
    this->objZZ.push_back(QZZ4);

}

void peca::constroiPeca()
{
    for(vector<quadradinho*>::iterator it = this->objL.begin(); it != this->objL.end(); it++){
            (*it)->desenhaQuadradinho();

    }
    for(vector<quadradinho*>::iterator it = this->objL1.begin(); it != this->objL1.end(); it++){
            (*it)->desenhaQuadradinho();

    }
    for(vector<quadradinho*>::iterator it = this->objQ.begin(); it != this->objQ.end(); it++){
            (*it)->desenhaQuadradinho();

    }
    for(vector<quadradinho*>::iterator it = this->objZ.begin(); it != this->objZ.end(); it++){
            (*it)->desenhaQuadradinho();

    }
    for(vector<quadradinho*>::iterator it = this->objT.begin(); it != this->objT.end(); it++){
            (*it)->desenhaQuadradinho();

    }
    for(vector<quadradinho*>::iterator it = this->objR.begin(); it != this->objR.end(); it++){
            (*it)->desenhaQuadradinho();

    }
    for(vector<quadradinho*>::iterator it = this->objZZ.begin(); it != this->objZZ.end(); it++){
            (*it)->desenhaQuadradinho();

    }
}

quadradinho *peca::buscaQuadrado(float x, float y)
{
    quadradinho *posicaoQuad = NULL;
    // vai verificar objeto se foi selecinado
    for(vector<quadradinho*>::iterator it = this->objL.begin(); it != this->objL.end(); it++){
        if ((x == (*it)->posX && y == (*it)->posY)){ //obj encontrad, então retorna ele
            posicaoQuad = (*it);
            break;
        }else{
            //Distancia entre 2 pontos é dada pela raiz quadrada, da soma das coordenadas
            //xb - xa e yb - ya dos ponto elevado ao quadrado

            float posicao = sqrt(pow((*it)->posX - x, 2) + pow((*it)->posY - y, 2));

            if(posicao < 0){
                posicao = posicao * -1;
            }
            if((posicao > 0 && posicao < 20)){ //retorna uma aproximação se está dentro da peça
                posicaoQuad = (*it);
                break;
            }else{
                posicaoQuad = NULL;
            }
        }
        aPeca = 1;
    }

    if(posicaoQuad == NULL){//vai entrar nesses outros if, para verificar outras pecas se caso
        //não tiver encontrado ainda
        for(vector<quadradinho*>::iterator it = this->objQ.begin(); it != this->objQ.end(); it++){
            if ((x == (*it)->posX && y == (*it)->posY)){ //obj encontrad, então retorna ele
                posicaoQuad = (*it);
                break;
            }else{
                float posicao = sqrt(pow((*it)->posX - x, 2) + pow((*it)->posY - y, 2));
                if (posicao < 0){
                    posicao = posicao * -1;
                }
                if((posicao > 0 && posicao < 25)){ //retorna uma aproximação se está dentro da peça
                    posicaoQuad = (*it);
                    break;
                }else{
                    posicaoQuad = NULL;
                }
            }
        }
        aPeca = 2;
    }

    if(posicaoQuad == NULL){//vai entrar nesses outros if, para verificar outras pecas se caso
        //não tiver encontrado ainda
        for(vector<quadradinho*>::iterator it = this->objZ.begin(); it != this->objZ.end(); it++){
            if ((x == (*it)->posX && y == (*it)->posY)){ //obj encontrad, então retorna ele
                posicaoQuad = (*it);
                break;
            }else{
                float posicao = sqrt(pow((*it)->posX - x, 2) + pow((*it)->posY - y, 2));
                if (posicao < 0){
                    posicao = posicao * -1;
                }
                if((posicao > 0 && posicao < 25)){ //retorna uma aproximação se está dentro da peça
                    posicaoQuad = (*it);
                    break;
                }else{
                    posicaoQuad = NULL;
                }
            }
        }
        aPeca = 3;
    }

    if(posicaoQuad == NULL){//vai entrar nesses outros if, para verificar outras pecas se caso
        //não tiver encontrado ainda
        for(vector<quadradinho*>::iterator it = this->objT.begin(); it != this->objT.end(); it++){
            if ((x == (*it)->posX && y == (*it)->posY)){ //obj encontrad, então retorna ele
                posicaoQuad = (*it);
                break;
            }else{
                float posicao = sqrt(pow((*it)->posX - x, 2) + pow((*it)->posY - y, 2));
                if (posicao < 0){
                    posicao = posicao * -1;
                }
                if((posicao > 0 && posicao < 25)){ //retorna uma aproximação se está dentro da peça
                    posicaoQuad = (*it);
                    break;
                }else{
                    posicaoQuad = NULL;
                }
            }
        }
        aPeca = 4;
    }

    if(posicaoQuad == NULL){//vai entrar nesses outros if, para verificar outras pecas se caso
        //não tiver encontrado ainda
        for(vector<quadradinho*>::iterator it = this->objR.begin(); it != this->objR.end(); it++){
            if ((x == (*it)->posX && y == (*it)->posY)){ //obj encontrad, então retorna ele
                posicaoQuad = (*it);
                break;
            }else{
                float posicao = sqrt(pow((*it)->posX - x, 2) + pow((*it)->posY - y, 2));
                if (posicao < 0){
                    posicao = posicao * -1;
                }
                if((posicao > 0 && posicao < 25)){ //retorna uma aproximação se está dentro da peça
                    posicaoQuad = (*it);
                    break;
                }else{
                    posicaoQuad = NULL;
                }
            }
        }
        aPeca = 5;
    }

    if(posicaoQuad == NULL){//vai entrar nesses outros if, para verificar outras pecas se caso
        //não tiver encontrado ainda
        for(vector<quadradinho*>::iterator it = this->objZZ.begin(); it != this->objZZ.end(); it++){
            if ((x == (*it)->posX && y == (*it)->posY)){ //obj encontrad, então retorna ele
                posicaoQuad = (*it);
                break;
            }else{
                float posicao = sqrt(pow((*it)->posX - x, 2) + pow((*it)->posY - y, 2));
                if (posicao < 0){
                    posicao = posicao * -1;
                }
                if((posicao > 0 && posicao < 25)){ //retorna uma aproximação se está dentro da peça
                    posicaoQuad = (*it);
                    break;
                }else{
                    posicaoQuad = NULL;
                }
            }
        }
        aPeca = 6;
    }

    if(posicaoQuad == NULL){//vai entrar nesses outros if, para verificar outras pecas se caso
        //não tiver encontrado ainda
        for(vector<quadradinho*>::iterator it = this->objL1.begin(); it != this->objL1.end(); it++){
            if ((x == (*it)->posX && y == (*it)->posY)){ //obj encontrad, então retorna ele
                posicaoQuad = (*it);
                break;
            }else{
                float posicao = sqrt(pow((*it)->posX - x, 2) + pow((*it)->posY - y, 2));
                if (posicao < 0){
                    posicao = posicao * -1;
                }
                if((posicao > 0 && posicao < 25)){ //retorna uma aproximação se está dentro da peça
                    posicaoQuad = (*it);
                    break;
                }else{
                    posicaoQuad = NULL;
                }
            }
        }
        aPeca = 7;
    }

    return posicaoQuad;
}
