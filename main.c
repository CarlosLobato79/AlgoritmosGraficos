
#include <GL/glut.h>
#include <GL/gl.h>
#include "genera_escena_casa.h"



int main(int argc, char** argv) {
    //Nombre de la ventana
    char* WINDOW_NAME = "Ventana Prueba";

    //Tamanio de la ventana
    int WINDOW_WIDTH = 800;
    int WINDOW_HEIGHT = 600;
    //Posicion de donde se mostrara la ventana
    int WINDOW_POSITION_X = 200;
    int WINDOW_POSITION_Y = 100;
    glutInit(&argc, argv);

    //    Define el modo de visualización de la ventana.
    //    GLUT_SINGLE indica que se usará un solo buffer para dibujar
    //    GLUT_RGB indica que se utilizará el espacio de color RGB.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(WINDOW_POSITION_X, WINDOW_POSITION_Y);

    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);

    glutCreateWindow(WINDOW_NAME);

    glClearColor(0.05, 0.08, 0.16,0); //Color cielo
    //Inicio la configuracion
    iniciar_tp();
    //Dibujo en la ventana
    glutDisplayFunc(dibujar_tp);
    //Funciones de captura de eventos
    glutMouseFunc(mouseEventListener);
    glutKeyboardFunc(keyBoardEventListener);
    glutMainLoop();


    return EXIT_SUCCESS;
}
