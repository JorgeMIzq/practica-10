  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 19 de noviembre de 2023 
  * @brief un programa que que tome como parámetro un vector y calcule los
           valores máximo, mínimo y promedio de todos los valores 
           almacenados en el vector.
  *
  */

#include <iostream>
#include <vector>
#include "vector_generator.h"
#include "stats_calculator.h"

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
  // Imprimir los componentes del vector
  std::cout << "Vector generado:" << std::endl;
  for (const auto& value : my_vector) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
  // Calcular estadísticas utilizando la función CalculateStats
  double max, min, avg;
  CalculateStats(my_vector, max, min, avg);
  // Imprimir los resultados
  std::cout << "Máximo: " << max << std::endl;
  std::cout << "Mínimo: " << min << std::endl;
  std::cout << "Promedio: " << avg << std::endl;
  return 0;
}

