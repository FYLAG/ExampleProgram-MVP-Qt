#ifndef IVIEW_H
#define IVIEW_H

/*! \interface IView
    MVP view interface for calculating the area of a rectangle.
*/

class IView {

public:
    /*! Method for setting the length of a rectangle */
    virtual void setLength(double) = 0;
    /*! Method for getting the length of a rectangle */
    virtual double getLength() = 0;
    /*! Method for setting the width of a rectangle */
    virtual void setWidth(double) = 0;
    /*! Method for getting the width of a rectangle */
    virtual double getWidth() = 0;
    /*! Method for setting the square of a rectangle */
    virtual void setSquare(double) = 0;

public: // signals
    /*! Signal to call a specific slot */
    virtual void signalCalcSquare() = 0;

};

#endif // IVIEW_H
