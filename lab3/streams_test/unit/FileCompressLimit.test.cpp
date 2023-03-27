#include "../headers/pch.hpp"

#include <boost/test/unit_test.hpp>

#include "FileHandler.hpp"

constexpr auto REPEAT_255_FILE_NAME = "Repeat255.txt";
constexpr auto REPEAT_256_FILE_NAME = "Repeat256.txt";
constexpr auto REPEAT_257_FILE_NAME = "Repeat257.txt";

constexpr auto REPEAT_255_OUT_FILE_NAME = "Compressed255Out.txt";
constexpr auto REPEAT_256_OUT_FILE_NAME = "Compressed256Out.txt";
constexpr auto REPEAT_257_OUT_FILE_NAME = "Compressed257Out.txt";

constexpr auto REPEAT_255_ESTIMATED_FILE_NAME = "Compressed255.txt";
constexpr auto REPEAT_256_ESTIMATED_FILE_NAME = "Compressed256.txt";
constexpr auto REPEAT_257_ESTIMATED_FILE_NAME = "Compressed257.txt";

BOOST_AUTO_TEST_SUITE(WritingReadingCrpyt)

    BOOST_AUTO_TEST_CASE( limit_compression_maximum)
    {
        bool shouldDeCompress = false, shouldCompress = true;
        std::vector<unsigned char> decryptKeys, encryptKeys;
        
        { // important Flush to fix last call of WriteByte
            auto inputFileHandler = FileReader(REPEAT_255_FILE_NAME, decryptKeys, shouldDeCompress);
		    auto outputFileHandler = FilePrinter(REPEAT_255_OUT_FILE_NAME, encryptKeys, shouldCompress);
    
		    while (true)
		    {
		    	auto byte = inputFileHandler->ReadByte();
		    	if (inputFileHandler->IsEOF()) 
		    	    break;
		    	outputFileHandler->WriteByte(byte);
		    }
        }

        std::ifstream ifs1(REPEAT_255_ESTIMATED_FILE_NAME);
        std::ifstream ifs2(REPEAT_255_OUT_FILE_NAME);
        std::istream_iterator<char> b1(ifs1), e1;
        std::istream_iterator<char> b2(ifs2), e2;
        BOOST_CHECK_EQUAL_COLLECTIONS(b1, e1, b2, e2);
    }

    BOOST_AUTO_TEST_CASE( limit_compression_over_maximum)
    {
        bool shouldDeCompress = false, shouldCompress = true;
        std::vector<unsigned char> decryptKeys, encryptKeys;
        
        { // important Flush to fix last call of WriteByte
            auto inputFileHandler = FileReader(REPEAT_256_FILE_NAME, decryptKeys, shouldDeCompress);
		    auto outputFileHandler = FilePrinter(REPEAT_256_OUT_FILE_NAME, encryptKeys, shouldCompress);
    
		    while (true)
		    {
		    	auto byte = inputFileHandler->ReadByte();
		    	if (inputFileHandler->IsEOF()) 
		    	    break;
		    	outputFileHandler->WriteByte(byte);
		    }
        }

        std::ifstream ifs1(REPEAT_256_ESTIMATED_FILE_NAME);
        std::ifstream ifs2(REPEAT_256_OUT_FILE_NAME);
        std::istream_iterator<char> b1(ifs1), e1;
        std::istream_iterator<char> b2(ifs2), e2;
        BOOST_CHECK_EQUAL_COLLECTIONS(b1, e1, b2, e2);
    }

    BOOST_AUTO_TEST_CASE( limit_compression_over_maximum_)
    {
        bool shouldDeCompress = false, shouldCompress = true;
        std::vector<unsigned char> decryptKeys, encryptKeys;
        
        { // important Flush to fix last call of WriteByte
            auto inputFileHandler = FileReader(REPEAT_257_FILE_NAME, decryptKeys, shouldDeCompress);
		    auto outputFileHandler = FilePrinter(REPEAT_257_OUT_FILE_NAME, encryptKeys, shouldCompress);
    
		    while (true)
		    {
		    	auto byte = inputFileHandler->ReadByte();
		    	if (inputFileHandler->IsEOF()) 
		    	    break;
		    	outputFileHandler->WriteByte(byte);
		    }
        }

        std::ifstream ifs1(REPEAT_257_ESTIMATED_FILE_NAME);
        std::ifstream ifs2(REPEAT_257_OUT_FILE_NAME);
        std::istream_iterator<char> b1(ifs1), e1;
        std::istream_iterator<char> b2(ifs2), e2;
        BOOST_CHECK_EQUAL_COLLECTIONS(b1, e1, b2, e2);
    }
BOOST_AUTO_TEST_SUITE_END();