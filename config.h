/* See LICENSE file for copyright and license details. */
/* Custom settings inline with my dwm build. */

/* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:size=12:antialias=true:autohint=true",
	"Noto Sans:size=12:antialias=true:autohint=true",
	"Noto Serif:size=12:antialias=true:autohint=true",
	"Noto Color Emoji:size=12:antialias=true:autohint=true",
	"Font Awesome 5 Free:size=12:antialias=true:autohint=true",
};

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL; 

/* colors based on dwm build */
static const char clr_black[]       = "#000000";
static const char clr_gray []       = "#808080";
static const char clr_white[]       = "#ffffff";

static const char *colors[SchemeLast][2] = {
	/*               fg         bg         */
	[SchemeNorm] = { clr_gray , clr_black },
	[SchemeSel]  = { clr_white, clr_black },

	/* this color doesn't seem to be used with an
	 * unpatched dmenu.
	 */
	[SchemeOut]  = { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
