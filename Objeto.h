//
// Created by Santiago Madariaga on 2/07/2019.
//

#ifndef UNTITLED1_OBJETO_H
#define UNTITLED1_OBJETO_H
#include <string>
#include <iostream>
using namespace std;
class Objeto
{

protected:
    string nombre;
    string calificacion;

public:
    int y;
    int x;
    void mostrar();
    Objeto();
    ~Objeto();
};

class Restaurant:Objeto
{
private:
    string tipo_de_comida;
    string especialidad_del_dia;
public:
    Restaurant(string nombre, int x, int y, string calificacion, string tipo_de_comida, string especialidad_del_dias);
    virtual ~Restaurant();
    void mostrar_lo_demas();
};

class Hotel:Objeto
{
private:
    string disponibilidad;
    int estrellas;
public:
    void mostrar_lo_demas();
    Hotel(string nombre, int x, int y, string calificacion, int estrellas, string disponibilidad);

    virtual ~Hotel();
};

class Museo:Objeto
{
private:
    string exposicion_actual;
public:
    void mostrar_lo_demas();
    Museo(string nombre, int x, int y, string calificacion, string exposicion_actual);
    virtual ~Museo();
};

#endif //UNTITLED1_OBJETO_H
