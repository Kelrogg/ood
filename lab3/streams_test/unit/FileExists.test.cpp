#include "../headers/pch.hpp"

#include <boost/test/unit_test.hpp>
//#include <boost/test/included/unit_test.hpp>
//#include <boost/test/tools/output_test_stream.hpp>

#include "TryOpenFile.hpp"

BOOST_AUTO_TEST_SUITE(FileExistsTests)

	BOOST_AUTO_TEST_CASE(No_such_file_test)
	{
		std::ifstream iS{};
		BOOST_CHECK_THROW(TryOpenFile(iS, std::ios_base::binary, "nonexistingfile.hpp"), std::ios_base::failure);
	}

BOOST_AUTO_TEST_SUITE_END();
