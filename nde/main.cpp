#include "nde.hpp"
#include <iostream>

int main()
{
  /*
  nde::Matrix<double> a { 
     { 2, 1, 1, 0 },
     { 4, 3, 3, 1 },
     { 8, 7, 9, 5 },
     { 6, 7, 9, 8 }
  };

  nde::gaussElim(a);
  */

  nde::Matrix<double> a {
    { 2, 1 },
    { 5, 7 }
  };

  std::vector<double> b { 11, 13 };

  std::vector<double> x0 { 1, 1 };

  auto x = nde::jacobiIterate(a,b,x0, 0.00000000001);

  for (auto && e : x ) std::cout << e << " ";
  std::cout << "\n";



  /*
  auto const y = nde::logistic<double>(2.0, 1.4, 2.0);
  auto const f = nde::solcc<double>(1.0, 0.0, 2.0, 3.0, -2.0);

  std::cout << y(10.0) << std::endl;
  std::cout << f(3.0) << std::endl;
  std::cout << nde::factorial<int>(4) << std::endl;

  nde::Matrix<int> m { 
    { 1, 1, 1 },
    { 1, 1, 1 },
    { 1, 1, 1 } 
  };

  nde::Matrix<int> a { 
     { 2, 2, 2 },
     { 2, 2, 2 },
     { 2, 2, 2 } 
  };

  std::cout << (m + a) << std::endl;
  std::cout << (m - m) << std::endl;

  nde::Matrix<int> p { 
     { 1, 2, 3 },
     { 1, 2, 3 } 
  };

  nde::Matrix<int> q { 
     { 4, 5, 6 },
     { 4, 5, 6 },
     { 4, 5, 6 } 
  };

  std::cout << (p * q) << std::endl;
  */



}
