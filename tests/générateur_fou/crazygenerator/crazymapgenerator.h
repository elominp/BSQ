/*
** crazymapgenerator.h for bsq in /
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sun Jan 18 22:33:54 2015 guigui
** Last update Sun Jan 18 22:33:56 2015 guigui
*/

#ifndef CRAZYMAPGENERATOR_H
#define CRAZYMAPGENERATOR_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

class crazymapgenerator
{
public:
    crazymapgenerator();
    crazymapgenerator(int nrows, int ncolumns, int ndensity, std::string npath);
    bool setrows(int nrows);
    bool setcolumns(int ncolumns);
    bool setdensity(int ndensity);
    bool setpath(std::string npath);
    bool create();
private:
    int rows;
    int columns;
    int density;
    std::string path;
    void clean_buffer(char *buffer, int size);
    std::string my_inttostr(int n);
    int rec_convertintstr(std::string *str, int n);
};

#endif // CRAZYMAPGENERATOR_H
