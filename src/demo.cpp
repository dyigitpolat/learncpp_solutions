#include "demo.hpp"

//std headers
#include <iostream>

Demo::Demo(const std::function<void()> &function, const std::string &title) :
    m_function{function}, m_title{title}
{

}

void Demo::play() const
{
    std::cout << "Selection: " << m_title << "..." << std::endl;
    std::cout << std::endl;
    m_function();
}

const std::string& Demo::get_title() const
{
    return m_title;
}