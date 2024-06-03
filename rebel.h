#ifndef REBEL_H
#define REBEL_H

typedef int                             BOOL;
const int                               TRUE = 1;
const int                               FALSE = 0;

typedef char                            CHAR;
typedef unsigned char                   BYTE;
typedef int                             INT;
typedef float                           FLOAT;
typedef double                          REAL;
typedef void                            VOID;

typedef char *                          CHAR_PTR;
typedef unsigned char *                 BYTE_PTR;
typedef int *                           INT_PTR;
typedef float *                         FLOAT_PTR;
typedef double *                        REAL_PTR;
typedef void *                          VOID_PTR;

#define STRUCT(name, ...)               typedef struct { __VA_ARGS__ } name;
#define UNION(name, ...)                typedef union { __VA_ARGS__ } name;

#ifndef NULL
#define NULL                            ((VOID_PTR)0)
#endif

#define CAST(type, value)               ((type) (value))

#define BEGIN                           {
#define DO                              {
#define THEN                            {
#define DONE                            }
#define END                             }

#define IF(condition)                   if (condition)
#define ELIF(condition)                 else if (condition)
#define ELSE                            else
#define WHILE(condition)                while (condition)
#define FOREVER                         for (;;)
#define FOR(init, condition, increment) for (init; condition; increment)
#define RANGE(start, end, step)         for (INT i = (start); i <= (end); i += (step))
#define LOOP(condition)                 while (condition)
#define UNTIL(condition)                while (!(condition))
#define FOREACH(item, container)        for (typeof(*(container)) *item = (container); item < (container) + ARRAY_SIZE(container); ++item)
#define FORIN(type, item, container)    for (type *item = (container); item < (container) + ARRAY_SIZE(container); ++item)

#define BREAK                           break
#define CONTINUE                        continue
#define RETURN(value)                   return (value)

#define FUN(type, name, ...)            type name(__VA_ARGS__)

#define MAP(function, collection)       for (typeof(*(collection)) *it = (collection); it < (collection) + ARRAY_SIZE(collection); ++it) { function(*it); }

#define MAX(a, b)                       ((a) > (b) ? (a) : (b))
#define MIN(a, b)                       ((a) < (b) ? (a) : (b))
#define ABS(x)                          ((x) < 0 ? -(x) : (x))
#define CLAMP(x, min, max)              MIN(MAX((x), (min)), (max))
#define ARRAY_SIZE(array)               (sizeof(array) / sizeof(*(array)))
#define IN_RANGE(x, min, max)           ((x) >= (min) && (x) <= (max))
#define SQR(x)                          ((x) * (x))
#define CBD(x)                          ((x) * (x) * (x))
#define ROUND(x)                        ((x) < 0 ? ((x) - 0.5f) : ((x) + 0.5f))
#define FLOOR(x)                        ((x) < 0 ? ((x) - 1) : (x))
#define CEIL(x)                         ((x) < 0 ? (x) : ((x) + 1))
#define SIGN(x)                         ((x) < 0 ? -1 : 1)
#define IS_POWER_OF_2(x)                (((x) & ((x) - 1)) == 0)
#define IS_ALIGNED(x, a)                (((x) & ((a) - 1)) == 0)
#define ALIGN(x, a)                     (((x) + ((a) - 1)) & ~((a) - 1))
#define ROUND_UP(x, a)                  (((x) + ((a) - 1)) & ~((a) - 1))
#define ROUND_DOWN(x, a)                ((x) & ~((a) - 1))

#endif
