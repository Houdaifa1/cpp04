
#include "Fixed.hpp"

int main() 
{

    Fixed a;
    std::cout << a << std::endl;

    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout  << b << std::endl;

    std::cout << "Pre-increment ++a: " << ++a << std::endl;

    std::cout << "Post-increment a++: " << a++ << std::endl;

    std::cout << "a after a++: " << a << std::endl;

    Fixed c(1.5f);
    Fixed d(2.25f);
    std::cout << "c < d: " << (c < d) << std::endl;
    std::cout << "c > d: " << (c > d) << std::endl;
    std::cout << "c == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;

    std::cout << "c + d = " << (c + d) << std::endl;
    std::cout << "d - c = " << (d - c) << std::endl;
    std::cout << "c * d = " << (c * d) << std::endl;
    std::cout << "d / c = " << (d / c) << std::endl;

    Fixed e(3.3f);
    Fixed f(4.4f);
    const Fixed g(7.7f);
    const Fixed h(6.6f);

    std::cout << "min(e, f): " << Fixed::min(e, f) << std::endl;
    std::cout << "max(e, f): " << Fixed::max(e, f) << std::endl;
    std::cout << "min(g, h): " << Fixed::min(g, h) << std::endl;
    std::cout << "max(g, h): " << Fixed::max(g, h) << std::endl;

    return 0;
}
