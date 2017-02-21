# Salieri

Salieri is a header which provides definitions for Microsoft's
[source-code annotation language
(SAL)](https://msdn.microsoft.com/en-us/library/hh916383.aspx).
Simply drop the header into your code and use it instead of including
`<sal.h>` directly, and you can use SAL annotations even if you want
your program to be portable to compilers which don't support it.

## SAL?

SAL provides lots of annotations you can use to describe the behavior
of your program.  There is a [Best Practices and Examples
(SAL)](https://msdn.microsoft.com/en-us/library/jj159525.aspx) page on
MSDN if you want to get a very quick idea of how it works, but the
basic idea is that you end up with something like this:

```c
#include <sal.h>

void zero_buffer(_Out_writes_(size) char* buf, size_t size);
```

## Why?

Microsoft ships a `<sal.h>` with MSVC, but AFAIK no other compilers
provide that file.  Unfortunately, conditionally including it is a bit
tricky since you also have to ifdef around every time you actually use
an annotation, which is obviously not feasible.  The result is that,
if you're writing portable software, you don't get to use SAL (even
with MSVC).

Salieri gets around this by providing `#define`s for all the
annotations.  If the platform supports SAL then Salieri will include
sal.h, but on other platforms Salieri usually just defines them to
nothing.  You don't get warnings from the analyzer like you can with
VS, but at least the code compiles.

## Public APIs

Not only is it possible to use Salieri in your public API, it's
recommended.  Doing so allows code using your API to take advantage of
SAL annotations.

All you need to do is ship the header with your other headers.  If
code using your API also includes Salieri there is no problem, even if
the version numbers are different.  There is a guard around
`salieri.h` to prevent inclusion of *older* versions of Salieri, and
everything is implemented with macros so if someone includes a newer
version we simply redefine everything.  If you need more details, just
take a look at the header; it's pretty straightforward.

Really, the only caveat is to make sure the filename doesn't conflict.
For example, don't install to `/usr/include/salieri.h`; instead, use
something like `/usr/include/mylib/salieri.h`, or maybe
`/usr/include/mylib-salieri.h`.

## "Salieri"?

After [Antonio
Salieri](https://en.wikipedia.org/wiki/Antonio_Salieri).  If that
doesn't ring any bells, well,
[enjoy](https://www.youtube.com/results?search_query=Salieri).