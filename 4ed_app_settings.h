/*
 * Mr. 4th Dimention - Allen Webster
 *
 * 27.01.2016
 *
 * Global app level settings definition
 *
 */

// TOP

struct App_Settings{
    char *user_file;
    b32 user_file_is_strict;
    
    char *init_files[8];
    i32 init_files_count;
    i32 init_files_max;

    i32 initial_line;
    b32 lctrl_lalt_is_altgr;
};

struct App_Models{
    Mem_Options mem;
    App_Settings settings;
    
    Command_Map map_top;
    Command_Map map_file;
    Command_Map map_ui;
    Command_Map *user_maps;
    i32 *map_id_table;
    i32 user_map_count;
    
    Command_Binding prev_command;
    
    Coroutine *command_coroutine;
    u32 command_coroutine_flags[2];
    
    Custom_Command_Function *hooks[hook_type_count];
    
    Font_Set *font_set;
    Style_Font global_font;
    Style style;
    Style_Library styles;
    u32 *palette;
    i32 palette_size;
    
    Editing_Layout layout;
    Working_Set working_set;

    char hot_dir_base_[256];
    Hot_Directory hot_directory;

    Delay delay1, delay2;
    
    Panel *prev_mouse_panel;
    
    Custom_API config_api;
};

// BOTTOM

