#include "model.h"

Model::Model(double _length, double _width)
    : length(_length), width(_width) {

}

void Model::setLength(double length) {
    this->length = length;
}

double Model::getLength() {
    return this->length;
}

void Model::setWidth(double width) {
    this->width = width;
}

double Model::getWidth() {
    return this->width;
}

double Model::calcSquare() {

    double square = this->length * this->width;

    return square;

}
