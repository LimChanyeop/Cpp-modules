#include <fstream>
#include <iostream>

int main(int argc, char *argv[]){
    if (argc != 4)
        return -1;
    
    std::ifstream file;
    std::string filename = argv[1];
    std::ofstream output_file(filename + ".replace");

    file.open(argv[1]);
    std::string content;

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
    }
    while (1)
    {
        int index;
        index = content.find(argv[2]);
        if (index == -1)
            break;
        content.erase(index, std::strlen(argv[2]));
        content.insert(index, argv[3]);
    }
	output_file << content;
    return 0;
}