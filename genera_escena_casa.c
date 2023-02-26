#include <stdio.h>
#include <math.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include "genera_escena_casa.h"
/*
 * Inicializa las configuraciones de vetnana
 */


void iniciar_tp(){
    // Establecer la matriz de proyección ortográfica en 2D
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // Activar la matriz ModelView
    gluOrtho2D(0,800,0,600);


    glFlush();
}

/**
 * Creo el dibujo
 */
void dibujar_tp(){
    // Limpiar el buffer de color
    glClear(GL_COLOR_BUFFER_BIT);
    //SOL
    glColor3f(0.97, 1, 0);
    generarCircuferencia(30,400,550);

    //Cespet
    glColor3f(0, 0.56, 0.18);
    glBegin(GL_QUADS);
    glVertex2f(800,120);
    glVertex2f(0,120);
    glVertex2f(0,300);
    glVertex2f(800,300);
    glEnd();

    //Montanas
    glColor3f(0, 0.49, 0.16);
    glBegin(GL_TRIANGLES);
    glVertex2f(-100,300);
    glVertex2f(400,300);
    glVertex2f(150,580);
    glColor3f(0, 0.49, 0.16);
    glVertex2f(500,300);
    glVertex2f(900,300);
    glVertex2f(700,550);
    glColor3f(0, 0.75, 0.24);
    glVertex2f(200,280);
    glVertex2f(650,280);
    glVertex2f(425,525);

    glEnd();

    //Carretara
    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_QUADS);
    glVertex2f(800,0);
    glVertex2f(0,0);
    glVertex2f(0,120);
    glVertex2f(800,120);
    glEnd();
    //Lineas Carretera
    glColor3f(1,1,1);
    for (int i = 0; i < 800; i+=50) {
        glBegin(GL_QUADS);
        glVertex2f(20+i,60);
        glVertex2f(20+i,65);
        glVertex2f(50+i,65);
        glVertex2f(50+i,60);
        glEnd();
    }
    //Linea superior de carretera
    glBegin(GL_QUADS);
    glVertex2f(0,120);
    glVertex2f(0,125);
    glVertex2f(800,125);
    glVertex2f(800,120);

    glVertex2f(0,0);
    glVertex2f(0,5);
    glVertex2f(800,5);
    glVertex2f(800,0);
    glEnd();

    //Carro



    glBegin(GL_QUADS);
    //Carga
    glColor3f(0.36, 0.01, 0.01);
    glVertex2f(240,135);
    glVertex2f(185,135);
    glVertex2f(185,155);
    glVertex2f(240,155);
    //Base
    glColor3f(0, 0.08, 0.48);
    glVertex2f(300,100);
    glVertex2f(175,100);
    glVertex2f(175,140);
    glVertex2f(300,140);
    //Ventana - Marco
    glVertex2f(300,140);
    glVertex2f(250,140);
    glVertex2f(250,160);
    glVertex2f(300,160);
    //Ventana - Vidrio
    glColor3f(0, 0.14, 0.87);
    glVertex2f(290,135);
    glVertex2f(260,135);
    glVertex2f(260,155);
    glVertex2f(290,155);
    glEnd();
    //Ruedas
    glColor3f(1,1,1);
    generarCircuferencia(15,195,100);
    generarCircuferencia(15,280,100);
    glColor3f(0,0,0);
    generarCircuferencia(10,195,100);
    generarCircuferencia(10,280,100);



    //Chimenea
    glColor3f(0.24, 0.24, 0.39);
    glBegin(GL_QUADS);
    glVertex2f(660,390);
    glVertex2f(660,525);
    glVertex2f(740,525);
    glVertex2f(740,390);
    glEnd();
    //Casa
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glColor3f(0.19, 0.2, 0.71);
    glVertex2f(350,125);
    glVertex2f(350,400);
    glVertex2f(640,400);
    glVertex2f(640,125);

    glColor3f(0.16, 0.17, 0.63);
    glVertex2f(640,125);
    glVertex2f(640,400);
    glVertex2f(745,395);
    glVertex2f(745,125);
    glEnd();

    //Techo
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(760,390);
    glVertex2f(300,390);
    glVertex2f(530,550);
    glEnd();

    //Puerta
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(500,125);
    glVertex2f(400,125);
    glVertex2f(400,300);
    glVertex2f(500,300);
    glEnd();

    //Ventana -Marco
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(630,250);
    glVertex2f(520,250);
    glVertex2f(520,350);
    glVertex2f(630,350);
    //Ventana - fondo
    glColor3f(0.9,0.9,1.9);
    glVertex2f(625,255);
    glVertex2f(525,255);
    glVertex2f(525,345);
    glVertex2f(625,345);
    //Ventana Linea Horizontal
    glColor3f(1,1,1);
    glVertex2f(625,295);
    glVertex2f(525,295);
    glVertex2f(525,305);
    glVertex2f(625,305);


    glVertex2f(580,255);
    glVertex2f(570,255);
    glVertex2f(570,345);
    glVertex2f(580,345);
    glEnd();

    //Ventana2 -Marco
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(735,250);
    glVertex2f(665,250);
    glVertex2f(665,350);
    glVertex2f(735,350);
    //Ventana2 - fondo
    glColor3f(0.9,0.9,1.9);
    glVertex2f(730,255);
    glVertex2f(670,255);
    glVertex2f(670,345);
    glVertex2f(730,345);
    //Ventana2 Linea Horizontal
    glColor3f(1,1,1);
    glVertex2f(730,295);
    glVertex2f(670,295);
    glVertex2f(670,305);
    glVertex2f(730,305);

    glVertex2f(707,255);
    glVertex2f(695,255);
    glVertex2f(695,345);
    glVertex2f(707,345);
    glEnd();



//Limpiar Buffer
    glFlush();
}


/**
 * Genera una circuferencia con cordenada
 * @param radio tamanio del circulo
 * @param coordenadaX posicion en X
 * @param coordenadaY posicion en Y
 */
void generarCircuferencia(int radio, int coordenadaX, int coordenadaY){
    float x, y;
    float teta;
    glBegin(GL_LINES);


    for (int i = 0; i < 360; i++)
    {
        teta = i * 3.14159 / 180;
        x = coordenadaX + radio * cos(teta);
        y = coordenadaY + radio * sin(teta);
        //Linea desde el origen
        glVertex2f(coordenadaX,coordenadaY);
        //hasta su limite de diametro
        glVertex2f(x, y);
    }
    glEnd();
}




/**
 * Capturo eventos del mouse
 * @param boton 0 1 3 o 4
 * @param estado down up
 * @param x posicion donde se encuentra
 * @param y posicion donde se encuentra
 */
void mouseEventListener(int boton , int estado, int x, int y){

    if(boton == GLUT_LEFT_BUTTON && estado == GLUT_DOWN){
        printf("Clic precionado\n");
        //Senal de transito
        //Poste Senal
        glColor3f(0,0,0);
        glBegin(GL_QUADS);
        glVertex2f(100,125);
        glVertex2f(100,200);
        glVertex2f(110,200);
        glVertex2f(110,125);
        glEnd();
        //Senal
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(115,200);
        glVertex2f(95,200);
        glVertex2f(80,215);
        glVertex2f(80,230);
        glVertex2f(95,245);

        glVertex2f(115,245);
        glVertex2f(130,230);
        glVertex2f(130,215);
        glEnd();

        //Senal Texto
        glColor3f(1,1,1);
        glRasterPos2f(92,218);
        glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_10,"ALTO");


        //Libero
        glFlush();



    }


}
double f(double x) {
    return x*x;
}
/**
 *
 * @param tecla
 * @param x
 * @param y
 */
void keyBoardEventListener(unsigned char tecla, int x, int y){

    //Chimenea Humo
    glColor3f(1,1,1);
    glLineWidth(3);
    glBegin(GL_LINE_STRIP);
    glVertex2f(690,525);
    glVertex2f(680,550);
    glVertex2f(700,580);
    glVertex2f(690,595);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex2f(710,525);
    glVertex2f(700,550);
    glVertex2f(720,580);
    glVertex2f(710,595);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex2f(730,525);
    glVertex2f(720,550);
    glVertex2f(740,580);
    glVertex2f(730,595);
    glEnd();
    glFlush();
}

