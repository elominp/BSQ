//
// mapgenerator.cpp for bsq in /
// 
// Made by guigui
// Login   <guigui@epitech.net>
// 
// Started on  Sun Jan 18 22:32:45 2015 guigui
// Last update Sun Jan 18 22:32:47 2015 guigui
//

#include "mapgenerator.h"

using namespace std;

mapgenerator::mapgenerator()
{
    rows = 1;
    columns = 1;
    density = 0;
    path = "~/map.txt";
}

mapgenerator::mapgenerator(int nrows, int ncolumns, int ndensity, string npath) {
    if (nrows > 0 && ncolumns > 0 && ndensity >= 0) {
        rows = nrows;
        columns = ncolumns;
        density = ndensity;
    }
    else {
        rows = 1;
        columns = 1;
        density = 0;
    }
    if (npath == "")
        path = "~/map.txt";
    else
        path = npath;
}

bool mapgenerator::setcolumns(int ncolumns) {
    if (ncolumns > 0) {
        columns = ncolumns;
        return true;
    }
    else
        return false;
}

bool mapgenerator::setdensity(int ndensity) {
    if (ndensity >= 0) {
        density = ndensity;
        return true;
    }
    else
        return false;
}

bool mapgenerator::setrows(int nrows) {
    if (nrows > 0) {
        rows = nrows;
        return true;
    }
    else
        return false;
}

bool mapgenerator::setpath(string npath) {
    if (npath == "")
        path = "~/";
    else
        path = npath;
    return true;
}

void mapgenerator::clean_buffer(char *buffer, int size) {
    if (buffer == NULL)
        return;
    for (int i = 0; i < size; ++i)
        buffer[i] = 0;
}

int mapgenerator::rec_convertintstr(string *str, int n) {
    char t[2];
    if (n > 9)
        rec_convertintstr(str, n / 10);
    t[0] = (n % 10) + 48;
    t[1] = 0;
    str->append(t);
    return n;
}

string mapgenerator::my_inttostr(int n) {
    string str;

    if (n < 0)
        str.append("-");
    rec_convertintstr(&str, n);
    str.append("\n");
    return str;
}

bool mapgenerator::create() {
    char buffer[4096];
    int k = 0;
    int t;
    int file;
    string head;

    if ((file = creat(path.c_str(), O_WRONLY)) < 0)
        return false;
    srand((getpid() * rows * columns) / 4096);
    head = my_inttostr(rows);
    if (write(file, head.c_str(), head.size()) < 0)
        return false;
    for (int j = 0; j < rows; j++) {
        for (int i = 0; i < columns; i++) {
            t = (rand() % columns) * 2;
            if (k > 4095) {
                if ((write(file, buffer, 4096)) < 0) {
                    close(file);
                    return false;
                }
                clean_buffer(buffer, 4096);
                k = 0;
            }
            if (t < density)
                buffer[k] = 'o';
            else
                buffer[k] = '.';
            ++k;
        }
        if (k > 4095) {
            if ((write(file, buffer, 4096)) < 0) {
                close(file);
                return false;
            }
            clean_buffer(buffer, 4096);
            k = 0;
        }
        buffer[k] = '\n';
        ++k;
    }
    if (write(file, buffer, k) < 0)
        return false;
    close(file);
    return true;
}
