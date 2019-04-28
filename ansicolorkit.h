

// use namespaces
namespace ansi {
    const char* RESET = "\e[00m";
    namespace foreground {
        const char* BLACK = "\e[30m";
        const char* RED = "\e[31m";
        const char* GREEN = "\e[32m";
        const char* YELLOW = "\e[33m";
        const char* BLUE = "\e[34m";
        const char* MAGENTA = "\e[35m";
        const char* CYAN = "\e[36m";
        const char* WHITE = "\e[37m";
        const char* DEFAULT = "\e[39m";
    }
    namespace style {
        const char* BOLD = "\e[01m";
        const char* ITALIC = "\e[03m";
        const char* UNDERLINE = "\e[04m";
        const char* INVERSE = "\e[07m";
        const char* STRIKETHROUGH = "\e[09m";
        const char* XBOLD = "\e[22m";
        const char* XITALIC = "\e[23m";
        const char* XUNDERLINE = "\e[24m";
        const char* XINTERSE = "\e[27m";
        const char* XSTRIKETHROUGH = "\e[29m";
    }
    namespace background {
        const char* BLACK = "\e[40m";
        const char* RED = "\e[41m";
        const char* GREEN = "\e[42m";
        const char* YELLOW = "\e[43m";
        const char* BLUE = "\e[44m";
        const char* MAGENTA = "\e[45m";
        const char* CYAN = "\e[46m";
        const char* WHITE = "\e[47m";
        const char* DEFAULT = "\e[49m";
    }
}

