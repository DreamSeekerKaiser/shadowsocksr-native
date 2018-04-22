//
// Created by ssrlive on 18-4-22.
//

#include <stdlib.h>
#include <getopt.h>

#include "cmd_line_parser.h"
#include "ssr_executive.h"

struct cmd_line_info * parse_command_line(int argc, char * const argv[]) {
    int opt;

    struct cmd_line_info *info = (struct cmd_line_info *)calloc(1, sizeof(*info));

    while (-1 != (opt = getopt(argc, argv, "c:dh"))) {
        switch (opt) {
        case 'c':
            string_safe_assign(&info->cfg_file, optarg);
            break;
        case 'd':
            info->daemon_flag = true;
            break;
        case 'h':
        default:
            info->help_flag = true;
            break;
        }
    }
    return info;
}