/*
** EPITECH PROJECT, 2021
** get_color.c
** File description:
** get color
*/

int get_colot(unsigned char red, unsigned char green, unsigned char blue)
{
    int color_rgb = red;
    color_rgb = (color_rgb << 8) + green;
    color_rgb = (color_rgb << 8) + blue;
    return (color_rgb);
}
