//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon |	Comman                       | Update Interva |	Update Signal */
	/* {""    , "$STATUSBAR_BIN/cpu"          , 1              , 14 }, */
	{""    , "$STATUSBAR_BIN/sb-cpubars"      , 1              , 14 },
	{""    , "$STATUSBAR_BIN/sb-membars"      , 1              , 13 },
	{""    , "$STATUSBAR_BIN/disk /"          , 30             , 18 },
	/* {""    , "$STATUSBAR_BIN/tmux"         , 0              , 20 }, */
	/* {""    , "$STATUSBAR_BIN/sb-nettraf"      , 1              , 16 }, */
	{""    , "$STATUSBAR_BIN/weather"         , 3600*1         , 10 },
	/* {""    , "$STATUSBAR_BIN/coronavirus"  , 3600*12        , 11 }, */
	/* {""    , "$STATUSBAR_BIN/news"         , 0              , 4  }, */
	{""    , "$STATUSBAR_BIN/sb-mailbox"      , 60*10          , 17 },
	{""    , "$STATUSBAR_BIN/pacpackages"     , 0              , 3  },
	{""    , "$STATUSBAR_BIN/battery"         , 30             , 15 },
	{""    , "$STATUSBAR_BIN/volume"          , 0              , 2  },
	{""    , "$STATUSBAR_BIN/timer"           , 1              , 5  },
	{""    , "$STATUSBAR_BIN/clock"           , 30             , 1  },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
static char *last_delim = " |";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
