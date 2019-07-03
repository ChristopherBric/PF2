//
// Created by utec on 21/06/19.
//

#include "Objeto.h"


void Objeto::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
    //falta direccion
    cout<<"Calificación o xxx: "<<calificacion<<endl;
}

Restaurant::Restaurant(string nombre1, int x1, int y1, string calificacion1, string tipo_de_comida1, string especialidad_del_dias)
{
    nombre = nombre1;
    int x = x1;
    int y = y1;
    string& calificacion = calificacion1;
    string tipo_de_comida = tipo_de_comida1;
    string especialidad_del_dia = especialidad_del_dias;
}



Hotel::Hotel(string nombre1, int x1, int y1, string calificacion1, int estrellas1, string disponibilidad1)
{
    nombre = nombre1;
    x = x1;
    y = y1;
    calificacion = calificacion1;
    disponibilidad = disponibilidad1;
    estrellas = estrellas1;
}
Museo::Museo(string nombre1, int x1, int y1, string calificacion1, string exposicion_actual1)
{
    nombre=nombre1;
    x = x1;
    y = y1;
    calificacion = calificacion1;
    exposicion_actual = exposicion_actual1;

}

Objeto::~Objeto()
{

}

void Restaurant::mostrar_lo_demas()
{
    cout<<"Tipo de comida: "<<tipo_de_comida<<endl;
    cout<<"Especialidad del día: "<<especialidad_del_dia<<endl;
}

Restaurant::~Restaurant() {

}

void Hotel::mostrar_lo_demas()
{
    cout<<"Disponibilidad: "<<disponibilidad;
    cout<<"Estrellas: "<<estrellas;
}

void Museo::mostrar_lo_demas()
{
    cout<<"Exposición actual: "<<exposicion_actual<<endl;
}
