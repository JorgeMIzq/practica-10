  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 19 de noviembre de 2023 
  * @brief un programa que que incluya una función que tome como parámetros 
           dos vectores y devuelva como resultado un tercer vector que sea
           la "concatenación" de los dos vectores pasados.
  *
  */

#include <iostream>
#include <vector>
#include "vector_generator.h"
#include "vector_concatenator.h"

int main(int argc, char* argv[]) {
  if (argc != 7) {
    std::cout << "Modo de uso: " << argv[0] << " <size1> <lower1> <upper1> <size2> <lower2> <upper2>" << std::endl;
    return 1;
  }
  // Convertir argumentos de línea de comandos a valores numéricos
  int size1 = std::atoi(argv[1]);
  double lower1 = std::atof(argv[2]);
  double upper1 = std::atof(argv[3]);
  int size2 = std::atoi(argv[4]);
  double lower2 = std::atof(argv[5]);
  double upper2 = std::atof(argv[6]);
  // Generar los vectores utilizando la función GenerateVector
  std::vector<double> vec1 = GenerateVector(size1, lower1, upper1);
  std::vector<double> vec2 = GenerateVector(size2, lower2, upper2);
  // Imprimir los componentes de los vectores originales
  std::cout << "Vector 1:" << std::endl;
  for (const auto& value : vec1) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
  std::cout << "Vector 2:" << std::endl;
  for (const auto& value : vec2) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
  // Concatenar los vectores utilizando la función ConcatenateVectors
  std::vector<double> concatenated_vector = ConcatenateVectors(vec1, vec2);
  // Imprimir el resultado de la concatenación
  std::cout << "Vector Concatenado:" << std::endl;
  for (const auto& value : concatenated_vector) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
  return 0;
}

