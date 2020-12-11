#include <iostream>
#include <map>

#include "../headers/Finder.h"

std::string chapterFinder(Chapters orderKey)
{
    static std::map<Chapters, std::string> messagesMap;

    messagesMap.insert({Chapters::WELCOME,
                        "Bienvenido! Maldito borrachin, anoche las drogas, el alcohol y tu promiscuidad te patearon las bolas muy feo."
                        "\nPero bueno, eso ya es parte del pasado lo importante es saber como vas a salir de este maldito agujero."
                        "\nEmpecemos!\n" });
    messagesMap.insert({Chapters::CHAPTER_1,
                        "Te despiertas en un lugar que huele a orina y a perro mojado, la apariencia del sitio parece un cuarto" });
    messagesMap.insert({Chapters::CHAPTER_1_DECISION_1, "CHAPTER_1_DECISION_1" });
    messagesMap.insert({Chapters::CHAPTER_1_DECISION_2, "CHAPTER_1_DECISION_2" });
    messagesMap.insert({Chapters::CHAPTER_2, "CHAPTER_2" });
    messagesMap.insert({Chapters::CHAPTER_2_DECISION_1, "CHAPTER_2_DECISION_1" });
    messagesMap.insert({Chapters::CHAPTER_2_DECISION_2, "CHAPTER_2_DECISION_2" });
    messagesMap.insert({Chapters::CHAPTER_3, "CHAPTER_3" });
    messagesMap.insert({Chapters::CHAPTER_3_DECISION_1, "CHAPTER_3_DECISION_1" });
    messagesMap.insert({Chapters::CHAPTER_3_DECISION_2, "CHAPTER_3_DECISION_2" });
    messagesMap.insert({Chapters::BAD_DECISION, "BAD_DECISION" });
    messagesMap.insert({Chapters::BAD_CHAPTER, "BAD_CHAPTER"});
    messagesMap.insert({Chapters::GAME_OVER, "GAME_OVER"});

    auto iterator  = messagesMap.find(orderKey);

    return iterator == messagesMap.end() ? "Mas despacio cerebrito, ese capitulo todavia no existe" : iterator -> second;
}

