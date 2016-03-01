#ifndef		VECTOR_H
#define		VECTOR_H

#include <string>
using namespace std;

class Vector{
      private:
        double	 coords[4];
      public:

	/*
	* Initializer with an Array
	*/
	
	Vector(double tab[4]){
	  for (int nb = 0;  nb < 4; nb++){
	    coords[nb] = tab[nb];
	  }
	};

	/*
	 * Initializer with 4 values
	 */
	Vector(double one, double two, double viva, double lalgeria){
	  coords[0] = one;
	  coords[1] = two;
	  coords[2] = viva;
	  coords[3] = lalgeria;
	};

	/*
	 *  Print and toString methods
	 */
	void     printf();
	string   toString();

	/*
	 * Getters and setters
	 */
	double   get(const int) const;
	int      set(const int, const double);
	void     set_x(double);
	void     set_y(double);
	void     set_z(double);
	void     set_d(double);

	double   x();
	double   y();
	double   z();
	double   d();

	/*
	 *  Distance from (0,0,0) in (x, y, z) 
	 */
	double   length();

	/*
	 * Operator Overloading
	 */
	Vector  operator+(const Vector&);
	Vector  operator*(const double&);
	double  operator*(const Vector&); //Dot Product 
	Vector  operator-(const Vector&);
	void    operator=(const Vector&);
	bool    operator==(const Vector& right);
	bool    operator!=(const Vector& right);
	Vector& operator+=(const Vector& right);
	Vector& operator-=(const Vector& right);
	Vector& operator*=(const double& right);

	/*
	 * Default Constructor
	 */
	Vector(){
	  for (int i = 0; i < 4; i++){
	    coords[i] = 0;
	  }
	};
};

#endif
