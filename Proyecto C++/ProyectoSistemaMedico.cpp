#include <iostream>
#include <string>
using namespace std;

void Alta_Paciente(string &Nombre, string &Apellido, long &DNI, long &Telefono)
{
    cout << "-----------------------------" << endl;
    cout << "Usted ingreso al apartado de Alta de Paciente" << endl;
    
    cout << "Ingrese el nombre del paciente: ";
    cin >> Nombre;
    
    cout << "Ingrese el apellido del paciente: ";
    cin >> Apellido;
    
    cout << "Ingrese el DNI del paciente: ";
    cin >> DNI;
    
    cout << "Ingrese el telefono del paciente: ";
    cin >> Telefono;

    int condicional = 0;

    if (!Nombre.empty())
    {
        condicional += 1;
    }

    if (!Apellido.empty())
    {
        condicional += 1;
    }

    // El DNI y el teléfono no pueden ser negativos
    if (DNI > 0)
    {
        condicional += 1;
    }

    if (Telefono > 0)
    {
        condicional += 1;
    }

    if (condicional == 4)
    {
        cout << "Datos ingresados correctamente." << endl;
    }
    else
    {
        cout << "Error en los datos ingresados." << endl;
    }
}


int Menu_Principal()
{
    int Opcion_Elegida_En_Menu;
    
    do
    {
        cout << "Bienvenido al Sistema Medico" << endl;
        cout << "-----------------------------" << endl;
        cout << "1. Administrar Pacientes" << endl;
        cout << "2. Administrar Especialidades Medicas" << endl;
        cout << "3. Administrar Turnos" << endl;
        cout << "4. Salir del sistema" << endl;
        cout << "Ingrese un area para continuar: ";
        cin >> Opcion_Elegida_En_Menu;

        switch(Opcion_Elegida_En_Menu)
        {
            case 1:
            {
                string Nombre, Apellido;
                long DNI, Telefono;

                int Opcion_Elegida_En_Administrar_Paciente;
                cout << "-----------------------------" << endl;
                cout << "Usted ingreso al area de Administrar Pacientes" << endl;
                cout << "1. Alta de Paciente" << endl;
                cout << "2. Baja de Paciente" << endl;
                cout << "3. Modificacion de Paciente" << endl;
                cout << "4. Consulta de Paciente" << endl;
                cout << "5. Volver al menu principal" << endl;
                cout << "Ingrese un apartado para continuar: ";
                cin >> Opcion_Elegida_En_Administrar_Paciente;

                switch(Opcion_Elegida_En_Administrar_Paciente)
                {
                    case 1:
                    {
                        Alta_Paciente(Nombre, Apellido, DNI, Telefono);
                        cout << "Presione ENTER para volver al menu principal" << endl;
                        cin.ignore(); // Descartar el carácter de nueva línea en el buffer
                        cin.get();    // Esperar a que el usuario presione ENTER
                        break;
                    }
                }
                break;
            }
            
            default:
            {
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
            }
        }
    } while(Opcion_Elegida_En_Menu != 4);
    
    return 0;
}

int main()
{
    Menu_Principal();
    return 0;
}