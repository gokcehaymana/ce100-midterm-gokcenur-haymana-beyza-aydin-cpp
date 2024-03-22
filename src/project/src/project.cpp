#include "../header/project.h"
#include <stdexcept>

using namespace Coruh::Project;

double Project::add(double a, double b) {
    return a + b;
}

double Project::subtract(double a, double b) {
    return a - b;
}

double Project::multiply(double a, double b) {
    return a * b;
}

double Project::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}