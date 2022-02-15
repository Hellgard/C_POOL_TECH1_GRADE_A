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
#define BITS_PER_PIXEL 32
#define WINDOW_TITLE "Window"
#define FILEPATH "sprite.jpg"

typedef struct object_s {
    sfTexture *texture;
    sfSprite *sprite;
} object_t;

typedef struct framebuffer_s {
    unsigned char *pixels;
    unsigned int height;
    unsigned int width;
} framebuffer_t;

framebuffer_t *create_framebuffer(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));

    if (!framebuffer) {
        return (NULL);
    }
    framebuffer->height = height;
    framebuffer->width = width;
    framebuffer->pixels = NULL;
    return (framebuffer);
}

object_t *create_object(void)
{
    object_t *obj = malloc(sizeof(object_t));

    if (!obj) {
        return (NULL);
    }
    obj->texture = NULL;
    obj->sprite = NULL;
    return (obj);
}

void set_object_texture(object_t *obj, framebuffer_t *framebuffer) {
    obj->texture = sfTexture_create(WIDTH, HEIGHT);

    sfTexture_updateFromPixels(obj->texture, framebuffer->pixels, framebuffer->width, framebuffer->height, 0, 0);
}

void set_object_sprite(object_t *obj, sfColor color, unsigned int x, unsigned int y) {
    sfVector2f pos = {x, y};

    obj->sprite = sfSprite_create();
    sfSprite_setTexture(obj->sprite, obj->texture, sfFalse);
    sfSprite_setColor(obj->sprite, color);
    sfSprite_setPosition(obj->sprite, pos);
}

void destroyObject(object_t *obj)
{
    sfTexture_destroy(obj->texture);
    sfSprite_destroy(obj->sprite);
    free(obj);
}

void put_pixel(sfRenderWindow *window, framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color)
{
    object_t *obj = create_object();

    if (!obj) {
        return;
    }
    set_object_texture(obj, framebuffer);
    set_object_sprite(obj, color, x, y);
    sfRenderWindow_drawSprite(window, obj->sprite, NULL);
    sfRenderWindow_display(window);
    destroyObject(obj);
}


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

framebuffer_t *set_framebuffer(int width, int height)
{
    int bitsPerPixel = BITS_PER_PIXEL;
    framebuffer_t *framebuffer = create_framebuffer(width, height);

    framebuffer->pixels = malloc(width * height * bitsPerPixel / 8);
    if (!framebuffer->pixels) {
        return (NULL);
    }
    return (framebuffer);
}

void exercice(void)
{
    framebuffer_t *framebuffer = set_framebuffer(WIDTH, HEIGHT);
    sfRenderWindow *window = openWindow(HEIGHT, WIDTH, WINDOW_TITLE);
    sfColor color = {255, 0, 0, 255};

    if (!framebuffer) {
        return;
    }
    while (sfRenderWindow_isOpen(window)) {
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                put_pixel(window, framebuffer, x, y, color);
            }
        }
    }
    sfRenderWindow_destroy(window);
}

int main()
{
    exercice();
    return (0);
}
