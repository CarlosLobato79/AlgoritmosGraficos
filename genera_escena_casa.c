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

    generarCircuferencia(30,400,550);

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
        printf("Iteracion: %d\n",i);
    }
    //Linea superior de carretera
    glBegin(GL_QUADS);
    glVertex2f(0,120);
    glVertex2f(0,125);
    glVertex2f(800,125);
    glVertex2f(800,120);
    glEnd();

    //Carro
    glColor3f(1,0,1);
    glBegin(GL_QUADS);
    glVertex2f(300,100);
    glVertex2f(175,100);
    glVertex2f(175,140);
    glVertex2f(300,140);

    glVertex2f(300,140);
    glVertex2f(250,140);
    glVertex2f(250,160);
    glVertex2f(300,160);
    glEnd();
    glColor3f(0,0,0);
    generarCircuferencia(10,175,100);
    generarCircuferencia(10,280,100);

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
    glVertex2f(650,400);
    glVertex2f(650,125);
    glColor3f(0.16, 0.17, 0.63);
    glVertex2f(650,125);
    glVertex2f(650,400);
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
    //Ventana
    glColor3f(0,0,0);
    glBegin(GL_QUADS);

    glEnd();

//Limpiar Buffer
    glFlush();
}

/**
 * Genera una circuferencia con cordenada polar
 * @param radio tamanio del circulo
 * @param coordenadaX posicion en X
 * @param coordenadaY posicion en Y
 */
void generarCircuferencia(int radio, int coordenadaX, int coordenadaY){
    float x, y;
    float teta;
    glBegin(GL_LINES);
    glColor3f(1,1,0);

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
        printf("Boton %d \t Estado: %d \t X:%d \t Y:%d\n",boton,estado,x,y);
        //glColor3f(1,1,1);
        //glPointSize(10);
        //glBegin(GL_POINTS);
        //glVertex2f(x,glutGet(GLUT_WINDOW_HEIGHT) - y);
        //glEnd();
        //glFlush();
    }


}

/**
 *
 * @param tecla
 * @param x
 * @param y
 */
void keyBoardEventListener(unsigned char tecla, int x, int y){
    printf("Tecla %d \t x: %d \t y:%d \n");

    glColor3f(1,1,1);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2f(x,glutGet(GLUT_WINDOW_HEIGHT) - y);
    glEnd();
    glFlush();
}

