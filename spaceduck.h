static const char *colorname[] = {

   	/* 8 normal colors */
       "#000000",
       "#e33400",
       "#5ccc96",
       "#b3a1e6",
       "#00a3cc",
       "#f2ce00",
       "#7a5ccc",
       "#686f9a",
 
    /* 8 bright colors */
       "#686f9a",
       "#e33400",
       "#5ccc96",
       "#b3a1e6",
       "#00a3cc",
       "#f2ce00",
       "#7a5ccc",
       "#f0f1ce",
 
       [255] = 0,
 
       "#ecf0c1", // 256 -> reverse cursor
       "#ecf0c1", // 257 -> cursor
       "#ecf0c1", // 258 -> foreground
       "#0f111b", // 259 -> background

 };
 
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 256;
