//
// Created by Santiago Madariaga on 2/07/2019.
//
#include <iostream>
using namespace std;
#ifndef UNTITLED1_MENU_H
#define UNTITLED1_MENU_H
class Menu {
    int opcion;
    void mostrarMenu();
    void seleccionarOpcion();
    void agregarObjeto();
    void removerObjeto();
    void mostrarObjeto(vector<vector<int>> mapa)
    {
        auto y = mapa.size();
        auto x = mapa[0].size();
        for(int i=0; i<y; i++)
        {
            for (auto e:mapa[i])
            {
                switch(e)
                {
                    case 0:
                    {
                        cout<<" ";
                        break;
                    }
                    case 1:
                    {
                        cout<<"H";
                        break;
                    }
                    case 2:
                    {
                        cout<<"M";
                        break;
                    }
                }
            }
        }
    };
public:
    Menu();
    virtual ~Menu();
    void ejecutar();
};

#endif //UNTITLED1_MENU_H
