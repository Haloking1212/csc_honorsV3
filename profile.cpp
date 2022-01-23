#include "profile.h"
#include <stdlib.h>

profile::profile()
{

}

void profile::setUserID() {
    userID = arc4random() % 999999 + 1;
}

int profile::getUserID() {
    return userID;
}
