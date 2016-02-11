#include <string>
#include <sstream>
#include <stdexcept>
#include "patch.h"

using  namespace std;

namespace patch
{
  template < typename T > std::string to_string( const T& n )
  {
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
  }
}
