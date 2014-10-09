#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movies_t {
    string title;
    int year;
} films[3];

void printMovies(movies_t movies);

int main() {
    string mystr;
    int n;

    for (n = 0; n < 3; n++) {
        cout << "Enter title: ";
        getline(cin, films[n].title);
        cout << "Enter year: ";
        stringstream(mystr) >> films[n].year;
    }

    cout << "\nYou have entered these movies:\n";
    for (n = 0; n < 3; n++) {
        printMovies(films[n]);
    }

    movies_t amovie;
    movies_t * pmovie;
    pmovie = &amovie;

    cout << "Enter title: ";
    getline(cin, pmovie->title);
    cout << "Enter year: ";
    getline(cin, mystr);
    (stringstream) mystr >> pmovie->year;

    return 0;
}

void printMovies(movies_t movies) {
    cout << movies.title;
    cout << " (" << movies.year << ")";
}
