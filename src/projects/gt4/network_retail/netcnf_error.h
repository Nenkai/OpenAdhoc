/* Define sceNETCNF_* errors (note: netcnf operations handled by PDINETCNF.IRX) */
#define sceNETCNF_NETCNF_NG                 -1   /* no good */
#define sceNETCNF_NETCNF_ALLOC_ERROR        -2   /* no space for memory */
#define sceNETCNF_NETCNF_OPEN_ERROR         -3   /* file open error */
#define sceNETCNF_NETCNF_READ_ERROR         -4   /* file read error */
#define sceNETCNF_NETCNF_WRITE_ERROR        -5   /* file write error */
#define sceNETCNF_NETCNF_SEEK_ERROR         -6   /* file seek error */
#define sceNETCNF_NETCNF_REMOVE_ERROR       -7   /* file remove error */
#define sceNETCNF_NETCNF_ENTRY_NOT_FOUND    -8   /* entry not found */
#define sceNETCNF_NETCNF_INVALID_FNAME      -9   /* invalid fname */
#define sceNETCNF_NETCNF_INVALID_TYPE      -10  /* invalid type */
#define sceNETCNF_NETCNF_INVALID_USR_NAME  -11  /* invalid usr_name */
#define sceNETCNF_NETCNF_TOO_MANY_ENTRIES  -12  /* too many entries */
#define sceNETCNF_NETCNF_ID_ERROR          -13  /* can't get individual ID */
#define sceNETCNF_NETCNF_SYNTAX_ERROR      -14  /* syntax error */
#define sceNETCNF_NETCNF_MAGIC_ERROR       -15  /* magic error */
#define sceNETCNF_NETCNF_CAPACITY_ERROR    -16  /* capacity error */
#define sceNETCNF_NETCNF_UNKNOWN_DEVICE    -17  /* unknown device */
#define sceNETCNF_NETCNF_IO_ERROR          -18  /* I/O error */
#define sceNETCNF_NETCNF_TOO_LONG_STR      -19  /* too long string */
#define sceNETCNF_NETCNF_AOL_CONFIGURATION -20  /* this is AOL configuration */
#define sceNETCNF_NETCNF_LOAD_ATTACH_ERROR -21  /* load_attach error */
/* 100 and 101 seems to have been added later */