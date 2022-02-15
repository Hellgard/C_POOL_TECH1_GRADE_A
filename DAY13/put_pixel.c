/*
** EPITECH PROJECT, 2021
**
** File description:
**
*/
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include "framebuffer.h"

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

void set_object_texture(object_t *obj, framebuffer_t *framebuffer, unsigned int x, unsigned int y) {
    obj->texture = sfTexture_create(framebuffer->width, framebuffer->height);

    if (!obj->texture) {
        return;
    }
    sfTexture_updateFromPixels(obj->texture, framebuffer->pixels, framebuffer->width, framebuffer->height, x, y);
}

void set_object_sprite(object_t *obj, sfColor color) {
    obj->sprite = sfSprite_create();

    if (!obj->sprite) {
        return;
    }
    sfSprite_setTexture(obj->sprite, obj->texture, sfTrue);
    sfSprite_setColor(obj->sprite, color);
}

void put_pixel(sfRenderWindow *window, framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color)
{
    object_t *obj = create_object();

    if (!obj) {
        return;
    }
    set_object_texture(obj, framebuffer, x, y);
    set_object_sprite(obj, color);
    sfRenderWindow_drawSprite(window, obj->sprite, NULL);
}
