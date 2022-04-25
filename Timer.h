#include <chrono>
#include <string>
#include <iostream>
#include <fstream>

class Timer {
public:
    Timer(const std::string &name) : _name(name) {};

    void start() {
        _begin = std::chrono::high_resolution_clock::now();
    }

    void stop(const std::string &arr_name) {
        _end = std::chrono::high_resolution_clock::now();
        _duration_time = _end - _begin;
        std::cout << arr_name << " : " << _duration_time.count() << " ms." << std::endl;
        std::string filename = _name + ".txt";
        std::ofstream record;
        record.open(filename, std::ios_base::app);
        record << arr_name << " : " << _duration_time.count() << " ms" << std::endl;
        record.close();
    }
    ~Timer() {};
private:
    std::string _name;
    std::chrono::time_point<std::chrono::high_resolution_clock> _begin;
    std::chrono::time_point<std::chrono::high_resolution_clock> _end;
    std::chrono::duration<double, std::milli> _duration_time;
};