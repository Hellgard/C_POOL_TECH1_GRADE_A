/*
** EPITECH PROJECT, 2021
** display_pixel
** File description:
** display a pixel
*/

#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>

#define WIDTH 1920
#define HEIGHT 1080
#define WINDOW_TITLE "Window"
#define FILEPATH "sprite.jpg"

sfRenderWindow *openWindow(int height, int width, char *name)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {height, width, 32};

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode,
                                   name,
                                   sfDefaultStyle,
                                   NULL);
    return (window);
}

void test()
{
    sfSprite *sprite = sfSprite_create();
    sfVector2f pos = {0, 0};
    sfTexture *texture = sfTexture_createFromFile(FILEPATH, NULL);
    sfRenderWindow *window = openWindow(HEIGHT, WIDTH, WINDOW_TITLE);

    sfSprite_setTexture(sprite, texture, sfFalse);
    sfSprite_setPosition(sprite, pos);

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
    sfRenderWindow_destroy(window);
}

int main()
{
    test();
    return (0);
}
