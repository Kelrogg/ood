#include <boost/test/unit_test.hpp>

#include "FileHandler.hpp"

constexpr auto FILE_WITH_CONTENT_NAME = "fileWithContent.txt";

BOOST_AUTO_TEST_SUITE(FileInputDeCryptStreamTests)

	BOOST_AUTO_TEST_CASE(m_ReadByte_test)
	{
		const uint8_t expectedByte = 244;
		const std::vector<unsigned char> keys{ 0 };
		auto handler = FileReader(FILE_WITH_CONTENT_NAME, keys, false);
       
		BOOST_CHECK(expectedByte == handler->ReadByte());
	}

	BOOST_AUTO_TEST_CASE(m_ReadByte_test_with_multiple_deCrypt_keys)
	{
		const uint8_t expectedByte = 200;
		const std::vector<unsigned char> keys{ 0, 1, 2, 255 };
		auto handler = FileReader(FILE_WITH_CONTENT_NAME, keys, false);

		BOOST_CHECK(expectedByte == handler->ReadByte());
	}

	BOOST_AUTO_TEST_CASE(m_ReadBlock_test)
	{
		const auto READ_SIZE = 5;
		const uint8_t expectedResult[READ_SIZE]{ 125, 158, 60, 36, 32 };
		const std::vector<unsigned char> keys{ 0, 1, 2 };
		auto handler = FileReader(FILE_WITH_CONTENT_NAME, keys, false);
		uint8_t chars[READ_SIZE]{};

		BOOST_CHECK(handler->ReadBlock(chars, READ_SIZE) == 5);
		BOOST_CHECK(std::equal(chars, chars + READ_SIZE, expectedResult));
	}

BOOST_AUTO_TEST_SUITE_END();
