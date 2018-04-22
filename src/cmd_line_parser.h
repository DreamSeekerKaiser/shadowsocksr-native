//
// Created by ssrlive on 18-4-22.
//

#ifndef __SSR_NATIVE_CMD_LINE_H__
#define __SSR_NATIVE_CMD_LINE_H__

#include <stdbool.h>

struct cmd_line_info {
    char * cfg_file;
    bool daemon_flag;
    bool help_flag;
};

struct cmd_line_info * parse_command_line(int argc, char * const argv[]);

#endif // __SSR_NATIVE_CMD_LINE_H__