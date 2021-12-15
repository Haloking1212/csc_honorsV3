#ifndef TRAVELLINK_H
#define TRAVELLINK_H
#include <iostream>
#include <QString>
#include <vector>
#include <QDesktopServices>
#include <QUrl>
using namespace std;


class TravelLink {
private:
    vector <QString> links = {"https://www.google.com/maps/search/train+station/@40.8553081,-73.9242248,15z/data=!3m1!4b1",
                             "https://www.google.com/maps/place/home/@40.8494657,-73.9381083,17z/data=!3m1!4b1!4m5!3m4!1s0x89c2f41fd570f077:0xaeb214adcec6c2b3!8m2!3d40.8494657!4d-73.9359196",
                             "https://www.google.com/maps/place/Borough+of+Manhattan+Community+College/@40.7188851,-74.0139434,17z/data=!3m2!4b1!5s0x89c25a1e73a0d745:0xc9909c0427cbf355!4m5!3m4!1s0x89c25a1e7e56a86f:0x69339e9ddf4f987a!8m2!3d40.7188851!4d-74.0117547",
                             "https://www.google.com/maps/search/mcdonalds/@40.7188847,-74.0205095,15z/data=!3m1!4b1",};


public:

    // function that opens direction to user input
    void openLink() {
//        if (ui->plainTextEdit->toPlainText() == "mcdonalds") {
//            QDesktopServices::openUrl(QUrl(links[3]));
//        }
    }// end of openLink function

};

#endif // TRAVELLINK_H
