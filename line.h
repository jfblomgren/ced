#ifndef _LINE_H
#define _LINE_H

#include <stdlib.h>


typedef struct Line {
    char *content;
    size_t len;
    struct Line *prev;
    struct Line *next;
} Line;


Line *line_new(void);
void line_destroy(Line *line);
void line_append(Line *line1, Line *line2);
void line_prepend(Line *line1, Line *line2);
void line_insert(Line *line, size_t pos, const char *content, size_t len);
size_t line_delete(Line *line, size_t pos, size_t len);


#endif
