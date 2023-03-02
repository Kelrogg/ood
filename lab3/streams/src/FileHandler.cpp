#include "pch.hpp"

#include "FileHandler.hpp"

#include "DecoratorHelpers.hpp"

#include "InputStreamDeCrypter.hpp"
#include "InputStreamRLEDeCompressor.hpp"

#include "OutputStreamEnCrypter.hpp"
#include "OutputStreamRLECompressor.hpp"

IInputDataStreamPtr FileReader(const std::string& fileName, const std::vector<unsigned char>& deCryptKeys, bool deCompress)
{
	IInputDataStreamPtr handler = std::make_unique<FileInputStream>(fileName);

	if (deCompress)
	{
		handler = std::move((std::move(handler) << DecorateStream<InputStreamRLEDeCompressor>()));
	}

	for (auto& key : deCryptKeys)
	{
		handler = std::move((std::move(handler) << DecorateStream<InputStreamDeCrypter>(key)));
	}

	return handler;
}

IOutputDataStreamPtr FilePrinter(const std::string& fileName, const std::vector<unsigned char>& enCryptKeys, bool compress)
{
	IOutputDataStreamPtr handler = std::make_unique<FileOutputStream>(fileName);

	for (auto it = enCryptKeys.crbegin(), endIt = enCryptKeys.crend(); it != endIt; ++it)
	{
		handler = std::move((std::move(handler) << DecorateStream<OutputStreamEnCrypter>(*it)));
	}

	if (compress)
	{
		handler = std::move((std::move(handler) << DecorateStream<OutputStreamRLECompressor>()));
	}

	return handler;
}
