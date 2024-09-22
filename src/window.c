#include "../headers/header.h"

static SDL_Renderer *renderer;
static color_t *colorBuffer;
static SDL_Texture *colorBufferTexture;
static SDL_Window *window;

/**
 * initializeWindow - Initialize window to display the maze
 * Return: true in case of success, false if it fails
 */
bool initializeWindow(void)
{
    SDL_DisplayMode display_mode;
    int fullScreenWidth, fullScreenHeight;

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        fprintf(stderr, "Error initializing SDL.\n");
        return (false);
    }
    
    SDL_GetCurrentDisplayMode(0, &display_mode);
    fullScreenWidth = display_mode.w;
    fullScreenHeight = display_mode.h;

    window = SDL_CreateWindow(
        NULL,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        fullScreenWidth,
        fullScreenHeight,
        SDL_WINDOW_BORDERLESS
    );

    if (!window)
    {
        fprintf(stderr, "Error creating SDL window.\n");
        return (false);
    }

    renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer)
    {
        fprintf(stderr, "Error creating SDL renderer.\n");
        return (false);
    }

    colorBufferTexture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STREAMING,
        fullScreenWidth,
        fullScreenHeight
    );

    if (!colorBufferTexture)
    {
        fprintf(stderr, "Error creating texture.\n");
        return (false);
    }

    return (true);
}
