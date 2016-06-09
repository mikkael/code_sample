#include <code_sample.hpp>

#include <iostream>

namespace {

CODE_SAMPLE( hello_foo                    // name (must be a valid identifier)
           , "hello foo code example"     // description
           , "hello", "foo", "std::cout") // any number of tags
{
	std::cout << "--> hello, foo" << std::endl;
}

}
