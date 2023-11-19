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

#include <vector>
#include "vector_concatenator.h"

std::vector<double> ConcatenateVectors(const std::vector<double>& vec1, const std::vector<double>& vec2) {
  // Crear un nuevo vector que será la concatenación de vec1 y vec2
  std::vector<double> concatenated_vector;
  // Concatenar vec1 y vec2 utilizando push_back
  for (const auto& value : vec1) {
    concatenated_vector.push_back(value);
  }
  for (const auto& value : vec2) {
    concatenated_vector.push_back(value);
  }
  return concatenated_vector;
}

