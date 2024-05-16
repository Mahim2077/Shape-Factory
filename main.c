#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
class circles{
    private:
        double radius;
    public:
        void set_radius(double x){
            radius = x;
        }
        double get_radius(){
            return radius;
        }
        double get_area(){
            return 3.14*radius * radius;
        }
};
class rectangles{
    private:
        double height;
        double width;
    public:
        void set_height(double x){
            height = x;
        }
        void set_width(double x){
            width = x;
        }

        double get_height(){
            return height;
        }
        double get_width(){
            return width;
        }
        double get_area(){
            return height * width;
        }
};
class shapes{
private:
    char s;
    int id;
public:
    circles circle;
    rectangles rectangle;
    void set_id(int x){
        id = x;
    }
    void set_c(char c){
        s = c;
    }
    int get_id(){
        return id;
    }
    char get_c(){
        return s;
    }


};


int main(){
    vector<shapes> shape_array(100);
    int a,i=0,j,r=0,c=0;
    double ra = 0,ca = 0,ta = 0,p1,p2,tmp;
    cout << "1.Add a circle\n2.Add a rectangle\n3.List items\n4.Statistics\n5.Exit\n" ;
    while (1){
        cout << "\nPlease enter a key:";
        cin >> a;
        cout << "\n";
        if(a == 1){
            cout << "Circle Input:\n";
            shape_array[i].set_id(i+1);
            shape_array[i].set_c('C');
            cout << "What is the radius:";
            cin >> tmp ;
            shape_array[i].circle.set_radius(tmp);
            tmp = shape_array[i].circle.get_area();
            ca += tmp;
            ta += tmp;
            c++;
            i++;
        }
         else if(a == 2){
            cout << "Rectangle Input:\n";
            shape_array[i].set_id(i+1);
            shape_array[i].set_c('R');
            cout << "What is the height:";
            cin >> tmp ;
            shape_array[i].rectangle.set_height(tmp);
            cout << "What is the width:";
            cin >> tmp ;
            shape_array[i].rectangle.set_width(tmp);
            tmp = shape_array[i].rectangle.get_area();
            ra += tmp;
            ta += tmp;
            r++;
            i++;
        }
        else if(a == 3){
            cout << "\nListings:\n";
            cout << "Id   	type	dimension\n";
            cout << "=============================\n";
            for(j = 0;j<i;j++){
                if(shape_array[j].get_c() == 'C'){
                        cout <<  shape_array[j].get_id() << ".   Circle	" <<  shape_array[j].circle.get_radius() << "\n";

                }
                else{
                        cout <<  shape_array[j].get_id() << ".   Rectangle	" <<  shape_array[j].rectangle.get_height() << "x" <<  shape_array[j].rectangle.get_width() << "\n";

                }

            }
        }
        else if(a==4){
            cout << "\nStatistics:\n";
            p1 = ra/ta*100;
            p2 = ca/ta*100;
            cout <<"Total shapes : " << r+c;
            cout << "\n";
            cout <<"Total number of Rectangles : "<< r;
            cout << "\n";
            cout <<"Total number of Circles : "<< c;
            cout << "\n";
            cout <<"Total area: " << ta;
            cout << "\n";
            cout <<"The total area occupied by rectangles: "<< ra << " (" << p1 << "%)" << "\n";
            cout <<"The total area occupied by circles: "<< ca << " (" << p2 << "%)" << "\n";

        }
        else{
            break;
        }

    }
    return 0;
}



