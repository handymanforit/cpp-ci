#pragma once

using namespace std;

/*! \brief A class for Calculator
 *  Meant for doing calculator based operations
 *  - Performs Add operation.
 *  - Performs Substract operation.
 *  - Performs Multiply operation.
 */
class Calculator
{
public:
    //! Default Constructor for the class
    Calculator();

    //! Constructor for the class with parameters
    /*!
        \param vone one pass through
        \param vtwo two pass through
        \param vthree three pass through
    */
    Calculator(int vone, int vtwo, int vthree);

    int varone; //!< varone for storing any temp value
    int vartwo; //!< vartwo for storing any temp value
    int varthree; //!< varthree for storing any temp value


    //! Method to perform calculations
    /*!
        \param x one pass through
        \param oper pass through
        \param y three pass through
    */
    double Calculate(double x, char oper, double y);
};