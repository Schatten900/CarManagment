#pragma once
#include <regex>
#include <msclr/marshal_cppstd.h>
using namespace System;


bool checkEmail(String^ email)
{	//Check the format of email
	std::string pattern = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$";
	std::string ConvertEmail = msclr::interop::marshal_as<std::string>(email);

	std::regex regexPattern(pattern);
	return std::regex_match(ConvertEmail, regexPattern);
}

bool checkPassword(String^ password)
{	//Check Upper,lower,digits and special chars;
	std::string pattern = "(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[^a-zA-Z0-9]).{8,}";
	std::string ConvertPassword = msclr::interop::marshal_as<std::string>(password);

	std::regex regexPattern(pattern);
	return std::regex_match(ConvertPassword, regexPattern);

}

int GeratorID()
{
	std::string aux{""};
	Random^ random = gcnew Random();
	for (int i{ 0 }; i < 5; ++i)
	{
		aux += std::to_string(random->Next(0, 9));
	}
	int ID = std::stol(aux);
	return ID;
}

public ref class User
{
public:
	String^ Username;
	String^ Email;
	String^ Password;
	int coins;
};

public ref class Car
{
	int ID;
	String^ Marca;
	String^ Modelo;
	int Preco;
	String^ Cor;
};