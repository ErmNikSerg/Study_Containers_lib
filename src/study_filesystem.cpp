#include "study_filesystem.h"

std::wstring DisplayPathInfo()
{
    std::filesystem::path pathToDisplay(L"C:/FileSystemTest/SubDir3/SubDirLevel2/File2.txt ");

    std::wostringstream wos;
    int i = 0;
    wos << L"Displaying path info for: " << pathToDisplay << std::endl;
    for (std::filesystem::path::iterator itr = pathToDisplay.begin(); itr != pathToDisplay.end(); ++itr)
    {
        wos << L"path part: " << i++ << L" = " << *itr << std::endl;
    }

    wos << L"root_name() = " << pathToDisplay.root_name() <<std::endl
        << L"root_path() = " << pathToDisplay.root_path() << std::endl
        << L"relative_path() = " << pathToDisplay.relative_path() << std::endl
        << L"parent_path() = " << pathToDisplay.parent_path() << std::endl
        << L"filename() = " << pathToDisplay.filename() << std::endl
        << L"stem() = " << pathToDisplay.stem() << std::endl
        << L"extension() = " << pathToDisplay.extension() << std::endl
        << L"empty() = " << pathToDisplay.empty() << std::endl
        << L"has_relative_path() = " << pathToDisplay.has_relative_path() << std::endl;
    return wos.str();
}


void Study_filesystem::about_filesystem()
{
    std::cout << "The Filesystem library provides facilities for performing operations on "
                 "file systems and their components, such as paths, regular files, and directories." << std::endl;
    std::cout << "For the pathname C:/Qt_Projects/repos/Study_Containers_lib/README.md: "<< std::endl;
    std::cout << "  *The root name is c: "<< std::endl;
    std::cout << "  *The root directory is / "<< std::endl;
    std::cout << "  *The root path is c:/ "<< std::endl;
    std::cout << "  *The relative path is Qt_Projects/repos/Study_Containers_lib/README.md "<< std::endl;
    std::cout << "  *The parent path is C:/Qt_Projects/repos/Study_Containers_lib/ "<< std::endl;
    std::cout << "  *The filename is README.md "<< std::endl;
    std::cout << "  *The stem is README "<< std::endl;
    std::cout << "  *The extension is .md "<< std::endl;
    std::cout << std::endl << "Example:" << std::endl;

    std::wcout << DisplayPathInfo() << std::endl;
}
