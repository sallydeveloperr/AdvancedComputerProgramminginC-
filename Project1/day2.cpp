#include <iostream>
#include <string>
using namespace std;
class Movie {
private:
	string title;
	string director;
	string actors;
	string grade;
public:
	void setTitle(string t) {
		title = t;
	}
	string getTitle() {
		return title;
	}
	void setDirector(string d) {
		director = d;
	}
	string getDirector() {
		return director;
	}
	void setActors(string a) {
		actors = a;
	}
	string getActors() {
		return actors;
	}
	void setGrade(string g) {
		grade = g;
	}
	string getGrade() {
		return grade;
	}
};
int main() {
	Movie mv;
	mv.setTitle("Jurassic World: Dominion, 2022");
	mv.setDirector("Colin Trevorrow");
	mv.setActors("Bryce Dallas Howard");
	mv.setGrade("12 years old");
	cout << mv.getTitle() << endl;
	cout << mv.getDirector() << endl;
	cout << mv.getActors() << endl;
	cout << mv.getGrade() << endl;
	return 0;
}