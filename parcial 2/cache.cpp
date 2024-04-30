#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <pair>
#include <unordered_map>

using namespace std;

/*la memoria principal si debe ser un mapa ya que es necesario relacionar dato con direccion*/

/*opcion 1 implemenacion con clases  y mapas

class Cache {
    private:
        unordered_map <string,pair<string, string>> mem; /*la clave es la etiqueta, el valor 2 es el dato y el valor 1 el desplazamieno 
        int tamaño;
    public:
    void LRU();  /*en esta opcion seria hacer una cola con las pocisiones usadas y reemplazar la que salga al sacar de la cola
    string read();
    void write();


}*/


/*opcion 2 implemenacion con clases  y vectores */ 
class Cache {
    private:
        vector  <vector<string,string, string>> mem; /*bit de validez, adress, data*/
        int tamaño;
    public:
    Cache(int tam){
        tamaño = tam;
        mem.resize(tamaño);
        for(int i = 0; i < tamaño; ++i){
            mem[i][0] = '0';
        }
    }
    void LRU(string dato); /*en esta opcion seria reemplazar la primera posicion de la lista*/
    string read();
    void write();

}



/*opcion 3 implemenacion con  vectores 

vector <int,int> cache;
void LRU(vector<string,pair<string, string>> cache ); /*en esta opcion seria reemplazar la primera posicion de la lista
string read();
void write();
*/

