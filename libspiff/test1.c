/* standard C boilerplate */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* libspiff routines for C */
#include <spiff/spiff_c.h>

#define SAMPLE_PLAYLIST "/Users/rjp/Dropbox/Spotify/nokogiri-zimpenfish-fb8c895d4024351c8b5e5d87239f5ad002-Piano.xspf"

int
main (int argc, char **argv)
{
    struct spiff_list *playlist;

    playlist = spiff_parse(SAMPLE_PLAYLIST, "http://frottage.org");
    printf("pl=%p\n", playlist);

    return 0;
} 
