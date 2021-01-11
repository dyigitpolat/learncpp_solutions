#pragma once

//std headers
#include <functional> //std::function
#include <string> //std::string

class Demo
{
private:
    const std::function<void()> m_function;
    const std::string m_title;

public:
    Demo(const std::function<void()> &function, const std::string &title);
    void play() const;
    
    const std::string& get_title() const;

};