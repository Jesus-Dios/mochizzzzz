#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include <iomanip>


using namespace std;

int menu(void)
{
    cout << "\t\t=====Menu de Opciones=====" << endl;
    cout << "\t\t1. Agregar articulo" << endl;
    cout << "\t\t2. Mostrar articulo" << endl;
    cout << "\t\t3. Eliminar articulo" << endl;
    cout << "\t\t4. Lista de articulos" << endl;
    cout << "\t\t5. Limpiar pantalla" << endl;
    cout << "\t\t0. SALIR" << endl;
    cout << "\t\Ingrese una opcion: ";
    return 0;
}

int main()
{
    int suma(int a, int b);
    int op, opc2, opc3, num, max = 3;
    int id = 1, i = 0, nombres;
    bool repetir = true, a = true;
    char d[100], b[100], c[100];
    void agregar();
    void mostrar();
    void limpiar();


    do {
        menu();
        cin >> op;

        // Texto del menú que se verá cada vez

        switch (op)
        {
        case 1:
            i++;
            // Lista de instrucciones de la opción 1     
            cout << "A continuacion escriba los juegos que busca...." << endl;
            cout << "Ingrese el nombre del juego:" << endl;
            cin >> d;
            cout << "Ingrese el año de lazamiento:" << endl;
            cin >> d;
            cout << " Ingrese la clasificacion del juego: " << endl;
            cin >> d;
            cout << "Ingrese el genero del juego:" << endl;
            cin >> d;
            cout << "Ingrese el Precio unitario:" << endl;
            cin >> d;
            cout << "Ingrese el impuesto:" << endl;
            cin >> d;
            cout << "Total del juego:" << endl;
            cin >> d;
            /*cout << "Ingrese el nombre del juego 2:..." << endl;
            cin >> b;
            cout << "Ingrese el nombre del juego 3:..." << endl;
            cin >> c;*/
            cout << "Precione el numero 8 para ver el menu....." << endl;
            cin >> opc2;

            break;

            system("pause>null");

        case 2:
            
            for (i = 1; i < max; i++);
            // Lista de instrucciones de la opción 2   
            cout << "\n\Le muestro el listado de juego que tenemos...." << endl;
            cout << "Halo" << endl;
            cout << "The legends of zelda" << endl;
            cout << "Kirby" << endl;
            cout << "Vuelva a precionar el numero 8 para ver el menu....." << endl;
            cin >> b;
            break;

            system("pause>null");

        case 3:

            // Lista de instrucciones de la opción 3                
            cout << " Que articulo desea eliminar.... " << endl;
            cout << "Estas seguro que quieres eliminar... " << endl;
            cin >> b;
            cout << "seguro? " << endl;
            cin >> d;
            cout << "Pasemos a la siguiente opcion :D" << endl;
            cin >> c;

            break;
            system("pause>null"); // Pausa      

        case 4:
            // Lista de instrucciones de la opción 4                
            cout << " No hay informacion en esta opcion" << endl;
            cout << " Ingrese el numero 8 para regresar al menu" << endl;
            cin >> c;

            break;

        case 5:
            // Lista de instrucciones de la opción 5              
            cout << "Desea limpiar pantalla" << endl;
            cin >> b;
            system("cls");
            break;

        default:
            repetir = false;
            break;
        }
    } while (repetir);

    return 0;
}


//
//void agregar()
//{
//	for (int i = 0; i < 3; i++);
//	{
//		cout << "Ingrese el numero de juego" << i + 1 << ":";
//		getline(cin, nombres[i]);
//
//
//	}
//}