#include "models/Process.h"
#include "models/Chapters.h"
#include "headers/Finder.h"

int main() {

    Process()
            .print(chapterFinder(Chapters::WELCOME))
            .runChapter(1)
            .runChapter(2)
            .runChapter(3)
            .runChapter(4)
            .print(chapterFinder(Chapters::GAME_OVER));

    return 0;
}
