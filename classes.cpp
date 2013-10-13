#include <iostream>
#include <string>

using namespace std;

class Car {
	private: 
			string manufacturer;
			string model;

	public:
		 Car(string manufacturer, string model) {
			this->manufacturer = manufacturer;
			this->model = model;
		}

		void showInfo() {
			cout<<" manufacturer: "<<this->manufacturer<<" model: "<<this->model<<endl;
		}
};


int main() {
	Car audia4("Audi", "A4");
	audia4.showInfo();

	return 0;
}