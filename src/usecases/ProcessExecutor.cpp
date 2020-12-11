//
// Created by david.zabaleta on 11/29/2020.
//

#include "../headers/ProcessExecutor.h"
#include "../models/Chapters.h"
#include "../headers/Finder.h"
#include "../headers/Utils.h"

std::string ExecuteChapter(int chapter)
{
    switch (chapter) {
        case 1:
            return OrderOne();
        case 2:
            return OrderTwo();
        case 3:
            return OrderThree();
        default:
            return chapterFinder(Chapters::BAD_CHAPTER);
    }
}

std::string OrderOne()
{
    int decision = inputIntPrinter(chapterFinder(Chapters::CHAPTER_1));

    switch (decision) {
        case 1:
            return chapterFinder(Chapters::CHAPTER_1_DECISION_1);
        case 2:
            return chapterFinder(Chapters::CHAPTER_1_DECISION_2);
        default:
            return chapterFinder(Chapters::BAD_DECISION);
    }
}

std::string OrderTwo()
{
    int decision = inputIntPrinter(chapterFinder(Chapters::CHAPTER_2));

    switch (decision) {
        case 1:
            return chapterFinder(Chapters::CHAPTER_2_DECISION_1);
        case 2:
            return chapterFinder(Chapters::CHAPTER_2_DECISION_2);
        default:
            return chapterFinder(Chapters::BAD_DECISION);
    }
}

std::string OrderThree()
{
    int decision = inputIntPrinter(chapterFinder(Chapters::CHAPTER_3));

    switch (decision) {
        case 1:
            return chapterFinder(Chapters::CHAPTER_3_DECISION_1);
        case 2:
            return chapterFinder(Chapters::CHAPTER_3_DECISION_2);
        default:
            return chapterFinder(Chapters::BAD_DECISION);
    }
}

