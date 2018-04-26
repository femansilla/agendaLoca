//#############################################################################
// ARCHIVO             : main.cpp
// AUTOR/ES            : Mansilla Francisco
// VERSION             : 0.02 beta.
// FECHA DE CREACION   : 31/08/2017.
// ULTIMA ACTUALIZACION: 18/09/2017.
// LICENCIA            : GPL (General Public License) - Version 3.
//****************************************************************************
#ifndef REGISTROPERSONAS_H_INCLUDED
#define REGISTROPERSONAS_H_INCLUDED
//==============================================================================
// DECLARACION DEL ESPACIO DE NOMBRES POR DEFECTO
//------------------------------------------------------------------------------
using namespace std;

//===========================================================================
// FUNCION   : bool guardar_persona(persona per).
// ACCION    : .
// PARAMETROS: persona per.
// DEVUELVE  : NADA.
//---------------------------------------------------------------------------
bool guardar_persona(persona per){

    FILE *arch_per;
    arch_per = fopen(ruta_persona,"ab");
    if(arch_per == NULL)
        exit(99);
    fwrite(&per, sizeof(persona), 1, arch_per);
    fclose(arch_per);
    cout << "\nSE GUARDARON LOS DATOS CORRECTAMENTE..." << endl;
    ID_per ++;
    return true;
}

//===========================================================================
// FUNCION   : void datos_persona(persona *per).
// ACCION    : .
// PARAMETROS: persona per.
// DEVUELVE  : NADA.
//---------------------------------------------------------------------------
void datos_persona(persona *per){

    //TODO: dowhile para cada campo, long minima
    cout<< " Ingrese el NOMBRE del contacto: ";
    sys::getline(per->nombre, 50);

    cout<< " Ingrese el APELLIDO del contacto: ";
    sys::getline(per->apellido, 50);

    cout<< " Ingrese el APODO del contacto: ";
    sys::getline(per->alias, 50);

    cout<< " Ingrese el DOMICILIO del contacto: ";
    sys::getline(per->domicilio, 50);

    cout<< " Ingrese el CORREO del contacto: ";
    sys::getline(per->email, 50);

    per->eliminado=false;

    per->id_persona = ID_per;
}

////===========================================================================
//// FUNCION   : void cargar_persona().
//// ACCION    : Cargar una persona y telefonos (si se desean)
//// PARAMETROS: NADA.
//// DEVUELVE  : NADA.
////---------------------------------------------------------------------------
void cargar_persona(){

    sys::cls();
    persona per;
    datos_persona(&per);
    if(guardar_persona(per))
        cargarTelefonos(per.id_persona);
    sys::cls();

}

////===========================================================================
//// FUNCION   : void mostrarContacto(persona per){
//// ACCION    : muestra detalle contacto
//// PARAMETROS: persona per
//// DEVUELVE  : NADA.
////---------------------------------------------------------------------------
void mostrarContacto(persona per){

        cout<< " ==================================="<<endl;
        cout<< "           ID CONTACTO: "<< per.id_persona << endl;
        cout<< " ==================================="<<endl;
        cout<< " NOMBRE  : " << per.nombre << endl;
        cout<< " APELLIDO: " << per.apellido << endl;
        cout<< " CORREO  : " << per.email << endl;
        cout<< " APODO   : " << per.alias << endl;
        cout<< " ==================================="<<endl;
}

////===========================================================================
//// FUNCION   : void modificar_dato_persona(int opc, int id_persona, char* nuevo_dato).
//// ACCION    : Dependiendo de la opc recibida, modifica el contacto o lo elimina
//// PARAMETROS: int opc, int id_persona, char* nuevo_dato
//// DEVUELVE  : NADA.
////---------------------------------------------------------------------------
void modificarContacto(int opc, int id_persona, char* nuevo_dato){//modificar_dato_persona

    FILE *arch_per = fopen(ruta_persona, "rb+" );
    if(arch_per == NULL)
        exit(99);
    persona per;

    while(fread(&per, sizeof(persona),1,arch_per)){
        if ( id_persona == per.id_persona && !per.eliminado){
            switch(opc){
                case 1:
                    strcpy(per.apellido, nuevo_dato);
                break;
                case 2:
                    strcpy(per.nombre, nuevo_dato);
                break;
                case 3:
                    strcpy(per.alias, nuevo_dato);
                break;
                case 4:
                    strcpy(per.email, nuevo_dato);
                break;
                case 5:
                    per.eliminado = true;
                break;
            }
            //TODO: aca breakpoint
            fseek(arch_per, -sizeof(per)*per.id_persona, SEEK_CUR);
            fwrite(&per, sizeof(persona), 1,  arch_per);
            fclose(arch_per);

            if (opc == 5)
                cout<<"Contacto Eliminado"<<endl;
            else
                cout<<"Contacto Modificado"<<endl;
            sys::msleep(2);
            break;
        }
    }
    fclose(arch_per);
    cin.get();
}

////===========================================================================
//// FUNCION   : void opciones_modificacion_contacto().
//// ACCION    : opciones_modificacion_contacto
//// PARAMETROS: persona per
//// DEVUELVE  : NADA.
////---------------------------------------------------------------------------
void opciones_modificacion_contacto(persona per)
{
    int opci;
    bool salir = false;
    char nuevo_dato[50];
    sys::cls();
    mostrarContacto(per);
    cout<<endl<<endl;

    while (!salir)
    {
        menu_mod_contacto();
        cin>>opci;
        cin.ignore();

        switch(opci)
        {
            case 1:{
                cout<<"Ingrese el nuevo Apellido  : ";
                sys::getline(nuevo_dato, 50);
                modificarContacto(1, per.id_persona, nuevo_dato);
            }break;

            case 2:{
                cout<<"Ingrese el nuevo Nombre  : ";
                sys::getline(nuevo_dato, 50);
                modificarContacto(2, per.id_persona, nuevo_dato);
            }break;

            case 3:{
                cout<<"Ingrese el nuevo Alias  : ";
                sys::getline(nuevo_dato, 50);
                modificarContacto(3, per.id_persona, nuevo_dato);
            }break;

            case 4:{
                cout<<"Ingrese el nuevo Correo  : ";
                sys::getline(nuevo_dato, 50);
                modificarContacto(4, per.id_persona, nuevo_dato);
            }break;

            case 0:
                salir = true;
            break;

            default:
                cout<<"Opcion incorrecta"<<endl;
            break;
        }
    }
}

#endif // REGISTROPERSONAS_H_INCLUDED
