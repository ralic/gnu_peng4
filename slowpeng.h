struct pengset
{
    unsigned         blksize;
    unsigned short  *perm1;
    unsigned short  *perm2;
    unsigned char   *mask;
};


struct pengpipe
{
    unsigned rounds;       /* y dimension */
    unsigned variations;   /* x dimension */
    struct pengset **mtx;     /* 2d matrix */
};



struct pengset *genpengset(unsigned blksize, struct mersennetwister *mt);
struct pengpipe *genpengpipe(unsigned blksize, unsigned rounds, unsigned variations, struct mersennetwister *mt);
void destroypengset(struct pengset *p);
void destroypengpipe(struct pengpipe *p);
void execpengset(struct pengset *p, const unsigned char *buf1, unsigned char *tmpbuf, unsigned char *buf2, char encrypt);
void execpengpipe(struct pengset *p, const unsigned char *buf1, unsigned char *tmpbuf, unsigned char *buf2, char encrypt);
