#ifndef MODEL_H
#define MODEL_H

class Model {

public:

    explicit Model(double _length, double _width);
    /*! Method for setting the length of a rectangle */
    void setLength(double);
    /*! Method for getting the length of a rectangle */
    double getLength();
    /*! Method for setting the width of a rectangle */
    void setWidth(double);
    /*! Method for getting the width of a rectangle */
    double getWidth();
    /*! Method for calculating the area of a rectangle */
    double calcSquare();

private:

    double length,  /*!< Rectangle length */
           width;   /*!< Rectangle width */

};

#endif // MODEL_H
