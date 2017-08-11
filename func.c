struct  s_window*   init_s_window(unsigned int p_w, unsigned int p_h, char* p_title, unsigned short color[])
{
        struct s_window* ret_window;

        ret_window = malloc(sizeof(struct s_window));
        ret_window->sdl_win = SDL_SetVideoMode(p_w, p_h, 32, SDL_HWSURFACE);
        check_SDL_Init(ret_window->sdl_win);
        SDL_WM_SetCaption(p_title, NULL);
        SDL_FillRect(ret_window->sdl_win, NULL, 
                    SDL_MapRGB((ret_window->sdl_win)->format,
                                color[0], color[1], color[2]));

        return (ret_window);
}
