#ifndef COLOR_TRANSLATION_H
#define COLOR_TRANSLATION_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#define MAX_COLORPAIR_NAME_CHARS 16

#endif /* COLOR_TRANSLATION_H */