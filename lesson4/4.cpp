#include <iostream>
using namespace std;
class Box{
	public:
		Box(int h = 10,int w = 10,int len = 10);
		int volume();
		
	private:
		int height;
		int width;
		int length;
};

Box::Box(int h,int w,int len){
	height = h;
	width = w;
	length = len;
}

int Box::volume(){
	return (height*width*length);
}

int main(){
	Box box1,box2(15),box3(15,30),box4(15,30,20);
	cout<<"The volume of box1 is "<<box1.volume()<<endl;
	cout<<"The volume of box1 is "<<box2.volume()<<endl;
	cout<<"The volume of box1 is "<<box3.volume()<<endl;
	cout<<"The volume of box1 is "<<box4.volume()<<endl;
	
	return 0;
}
