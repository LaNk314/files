public class Rectangle {
    Point LL;
    Point UR;
    Rectangle(Point LL, Point UR){
        this.LL = LL;
        this.UR = UR;
    }
    int area(){
       return (UR.x - LL.x ) * (UR.y - LL.y);
    }
}
