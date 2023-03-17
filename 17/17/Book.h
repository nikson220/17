<<<<<<< HEAD
<<<<<<< HEAD
#pragma once
#include "Publication.h"

class Book : public Publication {
protected:
    string summary;
public:
    Book(string title, string author, int year, string summary);
    Book();

    void  setsummary(string summary);
    string getSummary() const;
};

=======
#pragma once
#include "Publication.h"

class Book : public Publication {
protected:
    string summary;
public:
    Book(string title, string author, int year, string summary);
    Book();

    void  setsummary(string summary);
    string getSummary() const;
};

>>>>>>> 1c6ef20f66a8e21f30413f1efc1acfae8cf2f891
=======
#pragma once
#include "Publication.h"

class Book : public Publication {
protected:
    string summary;
public:
    Book(string title, string author, int year, string summary);
    Book();

    void  setsummary(string summary);
    string getSummary() const;
};

>>>>>>> 1c6ef20f66a8e21f30413f1efc1acfae8cf2f891
