/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static int vCenter=1; //1: vertically center dmenu 
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"hack:size=10:weight=bold"
};
static const char *prompt      = "Start >>";/* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ffffff", "#2e86de" },
	[SchemeSel] = { "#ffffff", "#341f97" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[Border] = {"#341f97","#341f97" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static float wRatio = 0.6; //0->1 use -wr

static int drawBorder=1;
static int boderWidth = 4;
