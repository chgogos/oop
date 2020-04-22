#include <iostream>
#include <boost/program_options.hpp>

using namespace std;

namespace po = boost::program_options;

int main(int argc, char *argv[])
{
    po::options_description desc("Program options");
    desc.add_options()("help,h", "print info")("option1,o1", po::value<int>(), "dummy option parameter 1");

    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help"))
    {
        cout << desc << endl;
        return 1;
    }
    if (vm.count("option1")){
        cout << "Option1 parameter value set to " << vm["option1"].as<int>() << endl;
    } else {
        cout << "Option1 parameter value not set."<< endl;
    }
}