struct super_block {
        ...
        ...
        ...
    unsigned long       s_blocksize;
    unsigned char       s_blocksize_bits;
    unsigned char       s_dirt;
    unsigned long long  s_maxbytes; /* Max file size */
    struct file_system_type *s_type;
    struct super_operations *s_op;
    struct dquot_operations *dq_op;
        ...
        ...
        ...
}