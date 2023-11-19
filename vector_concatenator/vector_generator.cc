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

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "vector_generator.h"

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  std::vector<double> result;    
  // Inicializar la semilla para la generación de números aleatorios
  std::srand(std::time(0));
  // Generar valores aleatorios y agregar al vector
  for (int i = 0; i < size; ++i) {
    double random_value = lower + static_cast<double>(std::rand()) / RAND_MAX * (upper - lower);
    result.push_back(random_value);
  }
  return result;
}

