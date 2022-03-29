#include <fstream>
#include <iostream>

int main(int argc, char *argv[]){
    if (argc != 4)
        return -1;
    std::ifstream file;
    std::string filename = argv[1];
    std::ofstream output_file(filename + ".replace");
    std::string content;

    file.open(argv[1]);
    if (file.is_open())
    {
        while (file)
        {
            std::string buffer;
            getline(file, buffer);
            content.append(buffer);
            if (!file.eof())
                content.append("\n");
        }
    } else
		return (-1);
	int index = -strlen(argv[3]);
    while (1)
    {
        index = content.find(argv[2], index + strlen(argv[3]));
        if (index == -1 || strlen(argv[2]) == 0)
            break;
        content.erase(index, std::strlen(argv[2]));
        content.insert(index, argv[3]);
    }
	output_file << content;
    return 0;
}