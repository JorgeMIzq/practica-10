  /** 
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 20 de noviembre de 2023 
  * @brief Write a function that returns the position of the maximum
           element of v[0..m]. If there is a tie, the smaller position
           must be returned.
  *
  */

#include <vector>

int position_maximum(const std::vector<double>& v, int m) {
  // Mira si m se encuentra en el rango
  if (m < 0 || m >= v.size()) {
    return -1; //devuelve un error si no se encuentra
  }
  double max_value = v[0];
  int max_position = 0;
  // itera en el vector desde 0 hasta m
  for (int i = 1; i <= m; ++i) {
    if (v[i] > max_value) {
      // si encuentra un nuevo valor, cambiar las var
      max_value = v[i];
      max_position = i;
    }
  }
  // Devuelve la maxima posicion del vector
  return max_position;
}
