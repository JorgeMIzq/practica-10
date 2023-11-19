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
#include "stats_calculator.h"

void CalculateStats(const std::vector<double>& vec, double& max, double& min, double& avg) {
  // Verificar si el vector está vacío
  if (vec.empty()) {
    std::cerr << "Error: El vector está vacío." << std::endl;
    return;
  }
  // Inicializar max y min con el primer elemento del vector
  max = min = vec[0];
  avg = 0.0;
  // Calcular máx, min y suma para el promedio
  for (const auto& value : vec) {
    if (value > max) {
      max = value;
    }
    if (value < min) {
      min = value;
    }
    avg += value;
  }
  // Calcular el promedio dividiendo la suma entre el tamaño del vector
  avg /= vec.size();
}

