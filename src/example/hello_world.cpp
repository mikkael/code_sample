#include <code_sample.hpp>

#include <iostream>

namespace {

CODE_SAMPLE( hello_world                    // name (must be a valid identifier)
           , "hello world code example"     // description
           , "hello", "world", "std::cout") // any number of tags
{
	std::cout << "--> hello, world" << std::endl;
}

}
