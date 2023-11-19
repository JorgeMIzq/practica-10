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

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cout << "Modo de uso: " << argv[0] << " <size> <lower> <upper>" << std::endl;
    return 1;
  }
  // Convertir argumentos de línea de comandos a valores numéricos
  int size = std::atoi(argv[1]);
  double lower = std::atof(argv[2]);
  double upper = std::atof(argv[3]);
  // Generar el vector utilizando la función
  std::vector<double> my_vector = GenerateVector(size, lower, upper);
  // Imprimir los componentes del vector
  for (const auto& value : my_vector) {
    std::cout << "Component: " << value << std::endl;
  }
  return 0;
}
