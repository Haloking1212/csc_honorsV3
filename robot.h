#ifndef ROBOT_H
#define ROBOT_H
#include <QString>
#include <vector>
using namespace std;

class Robot {

private:
    QString robot_name;
    QString robot_img;
    QString path = "/Users/hectorvaldez/Desktop/csc_honors_img";
    vector <QString> img_vector = {path + "/chicken.jpg.jpeg", path + "/orange.png", path + "/beef.jpeg", path + "/avocado.jpeg.jpeg",
                                   path + "/vine_tomato.png.png", path + "/milk.png.png", path + "/water.jpeg.jpeg", path + "/bread.jpg",
                                   path + "/cheese.png.png", "/mayo.jpg.jpeg"};

public:
    Robot(){
        robot_name = "roomba";

    }

    // gets robot name
    QString getName() {
        return robot_name;
    }

    // set robot name
    void setName(QString name){
        robot_name = name;
    }

    //sets robot img
    void setrobotImg(QString img) {
        robot_img = img;
    }

    // gets robot img
    QString getrobotImg() {
        return robot_img;
    }

    // gets a random img from vector
//    QString getRandomImg(QString img_vector) {
//        int num = arc4random() % 10;

//        return img_vector[num];
//    }

};

#endif // ROBOT_H
