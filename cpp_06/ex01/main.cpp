#include <iostream>
#include <stdint.h>

struct Data
{
	char 	c;
    int 	i;
    float 	f;
    double 	d;
};

uintptr_t	serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data 		data = {'t', 3, 3.6f, 8.23};
	uintptr_t 	raw;
	Data* 		ptr;

    std::cout << "data의 주소: "<< &data << std::endl;
    raw = serialize(&data);
    std::cout << "serialize 이후 raw: " << raw << std::endl;
    ptr = deserialize(raw);
    std::cout << "deserialize 이후 ptr: " << ptr << std::endl;


    std::cout << "c: " << ptr->c << std::endl;
    std::cout << "i: " << ptr->i << std::endl;
    std::cout << "f: " << ptr->f << std::endl;
    std::cout << "d: " << ptr->d << std::endl;

    std::cout << "&data: " << &data << std::endl;
    std::cout << "ptr  : " << ptr << std::endl;

    return (0);
}