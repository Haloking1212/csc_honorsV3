#ifndef PERSON_H
#define PERSON_H

#include "profile.h"
#include <QString>


class person
{
private:
    profile user;
    QString name;
    QString age;
    int personID;

public:
    person();
    void setUserName(QString userName);
    QString getUserName();
    void setAge(QString userAge);
    QString getAge();
    int getPersonID();

};

#endif // PERSON_H
