/* user and group to drop privileges to */
static const char *user  = "sorig";
static const char *group = "sorig";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#FF8C00",   /* during input */
	[FAILED] = "#F07178",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

static const char *imgpath          = "/home/sorig/Pictures/slock-image.xpm";
static const int imgwidth           = 1366;
static const int imgheight          = 768;
static const int imgoffsetx         = 0;
static const int imgoffsety         = 0;
static const int showimgonlyatstart = 1;

/* default message */
static const char * message = "It's locked for a reason.";

/* text color */
static const char * text_color = "#FFFFFF";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
