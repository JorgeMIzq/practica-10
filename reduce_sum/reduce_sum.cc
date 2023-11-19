  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date  19 de noviembre de 2023
  * @brief un programa que suma todos los valores almacenados como número entero 
  *
  */

#include <vector>
#include "reduce_sum.h"

int ReduceSum(const std::vector<double>& vec) {
  int sum = 0;
  for (const auto& value : vec) {
    sum += static_cast<int>(value);
  }
  return sum;
}
