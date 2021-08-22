#include <iostream>

int main()
{
    unsigned int LCID, CID;
    unsigned short sector;
    while (true) {
        std::cout << "Enter LCID: ";
        std::cin >> LCID;
        CID = LCID % 65536;
        sector = CID % 10;
        std::cout << "CID: " << CID / 10 << std::endl << "Sector: " << sector << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}
