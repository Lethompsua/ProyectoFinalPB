// Kpro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
    string pacienteN[100];
	string pacienteA[100];
	int tratamientoP[100];
	int precioTo[100];
    int opc = 0,  i = 0, k = 0, p = 0, tratamiento = 0, t = 0, OT = 0, NT = 0;
	int preciot1 = 900, preciot2 = 400, preciot3 = 800;
	while (opc !=6)
	{
		cout << "\n\nBienvenido al consulturio Don Sonrisas favor de escoger las siguientes opciones del menu \n1.Agendar Cita";
		cout << "\n2.Modificar Cita \n3.Eliminar Cita \n4.Lista de citas vigentes \n5.Limpiar Pantalla \n6.Salir del programa";
		cout << endl;

		cin >> opc;
		string nombre;
		string apellido;
		
		switch (opc)
		{
		case 1:
			cout << "Ingrese su nombre: ";
			cin >> nombre;
			pacienteN[i] = nombre;
			i++;
			cout << "Ingrese su apellido: ";
			cin >> apellido;
			pacienteA[k] = apellido;
			k++;

			cout << "Tratamiento 1" << endl;
			cout << "Si usted tiene malestar o dolor este tratamiento trata de una consulta a sus dolencias" << endl;
			cout << "$900" << endl;

			cout << "Tratamiento 2" << endl;
			cout << "Este tratamiento consta de una reparacion total a su sistema de ortodoncia a un precio accesible y de bajo costo mas aparte asesoria profesional!" << endl;
			cout << "$400" << endl;

			cout << "Tratamiento 3" << endl;
			cout << "Este tratamiento consta de una limpieza dental profunda y blaqueamiento para momentos especiales!" << endl;
			cout << "$800" << endl;
 

			cout << "porfavor ingrese el tipo de tratamiento que requiere: ";

			cin >> tratamiento;

			switch (tratamiento)
			{
			case 1:
				tratamientoP[t] = tratamiento;
				t++;
				break;
			case 2:
				tratamientoP[t] = tratamiento;
				t++;
				break;
			case 3:
				tratamientoP[t] = tratamiento;
				t++;
				break;
			default:
				cout << "el tratamiento que usted especifico no existe...";
				break;
			}

			cout << "cauntos tratamientos requiere?" << endl;
			cin >> NT;

			if (tratamiento == 1)
				OT = (NT * preciot1);
			else if (tratamiento == 2)
			{
				OT = (NT * preciot2);
			}
			else if (tratamiento == 3)
			{
				OT = (NT * preciot3);
			}
			precioTo[p] = OT;
			p++;

			cout << "el coste total de su tratamiento seria: $" << OT << endl;

			
			

			
		


			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			for (int j = 0; j < i; j++) {	
					cout << "Paciente " << (j + 1) << endl;
					cout << "Nombre: " << pacienteN[j] << endl;
					cout << "Apellido: " << pacienteA[j] << endl;	
					cout << "Tipo de tratamiento: " << tratamientoP[j] << endl;
					cout << "Costo total: $" << precioTo[j] << endl;
			}

			cout << endl;
			cout << "Le recordamos los tipos de tratamiento:" << endl;

			cout << "Tratamiento 1" << endl;
			cout << "Si usted tiene malestar o dolor este tratamiento trata de una consulta a sus dolencias" << endl;
			cout << "$900" << endl;

			cout << "Tratamiento 2" << endl;
			cout << "Este tratamiento consta de una reparacion total a su sistema de ortodoncia a un precio accesible y de bajo coste mas aparte asesoria profesional!" << endl;
			cout << "$400" << endl;

			cout << "Tratamiento 3" << endl;
			cout << "Este tratamiento consta de una limpieza dental profunda y blaqueamiento para momentos especiales!" << endl;
			cout << "$800" << endl;
			break;

		case 5:
			system("CLS");
			break;

		case 6:
			cout << "gracias por su preferencia";
			exit;
			break;

		default:
			cout << "El numero que ingreso no esta entre las posibles opciones";
			exit;
			break;
		}
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
