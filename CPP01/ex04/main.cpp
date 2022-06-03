/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:40:36 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 17:38:16 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	error_msg(std::string msg)
{
	std::cout << msg << std::endl;
	return (-1);
}

int	main(int argc, char **argv)
{
	std::fstream	myFile;
	std::string		newFile;
	std::string		tmpLine;
	std::string		bufferLine;
	std::string		oldWord;
	std::string		newWord;
	size_t			index;
	int				exit_code;

	exit_code = 0;
	if (argc != 4)
		exit_code = error_msg("Invalid number of arguments");
	else
	{
		newFile = argv[1];
		newFile = newFile.append(".replace");
		oldWord = argv[2];
		newWord = argv[3];
		if (oldWord.empty())
			exit_code = error_msg("The word to replace is empty !");
		else
		{
			myFile.open(argv[1]);
			if (myFile.is_open())
			{
				while (getline(myFile, tmpLine))
				{
					while ((index = tmpLine.find(oldWord, 0)) != std::string::npos)
					{
						tmpLine.erase(index, oldWord.length());
						if (!newWord.empty())
							tmpLine.insert(index, newWord);
					}
					bufferLine.append(tmpLine);
					if (!myFile.eof())
						bufferLine.append("\n");
				}
				myFile.close();
				myFile.open(newFile, std::ios::out);
				if (myFile.is_open())
				{
					myFile << bufferLine;
					myFile.close();
				}
			}
			else
				exit_code = error_msg("Unable to open file");
		}
	}
	return (exit_code);
}
