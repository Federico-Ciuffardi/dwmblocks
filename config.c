#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    /* Command                    | Update Interval  | Update Signal */
    {"$STATUSBAR_BIN/sb-cpubars"  , 1                , 14            },
    {"$STATUSBAR_BIN/sb-membars"  , 1                , 13            },
    {"$STATUSBAR_BIN/disk /"      , 30               , 18            },
    {"$STATUSBAR_BIN/weather"     , 60*60            , 10            },
    /* {"$STATUSBAR_BIN/sb-mailbox"  , 60*10            , 17            }, */
    {"$STATUSBAR_BIN/pacpackages" , 60*60            , 3             },
    {"$STATUSBAR_BIN/battery"     , 30               , 15            },
    {"$STATUSBAR_BIN/volume"      , 0                , 2             },
    {"$STATUSBAR_BIN/clock"       , 30               , 1             },
};

const unsigned short blockCount = LEN(blocks);
