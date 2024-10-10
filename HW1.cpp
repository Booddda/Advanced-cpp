#include<iostream>
#include<string.h>
#include<vector>
using namespace std; 

class Room
{
    private: 
        int length; 
        int width; 

    public: 
        int getLength()
        {
            return length;

        }
        void setLength(int n)
        {
            length = n;
        }
        int getWidth()
        {
            return width;

        }
        void setWidth(int n)
        {
            width = n;
        }
};

class Elevator
{   
    private:
        int length; 
        int width; 
        int height; 
    public:
        int getLength()
        {
            return length;

        }
        void setLength(int n)
        {
            length = n;
        }
        int getWidth()
        {
            return width;

        }
        void setWidth(int n)
        {
            width = n;
        }
        int getHeight()
        {
            return height;

        }
        void setHeight(int n)
        {
            height = n;
        }
};

class Apartment
{
    private: 
        vector<Room> Rooms;
        vector<Room> Bathrooms;
        int floor_number;
        int apartement_number;
    public:
        const vector<Room>& getRooms()
        {
            return Rooms;
        }
        void setRooms(const vector<Room>& rooms)
        {
            this -> Rooms = rooms;
        }
        const vector<Room>& getBathRooms()
        {
            return Bathrooms;
        }
        void setRooms(const vector<Room>& bathrooms)
        {
            this -> Bathrooms = bathrooms;
        }
        int getFloorNum()
        {
            return floor_number;
        }
        void setFloorNum(int n)
        {
            this -> floor_number = n;
        }

};
class Elevator {
private:
	int width;
	int height;
	int max_people;
	int max_weight;
	// Date: installation date, last maintenance date, manufacture

public:
	int GetHeight() {
		return height;
	}

	void SetHeight(int height) {
		this->height = height;
	}

	int GetMaxPeople() {
		return max_people;
	}

	void SetMaxPeople(int maxPeople) {
		max_people = maxPeople;
	}

	int GetMaxWeight() {
		return max_weight;
	}

	void SetMaxWeight(int maxWeight) {
		max_weight = maxWeight;
	}

	int GetWidth() {
		return width;
	}

	void SetWidth(int width) {
		this->width = width;
	}
};

class Building
{
    vector<Apartment> Apartments;
    vector<Elevator> Elevators;

};
int main()
{

    return 0;
}