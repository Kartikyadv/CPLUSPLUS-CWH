#include<iostream>
using namespace std;
#include<math.h>

class Point{
    int x, y;
    public:
    friend int distance(Point p,Point q);
    Point(int a, int b){x=a;y=b;}
    void displayPoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};
int distance(Point p, Point q){
    int dis = sqrt(pow((q.x-p.x),2)+pow((q.y-p.y),2));
    return dis;
}
// Create a f(x) which takes (Hint : make it a friend f(x). )2 point objects and computes the distance between those points.
int main(){
    Point p(0, 1);
    p.displayPoint();
    Point q(0, 6);
    q.displayPoint();
    cout<<"The distance between points is "<<distance(p, q);
    return 0;
}