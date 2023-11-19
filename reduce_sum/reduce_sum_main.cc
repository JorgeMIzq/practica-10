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

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "vector_generator.h"
#include "reduce_sum.h"

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cout << "Modo de uso: " << argv[0] << " <size> <lower> <upper>" << std::endl;
    return 1;
  }
  // Convertir argumentos de línea de comandos a valores numéricos
  int size = std::atoi(argv[1]);
  double lower = std::atof(argv[2]);
  double upper = std::atof(argv[3]);
  // Generar el vector utilizando la función GenerateVector
  std::vector<double> my_vector = GenerateVector(size, lower, upper);
  for (const auto& value: my_vector) {
    std::cout << "Component: " << value << std::endl;
  }
  // Calcular la suma de los valores en el vector utilizando ReduceSum
  double sum_result = ReduceSum(my_vector);
  // Imprimir la suma
  std::cout << "La suma de los valores en el vector es: " << sum_result << std::endl;
  return 0;
}

