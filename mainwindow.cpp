#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPicture"
#include "QPixmap"
#include "QString"
#include "robot.h"
#include "person.h"
#include "profile.h"
#include <QDesktopServices>
#include <QUrl>
#include "travelLink.h"
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QDebug>

//QString path = "/Users/hectorvaldez/Desktop/csc_honors_img";
//vector <QString> img_vector = {"/chicken.jpg.jpeg","/orange.png","/beef.jpeg",
//                               "/avocado.jpeg.jpeg", "/vine_tomato.png.png","/milk.png.png",
//                               "/water.jpeg.jpeg","/bread.jpg",
//                              "/cheese.png.png", "/mayo.jpg.jpeg"};

//QString getRandomImg(QString img_vector) {
//    int num = arc4random() % 10;

//    return img_vector[num];
//}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// detect button
void MainWindow::on_pushButton_clicked()
{

    if (ui->label->text() == "chicken") {
        ui->label->setText("its chicken thighs");
    } else if (ui->label->text() == "orange") {
        ui->label->setText("florida oranges");
    } else if (ui->label->text() == "beef") {
        ui->label->setText("ground beef patties");
    } else if (ui->label->text() == "avocado") {
        ui->label->setText("hass avocados");
    } else if (ui->label->text() == "tomato") {
        ui->label->setText("these are vine tomato");
    } else if (ui->label->text() == "milk") {
        ui->label->setText("gallon of whole milk");
    } else if (ui->label->text() == "water") {
        ui->label->setText("gallon of water");
    } else if (ui->label->text() == "bread") {
        ui->label->setText("sliced bread");
    } else if (ui->label->text() == "cheese") {
        ui->label->setText("sliced cheese");
    } else if (ui->label->text() == "mayo") {
        ui->label->setText("regular mayo");
    }


}// end of detect button

// show button
void MainWindow::on_pushButton_2_clicked()
{
    QString path = "/Users/hectorvaldez/Desktop/csc_honors_img";
    vector <QString> img_vector = {"/chicken.jpg.jpeg","/orange.png","/beef.jpeg",
                                   "/avocado.jpeg.jpeg", "/vine_tomato.png.png","/milk.png.png",
                                   "/water.jpeg.jpeg","/bread.jpg",
                                  "/cheese.png.png", "/mayo.jpg.jpeg"};
// generating a random image
    int num = arc4random() % 10;
    QString random_img = img_vector[num];


    Robot r1;
    QString styleSheetArg1 = "background-image: url(";

    QString styleSheetArg2 = ")";
// adding image to application
    ui->label_pic->setStyleSheet(styleSheetArg1 + path + random_img + styleSheetArg2);

    if (num == 0) {
        r1.setName("chicken");
    } else if (num == 1) {
        r1.setName("orange");
    } else if (num == 2) {
        r1.setName("beef");
    } else if (num == 3) {
        r1.setName("avocado");
    } else if (num == 4) {
        r1.setName("vine tomato");
    } else if (num == 5) {
        r1.setName("milk");
    } else if (num == 6) {
        r1.setName("water");
    } else if (num == 7) {
        r1.setName("bread");
    } else if (num == 8) {
        r1.setName("cheese");
    } else if (num == 9) {
        r1.setName("mayo");
    }


    ui->label->setText(r1.getName());

}// end of show button function

// plain text edit
void MainWindow::on_plainTextEdit_textChanged()
{
    QString path = "/Users/hectorvaldez/Desktop/csc_honors_img";
    vector <QString> travel_img_vector = {
        "/trainstation.jpg.jpeg", "/home.jpeg.jpeg", "/bmcc.jpg.jpeg",
        "/mcdonalds.jpg.jpeg"
    };
    QString styleSheetArg1 = "background-image: url(";

    QString styleSheetArg2 = ")";


    if(ui->plainTextEdit->toPlainText() == "mcdonalds") {
        ui->label_travel_pic->setStyleSheet(styleSheetArg1 + path + travel_img_vector[3] + styleSheetArg2);
    } else if (ui->plainTextEdit->toPlainText() == "home") {
        ui->label_travel_pic->setStyleSheet(styleSheetArg1 + path + travel_img_vector[1] + styleSheetArg2);
    } else if (ui->plainTextEdit->toPlainText() == "bmcc") {
        ui->label_travel_pic->setStyleSheet(styleSheetArg1 + path + travel_img_vector[2] + styleSheetArg2);
    } else if (ui->plainTextEdit->toPlainText() == "train station") {
        ui->label_travel_pic->setStyleSheet(styleSheetArg1 + path + travel_img_vector[0] + styleSheetArg2);
    }



}//  end of plainTextEdit_textChanged function


// travel button
void MainWindow::on_pushButton_3_clicked()
{

    QFile file("/Users/hectorvaldez/Desktop/csc_honorsV3/savedTravelSearches.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        QTextStream out(&file);
        QString userString = ui->plainTextEdit->toPlainText();
        out << userString;



    vector <QString> links = {"https://www.google.com/maps/search/train+station/@40.8553081,-73.9242248,15z/data=!3m1!4b1",
                             "https://www.google.com/maps/place/home/@40.8494657,-73.9381083,17z/data=!3m1!4b1!4m5!3m4!1s0x89c2f41fd570f077:0xaeb214adcec6c2b3!8m2!3d40.8494657!4d-73.9359196",
                             "https://www.google.com/maps/place/Borough+of+Manhattan+Community+College/@40.7188851,-74.0139434,17z/data=!3m2!4b1!5s0x89c25a1e73a0d745:0xc9909c0427cbf355!4m5!3m4!1s0x89c25a1e7e56a86f:0x69339e9ddf4f987a!8m2!3d40.7188851!4d-74.0117547",
                             "https://www.google.com/maps/search/mcdonalds/@40.7188847,-74.0205095,15z/data=!3m1!4b1",};

        if (ui->plainTextEdit->toPlainText() == "mcdonalds") {
            QDesktopServices::openUrl(QUrl(links[3]));
        } else if (ui->plainTextEdit->toPlainText() == "train station") {
            QDesktopServices::openUrl(QUrl(links[0]));
        } else if (ui->plainTextEdit->toPlainText() == "home") {
            QDesktopServices::openUrl(QUrl(links[1]));
        } else if (ui->plainTextEdit->toPlainText() == "bmcc") {
            QDesktopServices::openUrl(QUrl(links[2]));
        }



}// end of travel button

// profile setting button
void MainWindow::on_pushButton_5_clicked()
{
    QFile file("/Users/hectorvaldez/Desktop/csc_honorsV3/userProfile.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        QTextStream out(&file);
        QString userNameString = ui->plainTextEdit_2->toPlainText();
        QString userAgeString = ui->plainTextEdit_3->toPlainText();
        out << userNameString;
        out << userAgeString;
}// end of profile setting button


// name text field
void MainWindow::on_plainTextEdit_2_textChanged()
{

}// end of name text field


// age textfield
void MainWindow::on_plainTextEdit_3_textChanged()
{

}// end of age text field


// get user data button
void MainWindow::on_pushButton_6_clicked()
{
    person user;

    user.setUserName(ui->plainTextEdit_2->toPlainText());
    user.setAge(ui->plainTextEdit_3->toPlainText());

    qInfo() << user.getPersonID();
    qInfo() << user.getUserName();
    qInfo() << user.getAge();

}// of get user data button


///////////////////// Dont code below here //////////////////////////////

// text edit (deleted)
void MainWindow::on_textEdit_textChanged()
{

}

void MainWindow::on_label_pic_linkActivated(const QString &link)
{


}


void MainWindow::on_label_pic_linkHovered(const QString &link)
{

}


