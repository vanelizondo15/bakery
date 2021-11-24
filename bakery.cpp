# include <iostream>  // Para utilizar cin y cout
# include <stdlib.h>  // Librería para poder usar comandos del sistema y funciones de conversion de datos
# include <fstream>   // Para no tener que usar el prefijo std antes de cin y cout

using namespace std;

int main()
{
    
    float pastel;
    float carrito;
    float cantidad;
    float i;
    int a;
    int opcion;
    float total;
    total = 0;
    carrito = 0;
    const string usuario = "USUARIO";
    const string contra = "12345";
    string user, password,star1;
    const int intentos=3;
    int cont=0;
    double pago;
    double cambio;
    float estrella;
    int mayor=0;
    int menor=1000;
    int num[5]={280,300,250,280,325};


        
    do{

        cout << "Ingrese su usuario: ";
        cin>> user;
        cout << "Ingrese su contraseña: ";
        cin >> password;
        cont++;

    }while((usuario != user || contra != password) && cont < intentos);

    if(cont == intentos){
        cout<<"Se han agotado tus números de intentos";
    }
    else{
        do
    {
        cout << "           " << endl << endl;
        cout << "   \t\t\t\t\t\t\t    BIENVENIDO A BAKERY" << endl;
        cout << "   \t\t\t\t\t\t\t --------------------------    " << endl << endl;
        cout << "   \t\t\t\t\t\t\t1 .- Catálogo" << endl;
        cout << "   \t\t\t\t\t\t\t2 .- Total de la compra" << endl;
        cout << "   \t\t\t\t\t\t\t3 .- Buscar un producto más barato" << endl;
        cout << "   \t\t\t\t\t\t\t4 .- Calificar el servicio" << endl;
        cout << "   \t\t\t\t\t\t\t5 .- Salir" << endl << endl<< endl;
        cout << "Elije una opcion: ";
 

        cin >> opcion;
        cout << endl;
        switch(opcion)
        {
            case 1:
                cout << "Catálogo" << endl;
                cout << "-----------" << endl << endl;
                cout << "\t1 .- Pastel 3 leches con fresa - $280" << endl;
                cout << "\t2 .- Pastel tentación mango ---- $300" << endl;
                cout << "\t3 .- Cheesecake de fresa ------- $250" << endl;
                cout << "\t4 .- Pastel Carlos V ----------- $280" << endl;
                cout << "\t5 .- Pastel Selva Negra -------- $325" << endl;             
                cout << "           " << endl;
                cout << "Ingrese una opción: ";
                cin >> pastel;
                cout << endl;

                if (pastel==1) {
                    cout <<"Cuantos quiere? ";
                    cin >> cantidad;
                    total = 280 * cantidad;
                } 
                else {
                    if(pastel==2) {
                        cout <<"Cuantos quiere? ";
                        cin >> cantidad;
                        total = 300 * cantidad;
                    } 
                    else {
                        if(pastel==3) {
                            cout <<"Cuantos quiere? ";
                            cin >> cantidad;
                            total = 250 * cantidad;
                        } 
                        else {
                            if(pastel==4) {
                                cout <<"Cuantos quiere? ";
                                cin >> cantidad;
                                total = 280 * cantidad;
                            } 
                            else {
                                if(pastel==5) {
                                    cout <<"Cuantos quiere? ";
                                    cin >> cantidad;
                                    total = 325 * cantidad;
                                }
                                else{
                                    cout<<"Opción incorrecta, elige un número del menú";
                                }
                            }
                        }    
                    }
                }
                

                i= i +1;
                carrito = carrito + total;
                break;

            case 2:
                cout << "           " << endl;
                cout << "           " << endl;
                cout << "El total del pedido es de $" << carrito << endl;
                cout << "¿Con cuánto pagará? ";
                cin >> pago;
                while(pago < carrito){
                    cout << "Disculpe, debe de pagar con una cantidad mayor o igual al precio final"<<endl;
                    cout << endl;
                    cout << "¿Con cuánto dinero pagará?: ";
                    cin >> pago;    
                    cout << endl;
    
                }
                     // Se calcula el cambio a recibir
                cambio = pago - carrito;
                cout << "Su cambio es de: $ "<<cambio<<endl;
                for(int a=0; a<10;a++){
                    
                }
                    cout<<endl;
                
                
                break;
            
            case 3:
                cout << "           " << endl;
                cout << "¿Qué producto desea buscar el mayor o menor? " << endl;
                for(int a=0;a<5;a++){
                    if(num[a]>mayor){
                        mayor= num[a];
                    }
                    else {
                        if(num[a]<menor && menor != 0){
                            menor= num[a];
                        }
                    }                       
                }
                cout << "El costo mayor es de $" <<mayor <<endl;
                cout << "El costo menor es de $" <<menor <<endl;

                break;

            case 4:
                cout << "           " << endl;
                cout << "   * CALIFICACIÓN CON ESTRELLAS * " << endl;
                cout << "--------------------------------------" << endl << endl;
                cout << "\t1. Estrella1 * = 20% " << endl;
                cout << "\t2. Estrella2 ** = 40%" << endl;
                cout << "\t3. Estrella3 ***= 60%" << endl;
                cout << "\t4. Estrella4 ****= 80%" << endl;
                cout << "\t5. Estrella5 *****= 100%" << endl;             
                cout << "           " << endl;
                cout << "¿Con cuántas estrellas puntuarías tus pasteles?" << endl;
                cin >> estrella;
                cout << endl;
                if(estrella==1){
                    star1="1 ESTRELLA = 20%";
                }
                else 
                    if(estrella==2){
                        star1="2 ESTRELLAS = 40%";
                        cout << "¡Usted le brindo " << star1 << " a nuestros pasteles, muchas gracias por la retroalimentación!";

                    }
                    else 
                        if(estrella==3){
                            star1="3 ESTRELLAS = 60%";
                            cout << "¡Usted le brindo " << star1 << " a nuestros pasteles, muchas gracias por la retroalimentación!";
                           
                        }
                        else 
                            if(estrella==4){
                                star1="4 ESTRELLAS = 80%";
                                cout << "¡Usted le brindo " << star1 << " a nuestros pasteles, muchas gracias por la retroalimentación!";

                            }
                            else 
                                if(estrella==5){
                                    star1="5 ESTRELLAS =100%";
                                    cout << "¡Usted le brindo " << star1 << " a nuestros pasteles, muchas gracias por la retroalimentación!";

                                }
                                else{
                                    cout<<"Escriba un número del 1-5";
                                }
                break;

            case 5:
                cout << "           " << endl;
                cout << "           " << endl;
                cout << "¡Gracias, vuelva pronto!" << endl;
                break;  
                                  
            default:
                cout << "           " << endl;
                cout << "           " << endl;
                cout << "Por favor ingrese una opción del 1-5." << endl;
            }
            cin.get();
        }
        while (opcion!=5);
        return 0;


 
    }
    


    




}


