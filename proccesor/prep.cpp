# 1 "proccesor.cpp"
# 1 "<command-line>"
# 1 "proccesor.cpp"
# 1 "processor.h" 1
       

# 1 "str.h" 1






# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 1 3
# 19 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\_mingw.h" 1 3
# 32 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\_mingw.h" 3
       
# 33 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\_mingw.h" 3
# 20 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 2 3






# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stddef.h" 1 3 4
# 212 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 353 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stddef.h" 3 4
typedef short unsigned int wint_t;
# 27 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 2 3

# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stdarg.h" 1 3 4
# 40 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 29 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 2 3
# 129 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
typedef struct _iobuf
{
 char* _ptr;
 int _cnt;
 char* _base;
 int _flag;
 int _file;
 int _charbuf;
 int _bufsiz;
 char* _tmpfname;
} FILE;
# 154 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
extern __attribute__ ((__dllimport__)) FILE _iob[];
# 163 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
extern "C" {





 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fopen (const char*, const char*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) freopen (const char*, const char*, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fflush (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fclose (FILE*);

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) remove (const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rename (const char*, const char*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tmpfile (void);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tmpnam (char*);


 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _tempnam (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _rmtmp(void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _unlink (const char*);


 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tempnam (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rmtmp(void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) unlink (const char*);



 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) setvbuf (FILE*, char*, int, size_t);

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) setbuf (FILE*, char*);
# 204 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_fprintf(FILE*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_printf(const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_sprintf(char*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_snprintf(char*, size_t, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vfprintf(FILE*, const char*, __gnuc_va_list);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vprintf(const char*, __gnuc_va_list);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vsprintf(char*, const char*, __gnuc_va_list);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vsnprintf(char*, size_t, const char*, __gnuc_va_list);
# 293 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fprintf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) printf (const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) sprintf (char*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfprintf (FILE*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vprintf (const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsprintf (char*, const char*, __gnuc_va_list);
# 308 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_fprintf(FILE*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_printf(const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_sprintf(char*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_vfprintf(FILE*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_vprintf(const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_vsprintf(char*, const char*, __gnuc_va_list);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _snprintf (char*, size_t, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vsnprintf (char*, size_t, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vscprintf (const char*, __gnuc_va_list);
# 331 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) snprintf (char *, size_t, const char *, ...);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsnprintf (char *, size_t, const char *, __gnuc_va_list);

int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vscanf (const char * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfscanf (FILE * __restrict__, const char * __restrict__,
       __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsscanf (const char * __restrict__,
       const char * __restrict__, __gnuc_va_list);







 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fscanf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) scanf (const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) sscanf (const char*, const char*, ...);




 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetc (FILE*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgets (char*, int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputc (int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputs (const char*, FILE*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) gets (char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) puts (const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ungetc (int, FILE*);







 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _filbuf (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _flsbuf (int, FILE*);



inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getc (FILE* __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) *__F->_ptr++
    : _filbuf (__F);
}

inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putc (int __c, FILE* __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) (*__F->_ptr++ = (char)__c)
    : _flsbuf (__c, __F);
}

inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getchar (void)
{
  return (--(&_iob[0])->_cnt >= 0)
    ? (int) (unsigned char) *(&_iob[0])->_ptr++
    : _filbuf ((&_iob[0]));
}

inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putchar(int __c)
{
  return (--(&_iob[1])->_cnt >= 0)
    ? (int) (unsigned char) (*(&_iob[1])->_ptr++ = (char)__c)
    : _flsbuf (__c, (&_iob[1]));}
# 412 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fread (void*, size_t, size_t, FILE*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwrite (const void*, size_t, size_t, FILE*);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fseek (FILE*, long, int);
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ftell (FILE*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rewind (FILE*);
# 455 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
typedef long long fpos_t;




 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetpos (FILE*, fpos_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fsetpos (FILE*, const fpos_t*);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) feof (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ferror (FILE*);


inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) feof (FILE* __F)
  { return __F->_flag & 0x0010; }
inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ferror (FILE* __F)
  { return __F->_flag & 0x0020; }





 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) clearerr (FILE*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) perror (const char*);






 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _popen (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _pclose (FILE*);


 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) popen (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) pclose (FILE*);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _flushall (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fgetchar (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fputchar (int);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fdopen (int, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fileno (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fcloseall (void);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fsopen (const char*, const char*, int);

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getmaxstdio (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _setmaxstdio (int);
# 522 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetchar (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputchar (int);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fdopen (int, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fileno (FILE*);
# 534 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\sys\\types.h" 1 3
# 21 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\sys\\types.h" 3
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stddef.h" 1 3 4
# 147 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 22 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\sys\\types.h" 2 3





typedef long __time32_t;




typedef long long __time64_t;
# 45 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\sys\\types.h" 3
typedef __time32_t time_t;






typedef long _off_t;


typedef _off_t off_t;







typedef unsigned int _dev_t;





typedef _dev_t dev_t;






typedef short _ino_t;


typedef _ino_t ino_t;






typedef int _pid_t;


typedef _pid_t pid_t;






typedef unsigned short _mode_t;


typedef _mode_t mode_t;






typedef int _sigset_t;


typedef _sigset_t sigset_t;





typedef int _ssize_t;


typedef _ssize_t ssize_t;





typedef long long fpos64_t;




typedef long long off64_t;



typedef unsigned int useconds_t;
# 535 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 2 3
inline FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fopen64 (const char* filename, const char* mode)
{
  return fopen (filename, mode);
}

int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fseeko64 (FILE*, off64_t, int);






inline off64_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ftello64 (FILE * stream)
{
  fpos_t pos;
  if (fgetpos(stream, &pos))
    return -1LL;
  else
   return ((off64_t) pos);
}
# 563 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwprintf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wprintf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _snwprintf (wchar_t*, size_t, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfwprintf (FILE*, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vwprintf (const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vsnwprintf (wchar_t*, size_t, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vscwprintf (const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwscanf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wscanf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swscanf (const wchar_t*, const wchar_t*, ...);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetwc (FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputwc (wchar_t, FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ungetwc (wchar_t, FILE*);



 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swprintf (wchar_t*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vswprintf (wchar_t*, const wchar_t*, __gnuc_va_list);



 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetws (wchar_t*, int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputws (const wchar_t*, FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getwc (FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getwchar (void);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getws (wchar_t*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putwc (wint_t, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putws (const wchar_t*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putwchar (wint_t);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfdopen(int, const wchar_t *);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfopen (const wchar_t*, const wchar_t*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfreopen (const wchar_t*, const wchar_t*, FILE*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfsopen (const wchar_t*, const wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtmpnam (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtempnam (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wrename (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wremove (const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wperror (const wchar_t*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wpopen (const wchar_t*, const wchar_t*);



int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) snwprintf (wchar_t* s, size_t n, const wchar_t* format, ...);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsnwprintf (wchar_t* s, size_t n, const wchar_t* format, __gnuc_va_list arg);





int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vwscanf (const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfwscanf (FILE * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vswscanf (const wchar_t * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
# 625 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdio.h" 3
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wpopen (const wchar_t*, const wchar_t*);






 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fgetwchar (void);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fputwchar (wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getw (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putw (int, FILE*);


 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetwchar (void);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputwchar (wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getw (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putw (int, FILE*);





}
# 8 "str.h" 2
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 1 3
# 21 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stddef.h" 1 3 4
# 22 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 2 3
# 60 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
extern "C" {
# 71 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
extern int _argc;
extern char** _argv;




extern int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p___argc(void);
extern char*** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p___argv(void);
extern wchar_t*** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p___wargv(void);
# 112 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
   extern __attribute__ ((__dllimport__)) int __mb_cur_max;
# 137 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
 int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _errno(void);


 int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __doserrno(void);
# 149 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
  extern char *** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__environ(void);
  extern wchar_t *** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__wenviron(void);
# 172 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
# 196 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
extern __attribute__ ((__dllimport__)) char* _sys_errlist[];
# 209 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__osver(void);
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__winver(void);
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__winmajor(void);
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__winminor(void);







extern __attribute__ ((__dllimport__)) unsigned int _osver;
extern __attribute__ ((__dllimport__)) unsigned int _winver;
extern __attribute__ ((__dllimport__)) unsigned int _winmajor;
extern __attribute__ ((__dllimport__)) unsigned int _winminor;
# 260 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
 char** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__pgmptr(void);

 wchar_t** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__wpgmptr(void);
# 293 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
extern __attribute__ ((__dllimport__)) int _fmode;
# 303 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atof (const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atoi (const char*);
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atol (const char*);

 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtof (const wchar_t *);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtoi (const wchar_t *);
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtol (const wchar_t *);


double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __strtod (const char*, char**);
extern double __attribute__((__cdecl__)) __attribute__ ((__nothrow__))
strtod (const char* __restrict__ __nptr, char** __restrict__ __endptr);
float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtof (const char * __restrict__, char ** __restrict__);
long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtold (const char * __restrict__, char ** __restrict__);




 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtol (const char*, char**, int);
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtoul (const char*, char**, int);



 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstol (const wchar_t*, wchar_t**, int);
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstoul (const wchar_t*, wchar_t**, int);
 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstod (const wchar_t*, wchar_t**);

float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstof( const wchar_t * __restrict__, wchar_t ** __restrict__);
long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);


 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wgetenv(const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wputenv(const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsearchenv(const wchar_t*, const wchar_t*, wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsystem(const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wmakepath(wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsplitpath (const wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfullpath (wchar_t*, const wchar_t*, size_t);




 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstombs (char*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wctomb (char*, wchar_t);

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mblen (const char*, size_t);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbstowcs (wchar_t*, const char*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbtowc (wchar_t*, const char*, size_t);

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rand (void);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) srand (unsigned int);

 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) calloc (size_t, size_t) __attribute__ ((__malloc__));
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) malloc (size_t) __attribute__ ((__malloc__));
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) realloc (void*, size_t);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) free (void*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) abort (void) __attribute__ ((__noreturn__));
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) exit (int) __attribute__ ((__noreturn__));


int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atexit (void (*)(void));

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) system (const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getenv (const char*);


 void* __attribute__((__cdecl__)) bsearch (const void*, const void*, size_t, size_t,
          int (*)(const void*, const void*));
 void __attribute__((__cdecl__)) qsort(void*, size_t, size_t,
      int (*)(const void*, const void*));

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) abs (int) __attribute__ ((__const__));
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) labs (long) __attribute__ ((__const__));
# 385 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

 div_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) div (int, int) __attribute__ ((__const__));
 ldiv_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ldiv (long, long) __attribute__ ((__const__));







 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _beep (unsigned int, unsigned int) __attribute__ ((__deprecated__));

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _seterrormode (int) __attribute__ ((__deprecated__));
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _sleep (unsigned long) __attribute__ ((__deprecated__));

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _exit (int) __attribute__ ((__noreturn__));



typedef int (* _onexit_t)(void);
_onexit_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _onexit( _onexit_t );

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putenv (const char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _searchenv (const char*, const char*, char*);

 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _gcvt (double, int, char*);

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _makepath (char*, const char*, const char*, const char*, const char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _splitpath (const char*, char*, char*, char*, char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fullpath (char*, const char*, size_t);

 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _itoa (int, char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ltoa (long, char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ultoa(unsigned long, char*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _itow (int, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ltow (long, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ultow (unsigned long, wchar_t*, int);


 long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _atoi64(const char *);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _i64toa(long long, char *, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ui64toa(unsigned long long, char *, int);
 long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtoi64(const wchar_t *);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _i64tow(long long, wchar_t *, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ui64tow(unsigned long long, wchar_t *, int);

 unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) (_rotl)(unsigned int, int) __attribute__ ((__const__));
 unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) (_rotr)(unsigned int, int) __attribute__ ((__const__));
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) (_lrotl)(unsigned long, int) __attribute__ ((__const__));
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) (_lrotr)(unsigned long, int) __attribute__ ((__const__));

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _set_error_mode (int);
# 477 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putenv (const char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) searchenv (const char*, const char*, char*);

 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) itoa (int, char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ltoa (long, char*, int);


 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) gcvt (double, int, char*);
# 497 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _Exit(int) __attribute__ ((__noreturn__));





typedef struct { long long quot, rem; } lldiv_t;

lldiv_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) lldiv (long long, long long) __attribute__ ((__const__));

long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) llabs(long long);





long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtoll (const char* __restrict__, char** __restrict, int);
unsigned long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtoull (const char* __restrict__, char** __restrict__, int);


long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atoll (const char *);


long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wtoll (const wchar_t *);
char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) lltoa (long long, char *, int);
char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ulltoa (unsigned long long , char *, int);
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) lltow (long long, wchar_t *, int);
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ulltow (unsigned long long, wchar_t *, int);
# 549 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\stdlib.h" 3
}
# 9 "str.h" 2
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\string.h" 1 3
# 24 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\string.h" 3
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stddef.h" 1 3 4
# 25 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\string.h" 2 3





extern "C" {





 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memchr (const void*, int, size_t) __attribute__ ((__pure__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memcmp (const void*, const void*, size_t) __attribute__ ((__pure__));
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memcpy (void*, const void*, size_t);
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memmove (void*, const void*, size_t);
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memset (void*, int, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcat (char*, const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strchr (const char*, int) __attribute__ ((__pure__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcmp (const char*, const char*) __attribute__ ((__pure__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcoll (const char*, const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcpy (char*, const char*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcspn (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strerror (int);

 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strlen (const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strncat (char*, const char*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strncmp (const char*, const char*, size_t) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strncpy (char*, const char*, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strpbrk (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strrchr (const char*, int) __attribute__ ((__pure__));
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strspn (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strstr (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtok (char*, const char*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strxfrm (char*, const char*, size_t);





 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strerror (const char *);
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _memccpy (void*, const void*, int, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _memicmp (const void*, const void*, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strdup (const char*) __attribute__ ((__malloc__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strcmpi (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _stricmp (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _stricoll (const char*, const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strlwr (char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strnicmp (const char*, const char*, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strnset (char*, int, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strrev (char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strset (char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strupr (char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _swab (const char*, char*, size_t);


 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strncoll(const char*, const char*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strnicoll(const char*, const char*, size_t);
# 90 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\string.h" 3
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memccpy (void*, const void*, int, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memicmp (const void*, const void*, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strdup (const char*) __attribute__ ((__malloc__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcmpi (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) stricmp (const char*, const char*);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcasecmp (const char*, const char *);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) stricoll (const char*, const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strlwr (char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strnicmp (const char*, const char*, size_t);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strncasecmp (const char *, const char *, size_t);





 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strnset (char*, int, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strrev (char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strset (char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strupr (char*);

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swab (const char*, char*, size_t);
# 126 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\string.h" 3
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscat (wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcschr (const wchar_t*, wchar_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscpy (wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscspn (const wchar_t*, const wchar_t*);

 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcslen (const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsncat (wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsncmp(const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsncpy(wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcspbrk(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsrchr(const wchar_t*, wchar_t);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsspn(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsstr(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstok(wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsxfrm(wchar_t*, const wchar_t*, size_t);
# 152 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\string.h" 3
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsdup (const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsupr (wchar_t*);


 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsncoll(const wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsnicoll(const wchar_t*, const wchar_t*, size_t);
# 173 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\string.h" 3
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscmpi (const wchar_t * __ws1, const wchar_t * __ws2);





 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsdup (const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsupr (wchar_t*);
# 196 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\string.h" 3
}
# 10 "str.h" 2
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 1 3
# 23 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 3
extern "C" {
# 38 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 3
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _assert (const char*, const char*, int) __attribute__ ((__noreturn__));
# 48 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 3
}
# 11 "str.h" 2
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\ctype.h" 1 3
# 20 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\ctype.h" 3
# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\lib\\gcc\\i686-pc-mingw32\\4.8.1\\include\\stddef.h" 1 3 4
# 21 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\ctype.h" 2 3
# 45 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\ctype.h" 3
extern "C" {


 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isalnum(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isalpha(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iscntrl(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isdigit(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isgraph(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) islower(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isprint(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ispunct(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isspace(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isupper(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isxdigit(int);



int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isblank (int);



 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _isctype (int, int);



 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tolower(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) toupper(int);
# 83 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\ctype.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _tolower(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _toupper(int);
# 112 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\ctype.h" 3
  extern __attribute__ ((__dllimport__)) unsigned short _ctype[];


  extern __attribute__ ((__dllimport__)) unsigned short* _pctype;
# 188 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\ctype.h" 3
typedef wchar_t wctype_t;



 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswalnum(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswalpha(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswascii(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswcntrl(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswctype(wint_t, wctype_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) is_wctype(wint_t, wctype_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswdigit(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswgraph(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswlower(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswprint(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswpunct(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswspace(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswupper(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswxdigit(wint_t);



int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswblank (wint_t);





 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) towlower (wint_t);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) towupper (wint_t);

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isleadbyte (int);
# 246 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\ctype.h" 3
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __isascii (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __toascii (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __iscsymf (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __iscsym (int);
# 260 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\ctype.h" 3
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isascii (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) toascii (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iscsymf (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iscsym (int);





}
# 12 "str.h" 2


struct String
    {
    size_t length = 0;
    char* adress = nullptr;
    };


struct Text
    {
    char* Buf = nullptr;
    long long BufSize = 0;
    int count_n = 0;
    String* str = nullptr;
    };
# 37 "str.h"
long long GetFileSize(FILE* file);






void replace_slash_n(char* Buf, size_t BufSize);






void Parsing_pointers(char* Buf, int Number_lines, String* text);





int Number_lines(char* Buf, size_t BufSize);
# 66 "str.h"
void bubble_Sort(void* text1, size_t text_len, int (*CompFunc)(const void* s1, const void* s2));
# 76 "str.h"
int Strcmp(const void* s1, const void* s2);
# 86 "str.h"
int Strcmp_Reverse(const void* s1, const void* s2);






void Output(FILE* file1, String* text, int count_n);






void OutputSourceFile(FILE* file1, char* Buf, size_t BufSize);






void SwapStrings(String* a, String* b);
# 116 "str.h"
void qSort(void* text1, size_t left, size_t right, int (*CompFunc)(const void* s1, const void* s2));






bool is_valid(char symbol);






int find_valid(const String* str, int start, int delta);






void OutputToCmd(String* text, int count_n);






void File_input(FILE* file, Text* data);






void Free(Text* data);
# 4 "processor.h" 2
# 1 "stack.h" 1



# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 1 3
# 23 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 3
extern "C" {
# 38 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 3
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _assert (const char*, const char*, int) __attribute__ ((__noreturn__));
# 48 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 3
}
# 5 "stack.h" 2

# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 1 3
# 16 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
       
# 17 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
# 90 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
extern "C" {
# 134 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
struct _exception
{
 int type;
 char *name;
 double arg1;
 double arg2;
 double retval;
};

 double __attribute__((__cdecl__)) sin (double);
 double __attribute__((__cdecl__)) cos (double);
 double __attribute__((__cdecl__)) tan (double);
 double __attribute__((__cdecl__)) sinh (double);
 double __attribute__((__cdecl__)) cosh (double);
 double __attribute__((__cdecl__)) tanh (double);
 double __attribute__((__cdecl__)) asin (double);
 double __attribute__((__cdecl__)) acos (double);
 double __attribute__((__cdecl__)) atan (double);
 double __attribute__((__cdecl__)) atan2 (double, double);
 double __attribute__((__cdecl__)) exp (double);
 double __attribute__((__cdecl__)) log (double);
 double __attribute__((__cdecl__)) log10 (double);
 double __attribute__((__cdecl__)) pow (double, double);
 double __attribute__((__cdecl__)) sqrt (double);
 double __attribute__((__cdecl__)) ceil (double);
 double __attribute__((__cdecl__)) floor (double);
 double __attribute__((__cdecl__)) fabs (double);
 double __attribute__((__cdecl__)) ldexp (double, int);
 double __attribute__((__cdecl__)) frexp (double, int*);
 double __attribute__((__cdecl__)) modf (double, double*);
 double __attribute__((__cdecl__)) fmod (double, double);
# 210 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
struct _complex
{
 double x;
 double y;
};

 double __attribute__((__cdecl__)) _cabs (struct _complex);

 double __attribute__((__cdecl__)) _hypot (double, double);
 double __attribute__((__cdecl__)) _j0 (double);
 double __attribute__((__cdecl__)) _j1 (double);
 double __attribute__((__cdecl__)) _jn (int, double);
 double __attribute__((__cdecl__)) _y0 (double);
 double __attribute__((__cdecl__)) _y1 (double);
 double __attribute__((__cdecl__)) _yn (int, double);
 int __attribute__((__cdecl__)) _matherr (struct _exception *);
# 234 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
 double __attribute__((__cdecl__)) _chgsign (double);
 double __attribute__((__cdecl__)) _copysign (double, double);
 double __attribute__((__cdecl__)) _logb (double);
 double __attribute__((__cdecl__)) _nextafter (double, double);
 double __attribute__((__cdecl__)) _scalb (double, long);

 int __attribute__((__cdecl__)) _finite (double);
 int __attribute__((__cdecl__)) _fpclass (double);
 int __attribute__((__cdecl__)) _isnan (double);
# 254 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
 double __attribute__((__cdecl__)) j0 (double);
 double __attribute__((__cdecl__)) j1 (double);
 double __attribute__((__cdecl__)) jn (int, double);
 double __attribute__((__cdecl__)) y0 (double);
 double __attribute__((__cdecl__)) y1 (double);
 double __attribute__((__cdecl__)) yn (int, double);

 double __attribute__((__cdecl__)) chgsign (double);
# 270 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
 int __attribute__((__cdecl__)) finite (double);
 int __attribute__((__cdecl__)) fpclass (double);
# 324 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
typedef long double float_t;
typedef long double double_t;
# 354 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
extern int __attribute__((__cdecl__)) __fpclassifyf (float);
extern int __attribute__((__cdecl__)) __fpclassify (double);
extern int __attribute__((__cdecl__)) __fpclassifyl (long double);
# 379 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
extern int __attribute__((__cdecl__)) __isnan (double);
extern int __attribute__((__cdecl__)) __isnanf (float);
extern int __attribute__((__cdecl__)) __isnanl (long double);
# 419 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
extern int __attribute__((__cdecl__)) __signbit (double);
extern int __attribute__((__cdecl__)) __signbitf (float);
extern int __attribute__((__cdecl__)) __signbitl (long double);
# 447 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
extern float __attribute__((__cdecl__)) sinf (float);
extern long double __attribute__((__cdecl__)) sinl (long double);

extern float __attribute__((__cdecl__)) cosf (float);
extern long double __attribute__((__cdecl__)) cosl (long double);

extern float __attribute__((__cdecl__)) tanf (float);
extern long double __attribute__((__cdecl__)) tanl (long double);

extern float __attribute__((__cdecl__)) asinf (float);
extern long double __attribute__((__cdecl__)) asinl (long double);

extern float __attribute__((__cdecl__)) acosf (float);
extern long double __attribute__((__cdecl__)) acosl (long double);

extern float __attribute__((__cdecl__)) atanf (float);
extern long double __attribute__((__cdecl__)) atanl (long double);

extern float __attribute__((__cdecl__)) atan2f (float, float);
extern long double __attribute__((__cdecl__)) atan2l (long double, long double);


extern float __attribute__((__cdecl__)) sinhf (float);




extern long double __attribute__((__cdecl__)) sinhl (long double);

extern float __attribute__((__cdecl__)) coshf (float);




extern long double __attribute__((__cdecl__)) coshl (long double);

extern float __attribute__((__cdecl__)) tanhf (float);




extern long double __attribute__((__cdecl__)) tanhl (long double);



extern double __attribute__((__cdecl__)) acosh (double);
extern float __attribute__((__cdecl__)) acoshf (float);
extern long double __attribute__((__cdecl__)) acoshl (long double);


extern double __attribute__((__cdecl__)) asinh (double);
extern float __attribute__((__cdecl__)) asinhf (float);
extern long double __attribute__((__cdecl__)) asinhl (long double);


extern double __attribute__((__cdecl__)) atanh (double);
extern float __attribute__((__cdecl__)) atanhf (float);
extern long double __attribute__((__cdecl__)) atanhl (long double);



extern float __attribute__((__cdecl__)) expf (float);




extern long double __attribute__((__cdecl__)) expl (long double);


extern double __attribute__((__cdecl__)) exp2(double);
extern float __attribute__((__cdecl__)) exp2f(float);
extern long double __attribute__((__cdecl__)) exp2l(long double);



extern double __attribute__((__cdecl__)) expm1(double);
extern float __attribute__((__cdecl__)) expm1f(float);
extern long double __attribute__((__cdecl__)) expm1l(long double);


extern float __attribute__((__cdecl__)) frexpf (float, int*);




extern long double __attribute__((__cdecl__)) frexpl (long double, int*);




extern int __attribute__((__cdecl__)) ilogb (double);
extern int __attribute__((__cdecl__)) ilogbf (float);
extern int __attribute__((__cdecl__)) ilogbl (long double);


extern float __attribute__((__cdecl__)) ldexpf (float, int);




extern long double __attribute__((__cdecl__)) ldexpl (long double, int);


extern float __attribute__((__cdecl__)) logf (float);
extern long double __attribute__((__cdecl__)) logl (long double);


extern float __attribute__((__cdecl__)) log10f (float);
extern long double __attribute__((__cdecl__)) log10l (long double);


extern double __attribute__((__cdecl__)) log1p(double);
extern float __attribute__((__cdecl__)) log1pf(float);
extern long double __attribute__((__cdecl__)) log1pl(long double);


extern double __attribute__((__cdecl__)) log2 (double);
extern float __attribute__((__cdecl__)) log2f (float);
extern long double __attribute__((__cdecl__)) log2l (long double);


extern double __attribute__((__cdecl__)) logb (double);
extern float __attribute__((__cdecl__)) logbf (float);
extern long double __attribute__((__cdecl__)) logbl (long double);
# 603 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
extern float __attribute__((__cdecl__)) modff (float, float*);
extern long double __attribute__((__cdecl__)) modfl (long double, long double*);


extern double __attribute__((__cdecl__)) scalbn (double, int);
extern float __attribute__((__cdecl__)) scalbnf (float, int);
extern long double __attribute__((__cdecl__)) scalbnl (long double, int);

extern double __attribute__((__cdecl__)) scalbln (double, long);
extern float __attribute__((__cdecl__)) scalblnf (float, long);
extern long double __attribute__((__cdecl__)) scalblnl (long double, long);



extern double __attribute__((__cdecl__)) cbrt (double);
extern float __attribute__((__cdecl__)) cbrtf (float);
extern long double __attribute__((__cdecl__)) cbrtl (long double);


extern float __attribute__((__cdecl__)) fabsf (float x);
extern long double __attribute__((__cdecl__)) fabsl (long double x);


extern double __attribute__((__cdecl__)) hypot (double, double);
extern float __attribute__((__cdecl__)) hypotf (float, float);




extern long double __attribute__((__cdecl__)) hypotl (long double, long double);


extern float __attribute__((__cdecl__)) powf (float, float);




extern long double __attribute__((__cdecl__)) powl (long double, long double);


extern float __attribute__((__cdecl__)) sqrtf (float);
extern long double __attribute__((__cdecl__)) sqrtl (long double);


extern double __attribute__((__cdecl__)) erf (double);
extern float __attribute__((__cdecl__)) erff (float);
extern long double __attribute__((__cdecl__)) erfl (long double);


extern double __attribute__((__cdecl__)) erfc (double);
extern float __attribute__((__cdecl__)) erfcf (float);
extern long double __attribute__((__cdecl__)) erfcl (long double);


extern double __attribute__((__cdecl__)) lgamma (double);
extern float __attribute__((__cdecl__)) lgammaf (float);
extern long double __attribute__((__cdecl__)) lgammal (long double);


extern double __attribute__((__cdecl__)) tgamma (double);
extern float __attribute__((__cdecl__)) tgammaf (float);
extern long double __attribute__((__cdecl__)) tgammal (long double);


extern float __attribute__((__cdecl__)) ceilf (float);
extern long double __attribute__((__cdecl__)) ceill (long double);


extern float __attribute__((__cdecl__)) floorf (float);
extern long double __attribute__((__cdecl__)) floorl (long double);


extern double __attribute__((__cdecl__)) nearbyint ( double);
extern float __attribute__((__cdecl__)) nearbyintf (float);
extern long double __attribute__((__cdecl__)) nearbyintl (long double);



extern double __attribute__((__cdecl__)) rint (double);
extern float __attribute__((__cdecl__)) rintf (float);
extern long double __attribute__((__cdecl__)) rintl (long double);


extern long __attribute__((__cdecl__)) lrint (double);
extern long __attribute__((__cdecl__)) lrintf (float);
extern long __attribute__((__cdecl__)) lrintl (long double);

extern long long __attribute__((__cdecl__)) llrint (double);
extern long long __attribute__((__cdecl__)) llrintf (float);
extern long long __attribute__((__cdecl__)) llrintl (long double);
# 771 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
extern double __attribute__((__cdecl__)) round (double);
extern float __attribute__((__cdecl__)) roundf (float);
extern long double __attribute__((__cdecl__)) roundl (long double);


extern long __attribute__((__cdecl__)) lround (double);
extern long __attribute__((__cdecl__)) lroundf (float);
extern long __attribute__((__cdecl__)) lroundl (long double);

extern long long __attribute__((__cdecl__)) llround (double);
extern long long __attribute__((__cdecl__)) llroundf (float);
extern long long __attribute__((__cdecl__)) llroundl (long double);



extern double __attribute__((__cdecl__)) trunc (double);
extern float __attribute__((__cdecl__)) truncf (float);
extern long double __attribute__((__cdecl__)) truncl (long double);


extern float __attribute__((__cdecl__)) fmodf (float, float);
extern long double __attribute__((__cdecl__)) fmodl (long double, long double);


extern double __attribute__((__cdecl__)) remainder (double, double);
extern float __attribute__((__cdecl__)) remainderf (float, float);
extern long double __attribute__((__cdecl__)) remainderl (long double, long double);


extern double __attribute__((__cdecl__)) remquo(double, double, int *);
extern float __attribute__((__cdecl__)) remquof(float, float, int *);
extern long double __attribute__((__cdecl__)) remquol(long double, long double, int *);


extern double __attribute__((__cdecl__)) copysign (double, double);
extern float __attribute__((__cdecl__)) copysignf (float, float);
extern long double __attribute__((__cdecl__)) copysignl (long double, long double);


extern double __attribute__((__cdecl__)) nan(const char *tagp);
extern float __attribute__((__cdecl__)) nanf(const char *tagp);
extern long double __attribute__((__cdecl__)) nanl(const char *tagp);
# 821 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
extern double __attribute__((__cdecl__)) nextafter (double, double);
extern float __attribute__((__cdecl__)) nextafterf (float, float);
extern long double __attribute__((__cdecl__)) nextafterl (long double, long double);


extern double __attribute__((__cdecl__)) nexttoward (double, long double);
extern float __attribute__((__cdecl__)) nexttowardf (float, long double);
extern long double __attribute__((__cdecl__)) nexttowardl (long double, long double);



extern double __attribute__((__cdecl__)) fdim (double x, double y);
extern float __attribute__((__cdecl__)) fdimf (float x, float y);
extern long double __attribute__((__cdecl__)) fdiml (long double x, long double y);







extern double __attribute__((__cdecl__)) fmax (double, double);
extern float __attribute__((__cdecl__)) fmaxf (float, float);
extern long double __attribute__((__cdecl__)) fmaxl (long double, long double);


extern double __attribute__((__cdecl__)) fmin (double, double);
extern float __attribute__((__cdecl__)) fminf (float, float);
extern long double __attribute__((__cdecl__)) fminl (long double, long double);



extern double __attribute__((__cdecl__)) fma (double, double, double);
extern float __attribute__((__cdecl__)) fmaf (float, float, float);
extern long double __attribute__((__cdecl__)) fmal (long double, long double, long double);
# 910 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\math.h" 3
}
# 7 "stack.h" 2


typedef double Stack_type;
typedef long long hash_type;
typedef unsigned long long canary_type;
# 55 "stack.h"
typedef enum
    {
    NO_ERROR = 0,
    NULL_STACK = 1 << 0,
 NULL_DATA = 1 << 1,
 SIZE_LESS_THAN_ZERO = 1 << 2,
 POS_LESS_THAN_ZERO = 1 << 3,
 SIZE_LESS_THAN_POS = 1 << 4,
 STACK_LEFT_CANARY_DAMAGED = 1 << 5,
 STACK_RIGHT_CANARY_DAMAGED = 1 << 6,
 DATA_LEFT_CANARY_DAMAGED = 1 << 7,
 DATA_RIGHT_CANARY_DAMAGED = 1 << 8,
 WRONG_HASH_DATA = 1 << 9,
 WRONG_HASH_STACK = 1 << 10,
 USE_STACK_AFTER_DESTROY = 1 << 11,
    POP_NULL = 1 << 12,
    WRONG_NEW_SIZE = 1 << 13,
    NUMBER_OF_ERROR = 14,
    }ERROR;


typedef struct
    {
    ERROR CodeError;
    const char* NameError;
    }STACK_STATUS;


const STACK_STATUS ErrorArray[] = {
    {NO_ERROR, "NO ERROR"},
    {NULL_STACK, "NULL STACK"},
    {NULL_DATA, "NULL DATA"},
    {SIZE_LESS_THAN_ZERO, "SIZE LESS THAN ZERO"},
    {POS_LESS_THAN_ZERO, "POSITION LESS THAN ZERO"},
    {SIZE_LESS_THAN_POS, "SIZE LESS THAN POSITION"},
    {STACK_LEFT_CANARY_DAMAGED, "STACK LEFT CANARY DAMAGED"},
    {STACK_RIGHT_CANARY_DAMAGED, "STACK RIGHT CANARY DAMAGED"},
    {DATA_LEFT_CANARY_DAMAGED, "DATA LEFT CANARY DAMAGED"},
    {DATA_RIGHT_CANARY_DAMAGED, "DATA RIGHT CANARY DAMAGED"},
    {WRONG_HASH_DATA, "WRONG HASH DATA"},
    {WRONG_HASH_STACK, "WRONG HASH STACK"},
    {USE_STACK_AFTER_DESTROY, "USE STACK AFTER DESTROY"},
    {POP_NULL, "STACK IS EMPTY"},
    {WRONG_NEW_SIZE, "WRONG NEW SIZE"}};


static FILE* logfile = __null;


const int sz = 4;
const int Size_extend = 2;


struct Stack
    {
   




    Stack_type* stack_data = {};
    int stack_size = 0;
    int stack_pos = 0;
    int stack_status = 0;

   





   



    };


void StackCtor(Stack* stk);

int StackPush(Stack* stk, Stack_type value);

int StackPop(Stack* stk, Stack_type* retvalue);

void StackDtor(Stack* stk);

bool StackOK(Stack* stk);

void StackDumpFunction(Stack* stk, const char* path, const char* signature, unsigned line);

static int StackResize(Stack* stk, int stack_Newsize);

static size_t StackCanarySize();

hash_type static Hash(void* memory, size_t number_of_bytes);

hash_type static CalculateHashStack(Stack* stk);

hash_type static CalculateHashData(Stack* stk);

static void FillPoisonValue(Stack* stk);

static void Copy(Stack* stk, Stack_type* dataResize);
# 5 "processor.h" 2
# 1 "../include/Enum.h" 1
       




# 1 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 1 3
# 23 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 3
extern "C" {
# 38 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 3
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _assert (const char*, const char*, int) __attribute__ ((__noreturn__));
# 48 "c:\\users\\mnmnm\\downloads\\codeblocks\\mingw\\include\\assert.h" 3
}
# 7 "../include/Enum.h" 2






const int NRegistr = 10;

const int NumberJump = 12;

const int RAM_size = 100;

const int EndOfProgram = -1;




enum MaxLen
    {
    MaxLenCmdName = 100,
    MaxLenArg = 100,
    MaxLenLable = 100,
    MaxLenString = 100
    };







enum comand
    {
# 1 "../include/comands.py" 1
IN = 0,







PUSH = 1,
# 28 "../include/comands.py"
OUT = 2,







ADD = 3,
# 45 "../include/comands.py"
SUB = 4,
# 54 "../include/comands.py"
MULT = 5,
# 63 "../include/comands.py"
DIV = 6,
# 79 "../include/comands.py"
SQRT = 7,







SIN = 8,







COS = 9,







HLT = 10,





POP = 11,
# 127 "../include/comands.py"
JMP = 12,







JA = 13,
# 152 "../include/comands.py"
JAE = 14,
# 169 "../include/comands.py"
JB = 15,
# 186 "../include/comands.py"
JBE = 16,
# 203 "../include/comands.py"
JE = 17,
# 220 "../include/comands.py"
JNE = 18,
# 237 "../include/comands.py"
CALL = 19,
# 247 "../include/comands.py"
RET = 20,
# 41 "../include/Enum.h" 2
    };






typedef struct
    {
    int code;
    const char* name_comand;
    int arg;
    } Comand;
# 86 "../include/Enum.h"
const Comand CMD_LIST[] =
    {
    {0, "in", 0},
    {1, "push", 1},
    {2, "out", 0},
    {3, "add", 0},
    {4, "sub", 0},
    {5, "mult", 0},
    {6, "div", 0},
    {7, "sqrt", 0},
    {8, "sin", 0},
    {9, "cos", 0},
    {10, "hlt", 0},
    {11, "pop", 1},
    {12, "jmp", 1},
    {13, "ja", 1},
    {14, "jae", 1},
    {15, "jb", 1},
    {16, "jbe", 1},
    {17, "je", 1},
    {18, "jne", 1},
    {19, "call", 1},
    {20, "ret", 0},
    };

const char REG_LIST[][NRegistr] = {
    {"rax"},
    {"rbx"},
    {"rcx"},
    {"rdx"}};




typedef enum
    {
    COMMAND_MASK = 31,
    HAVE_ARG = 1,
    IMM = 1 << 5,
    REG = 1 << 6,
    RAM = 1 << 7
    } Arguments;
# 6 "processor.h" 2

struct CPU
    {
    Stack_type* RAM;
    Stack stk;
    Stack stkCall;
    Stack_type RegistrArray[NRegistr];
    int code;
    };


static int Calcul(CPU* processor, char* Buffer, long long BufferSize, size_t ip);

void Proccesor(char* Buffer, long long BufSize, CPU* processor);

static double GetArg(CPU* processor, size_t ip, char* Buffer);

bool check(double i, double j);
# 2 "proccesor.cpp" 2
# 15 "proccesor.cpp"
void Proccesor(char* Buffer, long long BufferSize, CPU* processor)
    {
    StackCtor(&processor->stk);
    StackCtor(&processor->stkCall);

    processor->RAM = (Stack_type*)calloc(RAM_size, sizeof(Stack_type));

    size_t ip = 0;

    size_t i = 0;

    printf("%d\n", strlen(Buffer));

    while (ip < BufferSize)
        {
        processor->code = Buffer[ip];
        ip++;

        ip = Calcul(processor, Buffer, BufferSize, ip);

        printf("%d %d\n", ip, i);

        if (ip == EndOfProgram)
            {
            break;
            }
        }

    StackDtor(&processor->stkCall);
    StackDtor(&processor->stk);

    }


static int Calcul(CPU* processor, char* Buffer, long long BufferSize, size_t ip)
    {
    switch (processor->code & COMMAND_MASK)
        {
# 1 "..\\include\\comands.py" 1
{ case IN: { double value1 = 0; scanf("%lf", &value1); StackPush(&processor->stk, value1); } break; }







{ case PUSH: { double value1 = 0; value1 = GetArg(processor, ip, Buffer); if (processor->code & RAM) { StackPush(&processor->stk, processor->RAM[(int)value1]); } else { StackPush(&processor->stk, value1); } return ip + sizeof(int); } break; }
# 28 "..\\include\\comands.py"
{ case OUT: { double value1 = 0; StackPop (&processor->stk, &value1); printf("%lf\n", value1); } break; }







{ case ADD: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); StackPush(&processor->stk, value1 + value2); } break; }
# 45 "..\\include\\comands.py"
{ case SUB: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); StackPush(&processor->stk, value2 - value1); } break; }
# 54 "..\\include\\comands.py"
{ case MULT: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); StackPush(&processor->stk, value1 * value2); } break; }
# 63 "..\\include\\comands.py"
{ case DIV: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); if (value1 == 0) { printf("division by 0"); abort(); } StackPush(&processor->stk, value2 / value1); } break; }
# 79 "..\\include\\comands.py"
{ case SQRT: { double value1 = 0; StackPop (&processor->stk, &value1); StackPush(&processor->stk, sqrt(value1)); } break; }







{ case SIN: { double value1 = 0; StackPop (&processor->stk, &value1); StackPush(&processor->stk, sin(value1)); } break; }







{ case COS: { double value1 = 0; StackPop (&processor->stk, &value1); StackPush(&processor->stk, cos(value1)); } break; }







{ case HLT: { return EndOfProgram; } break; }





{ case POP: { int value1 = 0; value1 = (int)GetArg(processor, ip, Buffer); if (processor->code & RAM) { StackPop (&processor->stk, &processor->RAM[(int)value1]); } else { StackPop (&processor->stk, &processor->RegistrArray[Buffer[ip] - 1]); } return ip + sizeof(int); } break; }
# 127 "..\\include\\comands.py"
{ case JMP: { double arg = 0; arg = GetArg(processor, ip, Buffer); return (int)arg; } break; }







{ case JA: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); StackPush(&processor->stk, value2); StackPush(&processor->stk, value1); if (value2 < value1) { double arg = 0; arg = GetArg(processor, ip, Buffer); return (int)arg; } return ip + sizeof(int); } break; }
# 152 "..\\include\\comands.py"
{ case JAE: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); StackPush(&processor->stk, value2); StackPush(&processor->stk, value1); if (value2 <= value1) { double arg = 0; arg = GetArg(processor, ip, Buffer); return (int)arg; } return ip + sizeof(int); } break; }
# 169 "..\\include\\comands.py"
{ case JB: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); StackPush(&processor->stk, value2); StackPush(&processor->stk, value1); if (value1 < value2) { double arg = 0; arg = GetArg(processor, ip, Buffer); return (int)arg; } return ip + sizeof(int); } break; }
# 186 "..\\include\\comands.py"
{ case JBE: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); StackPush(&processor->stk, value2); StackPush(&processor->stk, value1); if (value1 <= value2) { double arg = 0; arg = GetArg(processor, ip, Buffer); return (int)arg; } return ip + sizeof(int); } break; }
# 203 "..\\include\\comands.py"
{ case JE: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); StackPush(&processor->stk, value2); StackPush(&processor->stk, value1); if (value1 == value2) { double arg = 0; arg = GetArg(processor, ip, Buffer); return (int)arg; } return ip + sizeof(int); } break; }
# 220 "..\\include\\comands.py"
{ case JNE: { double value1 = 0, value2 = 0; StackPop (&processor->stk, &value1); StackPop (&processor->stk, &value2); StackPush(&processor->stk, value2); StackPush(&processor->stk, value1); if (value1 != value2) { double arg = 0; arg = GetArg(processor, ip, Buffer); return (int)arg; } return ip + sizeof(int); } break; }
# 237 "..\\include\\comands.py"
{ case CALL: { double arg = 0; arg = GetArg(processor, ip, Buffer); double ip1 = (double)(ip + sizeof(int)); StackPush(&processor->stkCall, ip1); return (int)arg; } break; }
# 247 "..\\include\\comands.py"
{ case RET: { double arg = 0; StackPop(&processor->stkCall, &arg); return (int)arg; } break; }
# 54 "proccesor.cpp" 2

        default:
            printf("unknown command");

        }

    return ip;
    }





bool check(double i, double j)
    {
    const double EPS = 1e-9;
    return fabs(i - j) < EPS;
    }


static double GetArg(CPU* processor, size_t ip, char* Buffer)
    {
    double value1 = 0;

    if (processor->code & REG)
        {
        value1 = processor->RegistrArray[Buffer[ip] - 1];
        }

    else if (processor->code & IMM)
        {
        value1 = (double)Buffer[ip];
        }

    return value1;
    }
