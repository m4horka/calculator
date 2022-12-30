#ifndef CALCULATOR_UNARYOPERATION_H
#define CALCULATOR_UNARYOPERATION_H

template <class T>
class UnaryOperation {
public:
    static T Pow(T a, int n)
    {
        int res = 1;
        while (n) {
            if (n & 1)
                res *= a;
            a *= a;
            n >>= 1;
        }
        return res;
    }
    static T Sqrt(T a, int n)
    {
        double eps = 0.00001;             //допустимая погрешность
        double root = a / n;            //начальное приближение корня
        double rn = a;                  //значение корня последовательным делением
        while(Abs(root - rn) >= eps){
            rn = a;
            for(int i = 1; i < n; i++){
                rn = rn / root;
            }
            root = 0.5 * ( rn + root);
        }
        return root;
    }
    static T Abs(T x){ return (x < 0)? -x : x; }
};


#endif //CALCULATOR_UNARYOPERATION_H
