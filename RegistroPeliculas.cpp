#include <iostream>
#include <string>
using namespace std;

class Pelicula{
	private:
		string titulo;
		string director;
		int anioLanza;
		
	public:
		Pelicula(string t, string d, int anio) : titulo(t), director(d), anioLanza(anio) {}
		
		void Info(string t, string d, int anio){
			titulo = t;
			director = d;
			anioLanza = anio;
		}
		
		void mostrarInfo(){
			cout << "Pelicula: " << titulo << endl;
			cout << "Director: " << director << endl;
			cout << "Anio de lanzamiento: " << anioLanza << endl;
		}
};

int main(){
	Pelicula peli("End Game", "Anthony Russo y Joe Russo", 2019);
	peli.mostrarInfo();
	
	return 0;
}