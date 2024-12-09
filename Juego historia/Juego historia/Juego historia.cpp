// Juego historia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string.h>
#include <string>

struct arma {
    int escopeta;
    int rifle;
    int escudo;
    int katana;
};
void ArmasDamage(arma& arma) {
    arma.escopeta = std::rand() % 71;
    arma.rifle = std::rand() % 51;
    arma.escudo = std::rand() % 30;
    arma.katana = std::rand() % 80;
}

// Estructura para representar a un jugador
struct Player {
    int id;
    int strength;
    int agility;
    int intelligence;
    int defense;
};


int main()
{
    int opcion;
    std::string nombre;
    setlocale(LC_ALL, "en_MX.UTF-8");
    
    std::cout << "-Musica epica-" << std::endl;
    std::cout << "Hace mucho tiempo sucedio una catastrofe en todo en mundo \n";
    std::cout << "lo que dejo a muchas civizaciones en ruinas dejando acorralada a la humanidad.\n";
    std::cout << "Viviendo en ciudades altamanete protegidas y con murallas enormes,\n";
    std::cout << "donde en la actualidad solo quedaban 5 ciudades";
    std::cout << "esta catastrofe \nfue cuasado por la apertura de las barreras dimensionales entre mundos\n";
    std::cout << "y con estas aperturas vinieron también los mostros de otros mundos y\n";
    std::cout << "otras civilizaciones que querian conquistar el planeta tierra.\n";
    std::cout << "Gracías a todo esto también aparecion anomalias en el mundo\n";
    std::cout << "estas les otorgan poderes misterisos a quienes las encuentran.\n";
    std::cout << "Dentro de todo esto nacíste tu, logrando sobrevivir a duras penas hasta la adultez\n\n";

    std::cout << "Donde un dia te encuentras con un cartel que dice, *Se busca carroñeros*" << std::endl;
    std::cout << "y escuchas por ahí a personas hablando de eso,\n";
    std::cout << "Extraño: Oye los carroñeros no son las personas que salen de los muros?\n";
    std::cout << "Extraña: Creo que si algunos elegidos hasta tienen poderes y ganan mucho dinero\n";
    std::cout << "En busca de dinero y logros te decides en convertir en un carroñero\n\n\n";
    system("pause");
    system("cls");
    std::cout << "*Entras a una taberna donde se te acerca un hombre de mediana edad*\n";
    std::cout << "Estraño: Hola tu eres el nuevo recluta del que me hablaron? como te llamas?\n";
    std::cin >> (nombre);
    std::cout << "Extraño: Ah! Mucho gusto, yo soy Peña\n";
    std::cout << "Estas listo para la exploración que vamos a tener hoy?\n";
    std::cout << "1. si 2. no" << std::endl;
    std::cin >> opcion;
    switch (opcion) {
    case 1:
        std::cout << "Peña: Me alegro chaval, si necesitas algo me avisas. De todas maneras ve a la herreria a prepararte" << std::endl;
        break;

    case 2:
        std::cout << "Peña: Si no lo estas sera mejor que pases a la herreria para prepararte, puede pasar cualquier cosa" << std::endl;
        break;
    }
    system("pause");
    system("cls");

    std::cout << "*Entras a la herreria*" << std::endl << " Donde te encuntras con una mujer" << std::endl;
    std::cout << "Extraña: Hey tu eres de los nuevos reclutas? Vienes aqui para equiparte no?" << std::endl;
    std::cout << "Elige el arma que quieras" << std::endl;
    std::cout << "1.Escopeta corta de chatarra y un cuchillo de combate \n2.Rifle de asalto de cerrojo de chatarra \n4.Katana de hierro\n";
    std::cin >> opcion;
    switch (opcion) 
    {
    case 1:
        std::cout << "*Te acercas al arma*\n Al tocarla ves como esta se ilumina en un brillo leve pero intenso\n";
        std::cout << "Extraña: Que buena elección, por cierto soy Helen\n";
        std::cout << "Helen: Adios\n\n";
        system("pause");
        system("cls");
        std::cout << "Al día siguientes partes a la exploración\nSaliendo de los muros por primera vez te das cuenta de lo destrozado que quedo el mundo\n";
        std::cout << "Peña: Así quedo el mundo despues de la llegada de los monstruos\nAsi que no bajes la guardia\n";
        std::cout << "Llegan a la zona de exploración\nDonde lo prmero que te encuentras es un mostruo parecido a un oso mutado\n";
        std::cout << "*Entras en combate*\n";
        std::cout << "1.Escopetazo 2.Pegar con el cuchillo";
        std::cin >> opcion;
        if (opcion == 1) {
            std::cout << "Al momento de acercarte al mosntruo este te suelta un zarpazo\n";
            std::cout << "Al ver que no puedes esquivar Peña te empuja y sale herido\n";
            std::cout << "Logran derrotar a la creatura pero con varios de sus miembros heridos\n";
            std::cout << "Aunque parezca insensato decien seguir\n";
            std::cout << "Por la falta de recursos encontrados\n";
            system("pause");
            system("cls");
            std::cout << "Despues de avanzar por un rato encuentran un edificio extraño y sienten una fuerta presencia\n";
            std::cout << "Antes de que tomen una decisión aparece un dragon sobrevolandolos\n";
            std::cout << "Llevandolos a todos a meterse al edificio\n";
            std::cout << "Al momento de buscar cosas dentro del edificio se encuentran con un portal extraño\n";
            std::cout << "Al segundo siguiente eres atacado por unos mostruos extraños que son altos, delgados y rapidos";
            std::cout << "Como vez que tienen mucho heridos decides tocar el portal con la esperanza de conseguir los poderes de los que oiste\n";
            std::cout << "Peña al ver lo que estas a punto de hacer te grita...\n";
            std::cout << "Peña: NO LO HAGAS CHAVALIIIINNN!!!\n\n";
            std::cout << "De repente todo se oscurece \n";
            std::cout << "*Abres los ojos*\n\nTodo lo que ves es un espacio vacio donde te habla un ser extraño\n";
            std::cout << "A los pocos segundos vuelves a la realidad\n";
            std::cout << "Y te das cuenta de como tu compañeros estan peleando por su vida\n";
            std::cout << "Esto hace que liberes un poder desconocido que ahuyenta a los mosntruos y cura a los heridos\n";
            std::cout << "Despues de todo eso logran volver a la ciudad\n Donde con tus habilidades la ciudad vuelve a tener esperanzas\n";
            std::cout << "Pero no sabes si quedarte o irte a otra ciudad\n Por que esta aunque sea donde haz vivido toda la vida esta en las ultimas\n";
            std::cout << "1.Quedarte en la ciudad 2.Irte a buscar otra ciudad\n";
            std::cin >> opcion;
            if (opcion == 1)
            {
                std::cout << "Gracías a esa decisión la ciudad pudo avanzar y no caer en la ruina\n";
                std::cout << "Con el paso del tiempo te transformas en su lider e intentan recuperas su mundo\n";
            }
            else {
                std::cout << "Al momento de irte vez como dejas la muralla que divide todo lo que fue de lo que será\n";
                std::cout << "Mirando como esas viejas ilusiones pasando la muralla se hacen realidad\n";
                std::cout << "Pero al llegar otra ciudad te das cuenta que esta en ruinas\n Viajas a otra y esta igual\n";
                std::cout << "Después de un tiempo por fin encuentras otra ciudad a cientos de miles de km de distancia de la tuya\n";
                std::cout << "Con eso te das cuenta que el mundo esta peor de lo que creias y decides cambiar eso y volver a tu ciudad\n";
                std::cout << "Pero cuando llegas la ciudad a sido arrasada\n";
                std::cout << "Decidiendo así conseguir tu venganza contra los mosntruos\n";

            }
        }
        else 
         {
            std::cout << "Sales corriendo al mostruo y se lo clavas en el ojo\n";
            std::cout << "Lo que ayuda mucho a tu aliados y salen con poco heridos del combate\n";
            std::cout << "Siguen avanzado y buscando recursos";
            system("pause");
            system("cls");
            std::cout << "Despues de avanzar por un rato encuentran un edificio extraño y sienten una fuerta presencia\n";
            std::cout << "Antes de que tomen una decisión aparece un dragon sobrevolandolos\n";
            std::cout << "Llevandolos a todos a meterse al edificio\n";
            std::cout << "Al momento de buscar cosas dentro del edificio se encuentran con un portal\n";
            std::cout << "Es entonces donde son atacados por unos mosntruos\n";
            std::cout << "Pero gracias a que todos sus miemrbos estaban bien lograron repeler la amenaza\n";
            std::cout << "Despues de terminar de checar todo el edificio se deciden \n Pero tu aprovechas a llevarte donde esta puesto el portal";
            std::cout << "Cuando llegan a la ciudad van a vender todo lo que encontraron\n";
            std::cout << "Es ahí donde te separas y vas con Helen a preguntarle que es el portal\n";
            std::cout << "*Sacas el portal*\nHelen: Qué es eso?\n";
            std::cout << "Es un portal? Pero no sabia que se podian mover\n";
            std::cout << "Por eso le dices que se lo traes porque piensas que puede ser algo interesante\n";
            std::cout << "Helen te dice que esta bien\n";
            std::cout << "Qué la va a investigar\nPero te pide que te vayas para que nadie sospeche\n";
            std::cout << "Pero es ahi donde te das cuenta de que tiene un boton rojo\n";
            std::cout << "1.Tocar el boton 2.No hacerlo\n";
            std::cin>>opcion;
            if (opcion == 1) 
                std::cout << "Al tocar el boton rojo se abre un hoyo negro y desaparece la ciudad\n";
            else 
                std::cout << "Despues de un tiempo helen logra decifrar el portal y hacer tecnolgia con esta \n";
            std::cout << "Con esto sigues un carroñero pero poco a poco tu ciudad va teniendo ananvaces\n";
            std::cout << "Gracias a la tecnologia del portal\n";
            std::cout << "Y las exploraciones se vuelven más seguras y con el objetivo de econtrar un nuevo portal\n";
         }
        break;

    case 2:
        std::cout << "*Te acercas al arma*\n Al tocarla se como esta se ilumina en un brillo leve pero intenso\n";
        std::cout << "Extraña: Que buena elección, por cierto soy Helen\n";
        std::cout << "Helen: Adios\n\n";
        std::cout << "Sales de las murallas y empiezas a alegarte poco a poco de la unica cosas que conoces\n";
        std::cout << "Despues de estar dos días afuera se encuentran con su primer grupo de monstruos\n";
        std::cout << "Los cuales los atacan pero con mucho esfuerzo y brindando fuego de cobertura\n";
        std::cout << "Logran repelerlos\n";
        std::cout << "Más tarde ese mismo día ven una gran manada de mostruos\n";
        std::cout << "Por lo que decíden volver a la ciudad el día siguiente para avisarles\n";
        std::cout << "Y prepararse para enfrentarselos\n";
        std::cout << "Al día siguiente empiezan su regreso a la ciudad \n";
        std::cout << "Ya casi a punto de llegar a la ciudad se ven emboscados por un grupo de monstruos\n";
        std::cout << "Masacrado a casi a todos y los que quedan vivos intentan volver a la ciudad desesperados\n";
        std::cout << "Tu al ver a todos peleando debes tomar una descición\n";
        std::cout << "1.Huir 2.Pelear\n";
        std::cin >> opcion;
        if (opcion == 1) {
            std::cout << "Intentas llegar a la ciudad pero vez como los monstruos corren a ella y rompen una parte de ella\n";
            std::cout << " y todo lo que puede hacer es ver como la ciudad es empezada a ser invadida\n";
            std::cout << "Es ahí cuando recibe un mordisco en su cara\n";
            std::cout << "Muriendo en el acto";
        }
        else
            std::cout << "Al ver a tus compañeros pelear decides hacerlo con ellos y arriesgar ru vida\n";
        std::cout << "Cuando vez que ya no va a ver salida decides tomar unas granadas de otro compañero fallecido\n";
        std::cout << "Y te sacrificas explotando las granadas\n";
        std::cout << "Gracías a tu sacrificio, muchas personas lograron llegar y avisar a la ciudad del peligro proximo y así salvarse\n";
        std::cout << "Lo que nadie sabía es que tu arma logro bloquear parte de la exploción\n";
        std::cout << "Lo que mostro que ese brillo que viste fue por algo real \n";
        std::cout << "Es en ese momento donde el prota decide si quedarse o irse\n";
        std::cout << "1.quedarse\n 2.irse";
        std::cin >> opcion;
        if (opcion == 1)
        {
            std::cout << "Poco a´poco vas ganando conociemiento de como hacer tu trabajo\n";
            std::cout << "Y te vuelves uno de los mejores carroñeros de la ciudad";
        }
        else
        {
            std::cout << "Miras por ultima vez hacía atras y dejas todo por ir a una nueva aventuras\n";
            std::cout << "Desapareciendo por completo\n";
            std::cout << "Y gracias al poder del arma se te las puedes valer fuera de la ciudad fue\n";

        break;

    case 3:
        std::cout << "*Te acercas al arma*\n Al tocarla se como esta se ilumina en un brillo leve pero intenso\n";
        std::cout << "Extraña: Que buena elección, por cierto soy Helen\n";
        std::cout << "Helen: Adios\n\n";

        break;
    }

    system("pause");
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
