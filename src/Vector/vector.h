#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Vector{
      private:
        double	 coords[4];
      public:
	Vector(double tab[4]){
	  for (int nb = 0;  nb < 4; nb++){
	    coords[nb] = tab[nb];
	  }
	};

	Vector(double one, double two, double viva, double lalgeria){
	  coords[0] = one;
	  coords[1] = two;
	  coords[2] = viva;
	  coords[3] = lalgeria;
	};
	
	void     printf();
	string   toString();

	Vector(){
	  for (int i = 0; i < 4; i++){
	    coords[i] = 0;
	  }
	};
};
