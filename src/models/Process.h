//
// Created by david.zabaleta on 11/29/2020.
//

#ifndef RETO2_PROJECT_PROCESS_H
#define RETO2_PROJECT_PROCESS_H

#include <string>
#include "../headers/Utils.h"
#include "../headers/ProcessExecutor.h"

class Process {

private:
    int order;

public:
    Process& print(std::string message_)
    {
        printMessage(message_);
        return *this;
    }

    Process& runChapter(int order_)
    {
        order = order_;

        printMessage(ExecuteChapter(order_));

        return *this;
    }

    const int &getProcess() const {
        return order;
    }
};


#endif //RETO2_PROJECT_PROCESS_H
