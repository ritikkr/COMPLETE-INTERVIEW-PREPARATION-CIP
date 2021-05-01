template <class T>
class minElement
{
    T y;
    public:
        minElement(T v) { y = v; }
        void check(T x) { 
            T val = x > y ? y:x;
            cout << val << endl;
        }
    // Complete the class.Make a private variable,constructors and method called
    // check() which takes one parameter and prints the output in new line. 
};
