#ifndef CREATE_FILE_HANDLER_HPP
#define CREATE_FILE_HANDLER_HPP

#include <vector>

#include "FileInputStream.hpp"
#include "FileOutputStream.hpp"

IInputDataStreamPtr FileReader(const std::string& fileName, const std::vector<unsigned char>& deCryptKeys, bool deCompress);
IOutputDataStreamPtr FilePrinter(const std::string& fileName, const std::vector<unsigned char>& enCryptKeys, bool compress);

#endif