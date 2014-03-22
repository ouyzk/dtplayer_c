#ifndef DTSTREAM_API_H
#define DTSTREAM_API_H

#include "dt_av.h"

typedef struct
{
    char *stream_name;
} dtstream_para_t;

int dtstream_open (void **priv, dtstream_para_t * para, void *parent);
int dtstream_read (void *priv, char *buf,int len);
int dtstream_seek (void *priv, int64_t pos);
int dtstream_close (void *priv);

#endif
