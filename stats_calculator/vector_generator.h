  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 19 de noviembre de 2023  
  * @brief un programa que genere (devuelva) un vector con size componentes.
           Esas componentes (elementos del vector) se inicializarán con valores
           generados aleatoriamente en el intervalo (lower, upper).
  *
  */

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

std::vector<double> GenerateVector(const int size, const double lower, const double upper);
