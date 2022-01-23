#include "person.h"

person::person()
{
    user.setUserID();
    personID = user.getUserID();
}

void person::setUserName(QString userName){
    name = userName;

};

QString person::getUserName() {
    return name;
};

void person::setAge(QString userAge) {
    age = userAge;
};

QString person::getAge() {
    return age;
};

int person::getPersonID() {
    return personID;
};


