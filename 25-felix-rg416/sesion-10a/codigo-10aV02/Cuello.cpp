#include "Cuello.h"

Cuello::Cuello() {}

Cuello::~Cuello() {}

void Cuello::configurar() {
  Cuello::motorcillo.attach(8);
}

void Cuello::moverCuello() {
  // sentido positivo
  for (int i = 0; i <= 180; i++) {
    // servoMotor.write(i);
    delay(25);
  }
  // sentido negativo
  for (int i = 179; i > 0; i--) {
    Cuello::motorcillo.write(i);
    delay(25);
  }

// void Cuello::amenaza() {
// que se diriga a la posicion de los sensores
// }
}
