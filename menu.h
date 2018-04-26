//#############################################################################
// ARCHIVO             : main.cpp
// AUTOR/ES            : Mansilla Francisco
// VERSION             : 0.02 beta.
// FECHA DE CREACION   : 31/08/2017.
// ULTIMA ACTUALIZACION: 18/09/2017.
// LICENCIA            : GPL (General Public License) - Version 3.
//****************************************************************************
#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
//****************************************************************************
//==============================================================================
// DECLARACION DEL ESPACIO DE NOMBRES POR DEFECTO
//------------------------------------------------------------------------------
//using namespace std;
//*****************************************************************************
//======================================================================
// FUNCION : presentacion ()
// ACCION : muestra la presentacion.
// PARAMETROS: -
// DEVUELVE : -
//----------------------------------------------------------------------
void presentacion() //funcion de la pantalla de presentacion.
{
   //sys::cls();
   cout<<endl;
   cout<<"  #####¶--¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶--¶#####"<<endl;
   cout<<"  #####¶--¶¶¶¶    ¶¶ ¶   ¶ ¶¶¶ ¶ ¶¶¶ ¶    ¶ ¶¶¶ ¶ ¶    ¶¶¶   ¶¶¶¶¶¶--¶#####"<<endl;
   cout<<"  #####¶--¶¶¶¶ ¶¶¶ ¶ ¶ ¶¶¶  ¶¶ ¶ ¶¶¶ ¶ ¶¶¶¶  ¶¶ ¶ ¶ ¶¶¶ ¶ ¶¶¶ ¶¶¶¶¶--¶#####"<<endl;
   cout<<"  #####¶--¶¶¶¶    ¶¶ ¶   ¶ ¶ ¶ ¶ ¶¶¶ ¶    ¶ ¶ ¶ ¶ ¶ ¶¶¶ ¶ ¶¶¶ ¶¶¶¶¶--¶#####"<<endl;
   cout<<"  #####¶--¶¶¶¶ ¶¶¶ ¶ ¶ ¶¶¶ ¶¶  ¶¶ ¶ ¶¶ ¶¶¶¶ ¶¶  ¶ ¶ ¶¶¶ ¶ ¶¶¶ ¶¶¶¶¶--¶#####"<<endl;
   cout<<"  #####¶--¶¶¶¶    ¶¶ ¶   ¶ ¶¶¶ ¶¶¶ ¶¶¶    ¶ ¶¶¶ ¶ ¶    ¶¶¶   ¶¶¶¶¶¶--¶#####"<<endl;
   cout<<"  #####¶--¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶--¶#####"<<endl;
   cout<<"  #####¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶#####"<<endl;
   cout<<"  #####¶¶¶¶¶¶¶¶¶¶¶¶¶¶                                   ¶¶¶¶¶¶¶¶¶¶¶¶¶¶#####"<<endl;
   cout<<"  #####¶¶¶¶¶¶¶¶¶¶¶¶¶¶         AGENDA ELECTRONICA        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶#####"<<endl;
   cout<<"  #####¶¶¶¶¶¶¶¶¶¶¶¶¶¶                2018               ¶¶¶¶¶¶¶¶¶¶¶¶¶¶#####"<<endl;
   cout<<"  #####¶¶¶¶¶¶¶¶¶¶¶¶¶¶                                   ¶¶¶¶¶¶¶¶¶¶¶¶¶¶#####"<<endl;
   cout<<"  #####¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶#####"<<endl;
   cout<<"  #####¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶      MiSoftCPP     ¶¶¶¶¶¶¶¶¶#####"<<endl;
   cout<<"  #####¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶#####"<<endl;
   cout<<"  #########################################################################"<<endl;
   cout<<endl;
   sys::msleep(1);
}

//======================================================================
// FUNCION   : despedida ()
// ACCION    : muestra la pantalla de despedida.
// PARAMETROS: NADA
// DEVUELVE  : NADA
//----------------------------------------------------------------------
void despedida()
{
    sys::cls();
    cout<<"\n\n      #-¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶-#"<<endl;
    cout<<"      #-¶¶¶¶¶¶¶¶¶¶                                      ¶¶¶¶¶¶¶¶¶-#"<<endl;
    cout<<"      #-¶¶¶¶¶¶¶¶¶¶          AGENDA ELECTRONICA          ¶¶¶¶¶¶¶¶¶-#"<<endl;
    cout<<"      #-¶¶¶¶¶¶¶¶¶¶                                      ¶¶¶¶¶¶¶¶¶-#"<<endl;
    cout<<"      #-¶¶¶¶¶¶¶¶¶¶                 2018                 ¶¶¶¶¶¶¶¶¶-#"<<endl;
    cout<<"      #-¶¶¶¶¶¶¶¶¶¶                                      ¶¶¶¶¶¶¶¶¶-#"<<endl;
    cout<<"      #-¶¶¶¶¶¶¶¶¶¶         CERRANDO EL PROGRAMA         ¶¶¶¶¶¶¶¶¶-#"<<endl;
    cout<<"      #-¶¶¶¶¶¶¶¶¶¶                                      ¶¶¶¶¶¶¶¶¶-#"<<endl;
    cout<<"      #-¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶-#"<<endl;
    sys::msleep(1);

}

//======================================================================
// FUNCION   : void ayuda()
// ACCION    : es el acceso a la ayuda.
// PARAMETROS: NADA
// DEVUELVE  : NADA
//----------------------------------------------------------------------
void ayuda(){

    sys::cls();
    cout << " #-=========================================================-#"<<endl;
    cout << " #                      AGREGAR CONTACTO                     #" << endl;
    cout << " #-----------------------------------------------------------#"<<endl;
    cout << " # Permite ingresar los datos de un contacto                 #" << endl;
    cout << " # como nombre, apellido, direccion                          #" << endl;
    cout << " # nro de telefono , direccion E-Mail.                       #" << endl;
    cout << " #-=========================================================-#"<<endl<< endl;
    cout << " #-=========================================================-#"<<endl;
    cout << " #                       BUSCAR CONTACTO                     #" << endl;
    cout << " #-----------------------------------------------------------#"<<endl;
    cout << " # Permite buscar un contacto                                #"<<endl;
    cout << " # por nombre, apellido u apodo.                             #" << endl;
    cout << " #-=========================================================-#"<<endl<< endl;
    cout << " #-=========================================================-#"<<endl;
    cout << " #                    MODIFICAR CONTACTO                     #" << endl;
    cout << " #-----------------------------------------------------------#"<<endl;
    cout << " # Tras una busqueda permite modificar datos                 #" << endl;
    cout << " # del contacto ( nombre, apellido, direccion,               #" << endl;
    cout << " # nro de telefono, direccion E-Mail) o sus telefonos        #" << endl;
    cout << " # (agregar, eliminar, modificar tipo y numeros).            #" << endl;
    cout << " #-=========================================================-#"<<endl<< endl;
    cout << " #-=========================================================-#"<<endl;
    cout << " #                     LISTAR CONTACTO                       #" << endl;
    cout << " #-----------------------------------------------------------#"<<endl;
    cout << " # muestra todos los contactos con sus respectivos datos.    #" << endl;
    cout << " # si la lista supera los 5 contactos,                       #" << endl;
    cout << " # se mostraran en tandas de a 5.                            #" << endl;
    cout << " #-=========================================================-#"<<endl<< endl;
    cout << " #-=========================================================-#"<<endl;
    cout << " #                    ELIMINAR CONTACTO                      #" << endl;
    cout << " #-----------------------------------------------------------#"<<endl;
    cout << " # Tras una busqueda permite eliminar el contacto deseado.   #" << endl;
    cout << " #-=========================================================-#"<<endl<< endl;
    cout << " #-=========================================================-#"<<endl;
    cout << " #                RECUPERAR CONTACTO ELIMINADO               #" << endl;
    cout << " #-----------------------------------------------------------#"<<endl;
    cout << " # Recupera un contacto eliminado mediante la eleccion       #" << endl;
    cout << " # de un ID tanto de contacto como de telefono.              #" << endl;
    cout << " #-=========================================================-#"<<endl<< endl;
    cin.get();
}

//===========================================================================
// FUNCION   : void mostrarPrincipal().
// ACCION    : Muestra en pantalla el menu principal.
// PARAMETROS: NADA.
// DEVUELVE  : NADA.
//---------------------------------------------------------------------------
void mostrarMenuPrincipal()
{
    sys::cls();
    cout<< " ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»"<<endl;
    cout<< " º               AGENDA ELECTRONICA               º"<<endl;
    cout<< " ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶"<<endl;
    cout<< " º                                                º"<<endl;
    cout<< " º  C ) C A R G A R                               º"<<endl;
    cout<< " º  M ) M O D I F I C A R                         º"<<endl;
    cout<< " º  B ) B U S C A R                               º"<<endl;
    cout<< " º  L ) L I S T A R                               º"<<endl;
    cout<< " °  A ) R E C U P E R A R  C O N T A C T O        °"<<endl;
    cout<< " º  D ) E L I M I N A R                           º"<<endl;
    cout<< " º  H ) A Y U D A                                 º"<<endl;
    cout<< " º  S ) S A L I R                                 º"<<endl;
    cout<< " º                                                º"<<endl;
    cout<< " ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n"<<endl;
    cout << "INGRESE UNA OPCION: ";
}

//===========================================================================
// FUNCION   : void mostrarSubMenu1().
// ACCION    : Muestra en pantalla el submenu 1.
// PARAMETROS: NADA.
// DEVUELVE  : NADA.
//---------------------------------------------------------------------------
void mostrar_Sub_Menu_buscar()
{
    cout<< " ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»"<<endl;
    cout<< " º           OPCIONES DE BUSQUEDA           º"<<endl;
    cout<< " ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶"<<endl;
    cout<< " º                                          º"<<endl;
    cout<< " º  A ) Buscar por Apellido                 º"<<endl;
    cout<< " º  B ) Buscar por Nombre                   º"<<endl;
    cout<< " º  C ) Buscar por Alias                    º"<<endl;
    cout<< " º  D ) Volver a Menu Principal             º"<<endl;
    cout<< " º                                          º"<<endl;
    cout<< " ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n"<<endl;
    cout<< "INGRESE UNA OPCION: ";
}

//===========================================================================
// FUNCION   : void subMenu1().
// ACCION    : Inicia el submenu1.
// PARAMETROS: NADA.
// DEVUELVE  : Si desea salir del programa o no.
//---------------------------------------------------------------------------
void sub_Menu_Buscar(int mod_bus)
{
    //bool result = false;
    bool salir= false;//variable que controla el ciclo del menu
    char opcion;//variable que guarda la opcion seleccionada por el usuario

    bool encontro = true;

    while(!salir)
    {
        sys::cls();
        mostrar_Sub_Menu_buscar();
        cin.get(opcion);
        cin.ignore();

        switch(opcion)//Evaluo la variable opcion
        {
            case 'a':
            case 'A':
            {
                if( !buscar(1) )
                {
                    encontro = false; // Si no encontro, no se puede modificar
                    cout << "No se encontro el Apellido buscado...";
                    cin.get();
                }
                else{
                     //mostrar_contactosEncontrados();
                    cin.get();
                }
            }break;

            case 'b':
            case 'B':
            {
                if( !buscar(2) )
                {
                    encontro = false; // Si no encontro, no se puede modificar
                    cout << "No se encontro el Nombre buscado...";
                    cin.get();
                }
                else{
                    //mostrar_contactosEncontrados();
                    cin.get();
                }
            }break;

            case 'c':
            case 'C':
            {
                if( !buscar(3) )
                {
                    encontro = false; // Si no encontro, no se puede modificar
                    cout << "No se encontro el Apodo buscado...";
                    cin.get();
                }
                else{
                    //mostrar_contactosEncontrados();
                    cin.get();
                }
            }break;

            case 'd':
            case 'D':
            {
                encontro = false; // Si no encontro, no se puede modificar
//                result= true;//Para salir del programa
                salir=true;
            }break;

            default:
            {
                cout <<"Opcion no valida!!!";
                cin.get();
            }break;
        }

        if ( mod_bus == 1 || mod_bus == 3 )
        {
            if (encontro == true)
                preguntar_id(mod_bus);
        }
    }
    //return result;
}

//===========================================================================
// FUNCION   : void menuPrincipal().
// ACCION    : Inicia el menu principal.
// PARAMETROS: NADA.
// DEVUELVE  : NADA.
//---------------------------------------------------------------------------
void menuPrincipal(){

    contar_ID();

    bool salir= false;
    char opcion;

    while( !salir )
    {
        mostrarMenuPrincipal();
        cin.get(opcion);
        cin.ignore();

        switch(opcion)
        {
            case 'c':
            case 'C':
            {
                cargar_persona();
            }break;

            case 'm':
            case 'M':
            {
//                sub_Menu_Buscar(1);
            }break;

            case 'B':
            case 'b':
            {
  //              sub_Menu_Buscar(2);
            }break;

            case 'D':
            case 'd':
            {
    //            sub_Menu_Buscar(3);
            }break;

            case 'l':
            case 'L':
            {
                mostrar_contactos();
            }break;
            case 'a':
            case 'A':
            {
      //          mostrar_contactos_eliminados();
            }break;

            case 'H':
            case 'h':
            {
                ayuda();
                // crear funcion ayuda
            }break;

            case 'S':
            case 's':
            {
                despedida();
                salir=true;
            }break;

            default:
            {
                cout <<"Opcion no valida!!!";
                cin.get();
            }break;
        }
    }
}

#endif // MENU_H_INCLUDED
