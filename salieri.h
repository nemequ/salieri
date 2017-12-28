/**
 * Salieri
 * v1
 *
 * Salieri is a header which contains definitions for the Microsoft
 * source-code annotation language (SAL).  It is *not* an
 * implementation of SAL; that's for compilers and static analyzers.
 * For the most part we just define macros to nothing.
 *
 * The goal is to allow projects to use SAL without creating a hard
 * dependency on it (i.e., you can still use compilers other than
 * MSVC).  Simply include `salieri.h`, which you can/should distribute
 * with your code, instead of `<sal.h>`.
 *
 * Multiple copies of Salieri can be included safely, even different
 * versions.  Including a newer version will simiply replace older
 * definitions with newer ones, and including older versions will have
 * no effect.
 *
 * I don't think anything in here is copyrightable, but just in case:
 *
 *   To the extent possible under law, the author(s) have dedicated
 *   all copyright and related and neighboring rights to this software
 *   to the public domain worldwide. This software is distributed
 *   without any warranty.
 *
 *   For details, see <http://creativecommons.org/publicdomain/zero/1.0/>.
 */

#if !defined(SALIERI_VERSION) || (SALIERI_VERSION < 1)

/* TODO: figure out when <sal.h> first appeared. */
#if defined(_MSC_VER)
#  include <sal.h>
#elif defined(__has_include)
#  if __has_include(<sal.h>)
#    include <sal.h>
#  endif
#endif

/* The main concern for the implementation is that we don't want to
 * replace annotations from <sal.h>, but we *do* want to replace
 * annotations from older versions of Salieri.  To keep track of
 * everything, when we (Salieri) define a SAL annotation, we also
 * define SALIERI_DEFINED_${annotation} (with the leading and trailing
 * '-' stripped).  Then, before redefining an annotation macro we
 * check to make sure SALIERI_DEFINED_${annontation} is defined.
 *
 * This means you can safely use Salieri in a public header in your
 * project.
 */

/* Function Parameters & Return Value
 *
 * https://msdn.microsoft.com/en-us/library/hh916382.aspx
 *****/

/*  Pointer Parameters */

#if defined(_In_) && defined(SALIERI_DEFINED_In)
#  undef _In_
#  undef SALIERI_DEFINED_In
#endif
#if !defined(_In_)
#  define _In_
#  define SALIERI_DEFINED_In
#endif

#if defined(__in_ecount) && defined(SALIERI_DEFINED__in_ecount)
#  undef __in_ecount
#  undef SALIERI_DEFINED__in_ecount
#endif
#if !defined(__in_ecount)
#  define __in_ecount(s)
#  define SALIERI_DEFINED__in_ecount(s)
#endif

#if defined(__in_ecount_opt) && defined(SALIERI_DEFINED__in_ecount_opt)
#  undef __in_ecount_opt
#  undef SALIERI_DEFINED__in_ecount_opt
#endif
#if !defined(__in_ecount_opt)
#  define __in_ecount_opt(s)
#  define SALIERI_DEFINED__in_ecount_opt(s)
#endif

#if defined(_Out_) && defined(SALIERI_DEFINED_Out)
#  undef _Out_
#  undef SALIERI_DEFINED_Out
#endif
#if !defined(_Out_)
#  define _Out_
#  define SALIERI_DEFINED_Out
#endif

#if defined(_Inout_) && defined(SALIERI_DEFINED_Inout)
#  undef _Inout_
#  undef SALIERI_DEFINED_Inout
#endif
#if !defined(_Inout_)
#  define _Inout_
#  define SALIERI_DEFINED_Inout
#endif

#if defined(_In_z_) && defined(SALIERI_DEFINED_In_z)
#  undef _In_z_
#  undef SALIERI_DEFINED_In_z
#endif
#if !defined(_In_z_)
#  define _In_z_
#  define SALIERI_DEFINED_In_z
#endif

#if defined(_Inout_z_) && defined(SALIERI_DEFINED_Inout_z)
#  undef _Inout_z_
#  undef SALIERI_DEFINED_Inout_z
#endif
#if !defined(_Inout_z_)
#  define _Inout_z_
#  define SALIERI_DEFINED_Inout_z
#endif

#if defined(_In_reads_) && defined(SALIERI_DEFINED_In_reads)
#  undef _In_reads_
#  undef SALIERI_DEFINED_In_reads
#endif
#if !defined(_In_reads_)
#  define _In_reads_(s)
#  define SALIERI_DEFINED_In_reads
#endif

#if defined(_In_reads_bytes_) && defined(SALIERI_DEFINED_In_reads_bytes)
#  undef _In_reads_bytes_
#  undef SALIERI_DEFINED_In_reads_bytes
#endif
#if !defined(_In_reads_bytes_)
#  define _In_reads_bytes_(s)
#  define SALIERI_DEFINED_In_reads_bytes
#endif

#if defined(_In_reads_z_) && defined(SALIERI_DEFINED_In_reads_z)
#  undef _In_reads_z_
#  undef SALIERI_DEFINED_In_reads_z
#endif
#if !defined(_In_reads_z_)
#  define _In_reads_z_(s)
#  define SALIERI_DEFINED_In_reads_z
#endif

#if defined(_In_reads_or_z_) && defined(SALIERI_DEFINED_In_reads_or_z)
#  undef _In_reads_or_z_
#  undef SALIERI_DEFINED_In_reads_or_z
#endif
#if !defined(_In_reads_or_z_)
#  define _In_reads_or_z_(s)
#  define SALIERI_DEFINED_In_reads_or_z
#endif

#if defined(_Out_writes_) && defined(SALIERI_DEFINED_Out_writes)
#  undef _Out_writes_
#  undef SALIERI_DEFINED_Out_writes
#endif
#if !defined(_Out_writes_)
#  define _Out_writes_(s)
#  define SALIERI_DEFINED_Out_writes
#endif

#if defined(_Out_writes_bytes_) && defined(SALIERI_DEFINED_Out_writes_bytes)
#  undef _Out_writes_bytes_
#  undef SALIERI_DEFINED_Out_writes_bytes
#endif
#if !defined(_Out_writes_bytes_)
#  define _Out_writes_bytes_(s)
#  define SALIERI_DEFINED_Out_writes_bytes
#endif

#if defined(_Out_writes_bytes_opt_) && defined(SALIERI_DEFINED_Out_writes_bytes_opt_)
#  undef _Out_writes_bytes_opt_
#  undef SALIERI_DEFINED_Out_writes_bytes_opt_
#endif
#if !defined(_Out_writes_bytes_opt_)
#  define _Out_writes_bytes_opt_(s)
#  define SALIERI_DEFINED_Out_writes_bytes_opt_
#endif

#if defined(_Out_writes_z_) && defined(SALIERI_DEFINED_Out_writes_z)
#  undef _Out_writes_z_
#  undef SALIERI_DEFINED_Out_writes_z
#endif
#if !defined(_Out_writes_z_)
#  define _Out_writes_z_(s)
#  define SALIERI_DEFINED_Out_writes_z
#endif

#if defined(_Inout_updates_) && defined(SALIERI_DEFINED_Inout_updates)
#  undef _Inout_updates_
#  undef SALIERI_DEFINED_Inout_updates
#endif
#if !defined(_Inout_updates_)
#  define _Inout_updates_(s)
#  define SALIERI_DEFINED_Inout_updates
#endif

#if defined(_Inout_updates_bytes_) && defined(SALIERI_DEFINED_Inout_updates_bytes)
#  undef _Inout_updates_bytes_
#  undef SALIERI_DEFINED_Inout_updates_bytes
#endif
#if !defined(_Inout_updates_bytes_)
#  define _Inout_updates_bytes_(s)
#  define SALIERI_DEFINED_Inout_updates_bytes
#endif

#if defined(_Inout_updates_z_) && defined(SALIERI_DEFINED_Inout_updates_z)
#  undef _Inout_updates_z_
#  undef SALIERI_DEFINED_Inout_updates_z
#endif
#if !defined(_Inout_updates_z_)
#  define _Inout_updates_z_(s)
#  define SALIERI_DEFINED_Inout_updates_z
#endif

#if defined(_Out_writes_to_) && defined(SALIERI_DEFINED_Out_writes_to)
#  undef _Out_writes_to_
#  undef SALIERI_DEFINED_Out_writes_to
#endif
#if !defined(_Out_writes_to_)
#  define _Out_writes_to_(s,c)
#  define SALIERI_DEFINED_Out_writes_to
#endif

#if defined(_Out_writes_bytes_to_) && defined(SALIERI_DEFINED_Out_writes_bytes_to)
#  undef _Out_writes_bytes_to_
#  undef SALIERI_DEFINED_Out_writes_bytes_to
#endif
#if !defined(_Out_writes_bytes_to_)
#  define _Out_writes_bytes_to_(s,c)
#  define SALIERI_DEFINED_Out_writes_bytes_to
#endif

#if defined(_Out_writes_all_) && defined(SALIERI_DEFINED_Out_writes_all)
#  undef _Out_writes_all_
#  undef SALIERI_DEFINED_Out_writes_all
#endif
#if !defined(_Out_writes_all_)
#  define _Out_writes_all_(s)
#  define SALIERI_DEFINED_Out_writes_all
#endif

#if defined(_Out_writes_bytes_all_) && defined(SALIERI_DEFINED_Out_writes_bytes_all)
#  undef _Out_writes_bytes_all_
#  undef SALIERI_DEFINED_Out_writes_bytes_all
#endif
#if !defined(_Out_writes_bytes_all_)
#  define _Out_writes_bytes_all_(s)
#  define SALIERI_DEFINED_Out_writes_bytes_all
#endif

#if defined(_In_updates_to_) && defined(SALIERI_DEFINED_In_updates_to)
#  undef _In_updates_to_
#  undef SALIERI_DEFINED_In_updates_to
#endif
#if !defined(_In_updates_to_)
#  define _In_updates_to_(s,c)
#  define SALIERI_DEFINED_In_updates_to
#endif

#if defined(_In_updates_bytes_to_) && defined(SALIERI_DEFINED_In_updates_bytes_to)
#  undef _In_updates_bytes_to_
#  undef SALIERI_DEFINED_In_updates_bytes_to
#endif
#if !defined(_In_updates_bytes_to_)
#  define _In_updates_bytes_to_(s,c)
#  define SALIERI_DEFINED_In_updates_bytes_to
#endif

#if defined(_Inout_updates_z_) && defined(SALIERI_DEFINED_Inout_updates_z)
#  undef _Inout_updates_z_
#  undef SALIERI_DEFINED_Inout_updates_z
#endif
#if !defined(_Inout_updates_z_)
#  define _Inout_updates_z_(s)
#  define SALIERI_DEFINED_Inout_updates_z
#endif

#if defined(_Out_writes_to_) && defined(SALIERI_DEFINED_Out_writes_to)
#  undef _Out_writes_to_
#  undef SALIERI_DEFINED_Out_writes_to
#endif
#if !defined(_Out_writes_to_)
#  define _Out_writes_to_(s,c)
#  define SALIERI_DEFINED_Out_writes_to
#endif

#if defined(_Out_writes_bytes_to_) && defined(SALIERI_DEFINED_Out_writes_bytes_to)
#  undef _Out_writes_bytes_to_
#  undef SALIERI_DEFINED_Out_writes_bytes_to
#endif
#if !defined(_Out_writes_bytes_to_)
#  define _Out_writes_bytes_to_(s,c)
#  define SALIERI_DEFINED_Out_writes_bytes_to
#endif

#if defined(_Out_writes_all_) && defined(SALIERI_DEFINED_Out_writes_all)
#  undef _Out_writes_all_
#  undef SALIERI_DEFINED_Out_writes_all
#endif
#if !defined(_Out_writes_all_)
#  define _Out_writes_all_(s)
#  define SALIERI_DEFINED_Out_writes_all
#endif

#if defined(_Out_writes_bytes_all_) && defined(SALIERI_DEFINED_Out_writes_bytes_all)
#  undef _Out_writes_bytes_all_
#  undef SALIERI_DEFINED_Out_writes_bytes_all
#endif
#if !defined(_Out_writes_bytes_all_)
#  define _Out_writes_bytes_all_(s)
#  define SALIERI_DEFINED_Out_writes_bytes_all
#endif

#if defined(_Inout_updates_to_) && defined(SALIERI_DEFINED_Inout_updates_to)
#  undef _Inout_updates_to_
#  undef SALIERI_DEFINED_Inout_updates_to
#endif
#if !defined(_Inout_updates_to_)
#  define _Inout_updates_to_(s,c)
#  define SALIERI_DEFINED_Inout_updates_to
#endif

#if defined(_Inout_updates_bytes_to_) && defined(SALIERI_DEFINED_Inout_updates_bytes_to)
#  undef _Inout_updates_bytes_to_
#  undef SALIERI_DEFINED_Inout_updates_bytes_to
#endif
#if !defined(_Inout_updates_bytes_to_)
#  define _Inout_updates_bytes_to_(s,c)
#  define SALIERI_DEFINED_Inout_updates_bytes_to
#endif

#if defined(_Inout_updates_all_) && defined(SALIERI_DEFINED_Inout_updates_all)
#  undef _Inout_updates_all_
#  undef SALIERI_DEFINED_Inout_updates_all
#endif
#if !defined(_Inout_updates_all_)
#  define _Inout_updates_all_(s)
#  define SALIERI_DEFINED_Inout_updates_all
#endif

#if defined(_Inout_updates_bytes_all_) && defined(SALIERI_DEFINED_Inout_updates_bytes_all)
#  undef _Inout_updates_bytes_all_
#  undef SALIERI_DEFINED_Inout_updates_bytes_all
#endif
#if !defined(_Inout_updates_bytes_all_)
#  define _Inout_updates_bytes_all_(s)
#  define SALIERI_DEFINED_Inout_updates_bytes_all
#endif

#if defined(_In_reads_to_ptr_) && defined(SALIERI_DEFINED_In_reads_to_ptr)
#  undef _In_reads_to_ptr_
#  undef SALIERI_DEFINED_In_reads_to_ptr
#endif
#if !defined(_In_reads_to_ptr_)
#  define _In_reads_to_ptr_(p)
#  define SALIERI_DEFINED_In_reads_to_ptr
#endif

#if defined(_In_reads_to_ptr_z_) && defined(SALIERI_DEFINED_In_reads_to_ptr_z)
#  undef _In_reads_to_ptr_z_
#  undef SALIERI_DEFINED_In_reads_to_ptr_z
#endif
#if !defined(_In_reads_to_ptr_z_)
#  define _In_reads_to_ptr_z_(p)
#  define SALIERI_DEFINED_In_reads_to_ptr_z
#endif

#if defined(_Out_writes_to_ptr_) && defined(SALIERI_DEFINED_Out_writes_to_ptr)
#  undef _Out_writes_to_ptr_
#  undef SALIERI_DEFINED_Out_writes_to_ptr
#endif
#if !defined(_Out_writes_to_ptr_)
#  define _Out_writes_to_ptr_(p)
#  define SALIERI_DEFINED_Out_writes_to_ptr
#endif

#if defined(_Out_writes_to_ptr_z_) && defined(SALIERI_DEFINED_Out_writes_to_ptr_z)
#  undef _Out_writes_to_ptr_z_
#  undef SALIERI_DEFINED_Out_writes_to_ptr_z
#endif
#if !defined(_Out_writes_to_ptr_z_)
#  define _Out_writes_to_ptr_z_(p)
#  define SALIERI_DEFINED_Out_writes_to_ptr_z
#endif

/*  Optional Pointer Parameters */

#if defined(_In_opt_) && defined(SALIERI_DEFINED_In_opt)
#  undef _In_opt_
#  undef SALIERI_DEFINED_In_opt
#endif
#if !defined(_In_opt_)
#  define _In_opt_
#  define SALIERI_DEFINED_In_opt
#endif

#if defined(_Out_opt_) && defined(SALIERI_DEFINED_Out_opt)
#  undef _Out_opt_
#  undef SALIERI_DEFINED_Out_opt
#endif
#if !defined(_Out_opt_)
#  define _Out_opt_
#  define SALIERI_DEFINED_Out_opt
#endif

#if defined(_Inout_opt_) && defined(SALIERI_DEFINED_Inout_opt)
#  undef _Inout_opt_
#  undef SALIERI_DEFINED_Inout_opt
#endif
#if !defined(_Inout_opt_)
#  define _Inout_opt_
#  define SALIERI_DEFINED_Inout_opt
#endif

#if defined(_In_opt_z_) && defined(SALIERI_DEFINED_In_opt_z)
#  undef _In_opt_z_
#  undef SALIERI_DEFINED_In_opt_z
#endif
#if !defined(_In_opt_z_)
#  define _In_opt_z_
#  define SALIERI_DEFINED_In_opt_z
#endif

#if defined(_Inout_opt_z_) && defined(SALIERI_DEFINED_Inout_opt_z)
#  undef _Inout_opt_z_
#  undef SALIERI_DEFINED_Inout_opt_z
#endif
#if !defined(_Inout_opt_z_)
#  define _Inout_opt_z_
#  define SALIERI_DEFINED_Inout_opt_z
#endif

#if defined(_Inout_opt_bytecount_) && defined(SALIERI_DEFINED_Inout_opt_bytecount_)
#  undef _Inout_opt_bytecount_
#  undef SALIERI_DEFINED_Inout_opt_bytecount_
#endif
#if !defined(_Inout_opt_bytecount_)
#  define _Inout_opt_bytecount_(s)
#  define SALIERI_DEFINED_Inout_opt_bytecount_(s)
#endif

#if defined(_In_reads_opt_) && defined(SALIERI_DEFINED_In_reads_opt)
#  undef _In_reads_opt_
#  undef SALIERI_DEFINED_In_reads_opt
#endif
#if !defined(_In_reads_opt_)
#  define _In_reads_opt_(s)
#  define SALIERI_DEFINED_In_reads_opt
#endif

#if defined(_In_reads_bytes_opt_) && defined(SALIERI_DEFINED_In_reads_bytes_opt)
#  undef _In_reads_bytes_opt_
#  undef SALIERI_DEFINED_In_reads_bytes_opt
#endif
#if !defined(_In_reads_bytes_opt_)
#  define _In_reads_bytes_opt_(s)
#  define SALIERI_DEFINED_In_reads_bytes_opt
#endif

#if defined(_In_reads_opt_z_) && defined(SALIERI_DEFINED_In_reads_opt_z)
#  undef _In_reads_opt_z_
#  undef SALIERI_DEFINED_In_reads_opt_z
#endif
#if !defined(_In_reads_opt_z_)
#  define _In_reads_opt_z_(s)
#  define SALIERI_DEFINED_In_reads_opt_z
#endif

#if defined(_Out_writes_opt_) && defined(SALIERI_DEFINED_Out_writes_opt)
#  undef _Out_writes_opt_
#  undef SALIERI_DEFINED_Out_writes_opt
#endif
#if !defined(_Out_writes_opt_)
#  define _Out_writes_opt_(s)
#  define SALIERI_DEFINED_Out_writes_opt
#endif

#if defined(_Out_writes_bytes_) && defined(SALIERI_DEFINED_Out_writes_bytes)
#  undef _Out_writes_bytes_
#  undef SALIERI_DEFINED_Out_writes_bytes
#endif
#if !defined(_Out_writes_bytes_)
#  define _Out_writes_bytes_(s)
#  define SALIERI_DEFINED_Out_writes_bytes
#endif

#if defined(_Out_writes_opt_z_) && defined(SALIERI_DEFINED_Out_writes_opt_z)
#  undef _Out_writes_opt_z_
#  undef SALIERI_DEFINED_Out_writes_opt_z
#endif
#if !defined(_Out_writes_opt_z_)
#  define _Out_writes_opt_z_(s)
#  define SALIERI_DEFINED_Out_writes_opt_z
#endif

#if defined(_Inout_updates_opt_) && defined(SALIERI_DEFINED_Inout_updates_opt)
#  undef _Inout_updates_opt_
#  undef SALIERI_DEFINED_Inout_updates_opt
#endif
#if !defined(_Inout_updates_opt_)
#  define _Inout_updates_opt_(s)
#  define SALIERI_DEFINED_Inout_updates_opt
#endif

#if defined(_Inout_updates_bytes_opt_) && defined(SALIERI_DEFINED_Inout_updates_bytes_opt)
#  undef _Inout_updates_bytes_opt_
#  undef SALIERI_DEFINED_Inout_updates_bytes_opt
#endif
#if !defined(_Inout_updates_bytes_opt_)
#  define _Inout_updates_bytes_opt_(s)
#  define SALIERI_DEFINED_Inout_updates_bytes_opt
#endif

#if defined(_Inout_updates_opt_z_) && defined(SALIERI_DEFINED_Inout_updates_opt_z)
#  undef _Inout_updates_opt_z_
#  undef SALIERI_DEFINED_Inout_updates_opt_z
#endif
#if !defined(_Inout_updates_opt_z_)
#  define _Inout_updates_opt_z_(s)
#  define SALIERI_DEFINED_Inout_updates_opt_z
#endif

#if defined(_Out_writes_to_opt_) && defined(SALIERI_DEFINED_Out_writes_to_opt)
#  undef _Out_writes_to_opt_
#  undef SALIERI_DEFINED_Out_writes_to_opt
#endif
#if !defined(_Out_writes_to_opt_)
#  define _Out_writes_to_opt_(s,c)
#  define SALIERI_DEFINED_Out_writes_to_opt
#endif

#if defined(_Out_writes_bytes_to_opt_) && defined(SALIERI_DEFINED_Out_writes_bytes_to_opt)
#  undef _Out_writes_bytes_to_opt_
#  undef SALIERI_DEFINED_Out_writes_bytes_to_opt
#endif
#if !defined(_Out_writes_bytes_to_opt_)
#  define _Out_writes_bytes_to_opt_(s,c)
#  define SALIERI_DEFINED_Out_writes_bytes_to_opt
#endif

#if defined(_Out_writes_all_opt_) && defined(SALIERI_DEFINED_Out_writes_all_opt)
#  undef _Out_writes_all_opt_
#  undef SALIERI_DEFINED_Out_writes_all_opt
#endif
#if !defined(_Out_writes_all_opt_)
#  define _Out_writes_all_opt_(s)
#  define SALIERI_DEFINED_Out_writes_all_opt
#endif

#if defined(_Out_writes_bytes_all_opt_) && defined(SALIERI_DEFINED_Out_writes_bytes_all_opt)
#  undef _Out_writes_bytes_all_opt_
#  undef SALIERI_DEFINED_Out_writes_bytes_all_opt
#endif
#if !defined(_Out_writes_bytes_all_opt_)
#  define _Out_writes_bytes_all_opt_(s)
#  define SALIERI_DEFINED_Out_writes_bytes_all_opt
#endif

#if defined(_In_updates_to_opt_) && defined(SALIERI_DEFINED_In_updates_to_opt)
#  undef _In_updates_to_opt_
#  undef SALIERI_DEFINED_In_updates_to_opt
#endif
#if !defined(_In_updates_to_opt_)
#  define _In_updates_to_opt_(s,c)
#  define SALIERI_DEFINED_In_updates_to_opt
#endif

#if defined(_In_updates_bytes_to_opt_) && defined(SALIERI_DEFINED_In_updates_bytes_to_opt)
#  undef _In_updates_bytes_to_opt_
#  undef SALIERI_DEFINED_In_updates_bytes_to_opt
#endif
#if !defined(_In_updates_bytes_to_opt_)
#  define _In_updates_bytes_to_opt_(s,c)
#  define SALIERI_DEFINED_In_updates_bytes_to_opt
#endif

#if defined(_Inout_updates_all_opt_) && defined(SALIERI_DEFINED_Inout_updates_all_opt)
#  undef _Inout_updates_all_opt_
#  undef SALIERI_DEFINED_Inout_updates_all_opt
#endif
#if !defined(_Inout_updates_all_opt_)
#  define _Inout_updates_all_opt_(s)
#  define SALIERI_DEFINED_Inout_updates_all_opt
#endif

#if defined(_Inout_updates_bytes_all_opt_) && defined(SALIERI_DEFINED_Inout_updates_bytes_all_opt)
#  undef _Inout_updates_bytes_all_opt_
#  undef SALIERI_DEFINED_Inout_updates_bytes_all_opt
#endif
#if !defined(_Inout_updates_bytes_all_opt_)
#  define _Inout_updates_bytes_all_opt_(s)
#  define SALIERI_DEFINED_Inout_updates_bytes_all_opt
#endif

#if defined(_In_reads_to_ptr_opt_) && defined(SALIERI_DEFINED_In_reads_to_ptr_opt)
#  undef _In_reads_to_ptr_opt_
#  undef SALIERI_DEFINED_In_reads_to_ptr_opt
#endif
#if !defined(_In_reads_to_ptr_opt_)
#  define _In_reads_to_ptr_opt_(p)
#  define SALIERI_DEFINED_In_reads_to_ptr_opt
#endif

#if defined(_In_reads_to_ptr_opt_z_) && defined(SALIERI_DEFINED_In_reads_to_ptr_opt_z)
#  undef _In_reads_to_ptr_opt_z_
#  undef SALIERI_DEFINED_In_reads_to_ptr_opt_z
#endif
#if !defined(_In_reads_to_ptr_opt_z_)
#  define _In_reads_to_ptr_opt_z_(p)
#  define SALIERI_DEFINED_In_reads_to_ptr_opt_z
#endif

#if defined(_Out_writes_to_ptr_opt_) && defined(SALIERI_DEFINED_Out_writes_to_ptr_opt)
#  undef _Out_writes_to_ptr_opt_
#  undef SALIERI_DEFINED_Out_writes_to_ptr_opt
#endif
#if !defined(_Out_writes_to_ptr_opt_)
#  define _Out_writes_to_ptr_opt_(p)
#  define SALIERI_DEFINED_Out_writes_to_ptr_opt
#endif

#if defined(_Out_writes_to_ptr_opt_z_) && defined(SALIERI_DEFINED_Out_writes_to_ptr_opt_z)
#  undef _Out_writes_to_ptr_opt_z_
#  undef SALIERI_DEFINED_Out_writes_to_ptr_opt_z
#endif
#if !defined(_Out_writes_to_ptr_opt_z_)
#  define _Out_writes_to_ptr_opt_z_(p)
#  define SALIERI_DEFINED_Out_writes_to_ptr_opt_z
#endif

/* Output Pointer Parameters */

#if defined(_Outptr_) && defined(SALIERI_DEFINED_Outptr)
#  undef _Outptr_
#  undef SALIERI_DEFINED_Outptr
#endif
#if !defined(_Outptr_)
#  define _Outptr_
#  define SALIERI_DEFINED_Outptr
#endif

#if defined(_Outptr_opt_) && defined(SALIERI_DEFINED_Outptr_opt)
#  undef _Outptr_opt_
#  undef SALIERI_DEFINED_Outptr_opt
#endif
#if !defined(_Outptr_opt_)
#  define _Outptr_opt_
#  define SALIERI_DEFINED_Outptr_opt
#endif

#if defined(_Outptr_result_maybenull_) && defined(SALIERI_DEFINED_Outptr_result_maybenull)
#  undef _Outptr_result_maybenull_
#  undef SALIERI_DEFINED_Outptr_result_maybenull
#endif
#if !defined(_Outptr_result_maybenull_)
#  define _Outptr_result_maybenull_
#  define SALIERI_DEFINED_Outptr_result_maybenull
#endif

#if defined(_Outptr_opt_result_maybenull_) && defined(SALIERI_DEFINED_Outptr_opt_result_maybenull)
#  undef _Outptr_opt_result_maybenull_
#  undef SALIERI_DEFINED_Outptr_opt_result_maybenull
#endif
#if !defined(_Outptr_opt_result_maybenull_)
#  define _Outptr_opt_result_maybenull_
#  define SALIERI_DEFINED_Outptr_opt_result_maybenull
#endif

#if defined(_Outptr_result_z_) && defined(SALIERI_DEFINED_Outptr_result_z)
#  undef _Outptr_result_z_
#  undef SALIERI_DEFINED_Outptr_result_z
#endif
#if !defined(_Outptr_result_z_)
#  define _Outptr_result_z_
#  define SALIERI_DEFINED_Outptr_result_z
#endif

#if defined(_Outptr_opt_result_z_) && defined(SALIERI_DEFINED_Outptr_opt_result_z)
#  undef _Outptr_opt_result_z_
#  undef SALIERI_DEFINED_Outptr_opt_result_z
#endif
#if !defined(_Outptr_opt_result_z_)
#  define _Outptr_opt_result_z_
#  define SALIERI_DEFINED_Outptr_opt_result_z
#endif

#if defined(_Outptr_result_maybenull_z_) && defined(SALIERI_DEFINED_Outptr_result_maybenull_z)
#  undef _Outptr_result_maybenull_z_
#  undef SALIERI_DEFINED_Outptr_result_maybenull_z
#endif
#if !defined(_Outptr_result_maybenull_z_)
#  define _Outptr_result_maybenull_z_
#  define SALIERI_DEFINED_Outptr_result_maybenull_z
#endif

#if defined(_Outptr_opt_result_maybenull_z_) && defined(SALIERI_DEFINED_Outptr_opt_result_maybenull_z)
#  undef _Outptr_opt_result_maybenull_z_
#  undef SALIERI_DEFINED_Outptr_opt_result_maybenull_z
#endif
#if !defined(_Outptr_opt_result_maybenull_z_)
#  define _Outptr_opt_result_maybenull_z_
#  define SALIERI_DEFINED_Outptr_opt_result_maybenull_z
#endif

#if defined(_COM_Outptr_) && defined(SALIERI_DEFINED_COM_Outptr)
#  undef _COM_Outptr_
#  undef SALIERI_DEFINED_COM_Outptr
#endif
#if !defined(_COM_Outptr_)
#  define _COM_Outptr_
#  define SALIERI_DEFINED_COM_Outptr
#endif

#if defined(_COM_Outptr_opt_) && defined(SALIERI_DEFINED_COM_Outptr_opt)
#  undef _COM_Outptr_opt_
#  undef SALIERI_DEFINED_COM_Outptr_opt
#endif
#if !defined(_COM_Outptr_opt_)
#  define _COM_Outptr_opt_
#  define SALIERI_DEFINED_COM_Outptr_opt
#endif

#if defined(_COM_Outptr_result_maybenull_) && defined(SALIERI_DEFINED_COM_Outptr_result_maybenull)
#  undef _COM_Outptr_result_maybenull_
#  undef SALIERI_DEFINED_COM_Outptr_result_maybenull
#endif
#if !defined(_COM_Outptr_result_maybenull_)
#  define _COM_Outptr_result_maybenull_
#  define SALIERI_DEFINED_COM_Outptr_result_maybenull
#endif

#if defined(_COM_Outptr_opt_result_maybenull_) && defined(SALIERI_DEFINED_COM_Outptr_opt_result_maybenull)
#  undef _COM_Outptr_opt_result_maybenull_
#  undef SALIERI_DEFINED_COM_Outptr_opt_result_maybenull
#endif
#if !defined(_COM_Outptr_opt_result_maybenull_)
#  define _COM_Outptr_opt_result_maybenull_
#  define SALIERI_DEFINED_COM_Outptr_opt_result_maybenull
#endif

#if defined(_Outptr_opt_result_maybenull_) && defined(SALIERI_DEFINED_Outptr_opt_result_maybenull)
#  undef _Outptr_opt_result_maybenull_
#  undef SALIERI_DEFINED_Outptr_opt_result_maybenull
#endif
#if !defined(_Outptr_opt_result_maybenull_)
#  define _Outptr_opt_result_maybenull_
#  define SALIERI_DEFINED_Outptr_opt_result_maybenull
#endif

#if defined(_Outptr_result_buffer_) && defined(SALIERI_DEFINED_Outptr_result_buffer)
#  undef _Outptr_result_buffer_
#  undef SALIERI_DEFINED_Outptr_result_buffer
#endif
#if !defined(_Outptr_result_buffer_)
#  define _Outptr_result_buffer_(s)
#  define SALIERI_DEFINED_Outptr_result_buffer
#endif

#if defined(_Outptr_result_bytebuffer_) && defined(SALIERI_DEFINED_Outptr_result_bytebuffer)
#  undef _Outptr_result_bytebuffer_
#  undef SALIERI_DEFINED_Outptr_result_bytebuffer
#endif
#if !defined(_Outptr_result_bytebuffer_)
#  define _Outptr_result_bytebuffer_(s)
#  define SALIERI_DEFINED_Outptr_result_bytebuffer
#endif

#if defined(_Outptr_opt_result_buffer_) && defined(SALIERI_DEFINED_Outptr_opt_result_buffer)
#  undef _Outptr_opt_result_buffer_
#  undef SALIERI_DEFINED_Outptr_opt_result_buffer
#endif
#if !defined(_Outptr_opt_result_buffer_)
#  define _Outptr_opt_result_buffer_(s)
#  define SALIERI_DEFINED_Outptr_opt_result_buffer
#endif

#if defined(_Outptr_opt_result_bytebuffer_) && defined(SALIERI_DEFINED_Outptr_opt_result_bytebuffer)
#  undef _Outptr_opt_result_bytebuffer_
#  undef SALIERI_DEFINED_Outptr_opt_result_bytebuffer
#endif
#if !defined(_Outptr_opt_result_bytebuffer_)
#  define _Outptr_opt_result_bytebuffer_(s)
#  define SALIERI_DEFINED_Outptr_opt_result_bytebuffer
#endif

#if defined(_Outptr_result_buffer_to_) && defined(SALIERI_DEFINED_Outptr_result_buffer_to)
#  undef _Outptr_result_buffer_to_
#  undef SALIERI_DEFINED_Outptr_result_buffer_to
#endif
#if !defined(_Outptr_result_buffer_to_)
#  define _Outptr_result_buffer_to_(s,c)
#  define SALIERI_DEFINED_Outptr_result_buffer_to
#endif

#if defined(_Outptr_result_bytebuffer_to_) && defined(SALIERI_DEFINED_Outptr_result_bytebuffer_to)
#  undef _Outptr_result_bytebuffer_to_
#  undef SALIERI_DEFINED_Outptr_result_bytebuffer_to
#endif
#if !defined(_Outptr_result_bytebuffer_to_)
#  define _Outptr_result_bytebuffer_to_(s,c)
#  define SALIERI_DEFINED_Outptr_result_bytebuffer_to
#endif

#if defined(_Outptr_opt_result_buffer_to_) && defined(SALIERI_DEFINED_Outptr_opt_result_buffer_to)
#  undef _Outptr_opt_result_buffer_to_
#  undef SALIERI_DEFINED_Outptr_opt_result_buffer_to
#endif
#if !defined(_Outptr_opt_result_buffer_to_)
#  define _Outptr_opt_result_buffer_to_(s,c)
#  define SALIERI_DEFINED_Outptr_opt_result_buffer_to
#endif

#if defined(_Outptr_opt_result_bytebuffer_to_) && defined(SALIERI_DEFINED_Outptr_opt_result_bytebuffer_to)
#  undef _Outptr_opt_result_bytebuffer_to_
#  undef SALIERI_DEFINED_Outptr_opt_result_bytebuffer_to
#endif
#if !defined(_Outptr_opt_result_bytebuffer_to_)
#  define _Outptr_opt_result_bytebuffer_to_(s,c)
#  define SALIERI_DEFINED_Outptr_opt_result_bytebuffer_to
#endif

#if defined(_Result_nullonfailure_) && defined(SALIERI_DEFINED_Result_nullonfailure)
#  undef _Result_nullonfailure_
#  undef SALIERI_DEFINED_Result_nullonfailure
#endif
#if !defined(_Result_nullonfailure_)
#  define _Result_nullonfailure_
#  define SALIERI_DEFINED_Result_nullonfailure
#endif

#if defined(_Result_zeroonfailure_) && defined(SALIERI_DEFINED_Result_zeroonfailure)
#  undef _Result_zeroonfailure_
#  undef SALIERI_DEFINED_Result_zeroonfailure
#endif
#if !defined(_Result_zeroonfailure_)
#  define _Result_zeroonfailure_
#  define SALIERI_DEFINED_Result_zeroonfailure
#endif

#if defined(_Outptr_result_nullonfailure_) && defined(SALIERI_DEFINED_Outptr_result_nullonfailure)
#  undef _Outptr_result_nullonfailure_
#  undef SALIERI_DEFINED_Outptr_result_nullonfailure
#endif
#if !defined(_Outptr_result_nullonfailure_)
#  define _Outptr_result_nullonfailure_
#  define SALIERI_DEFINED_Outptr_result_nullonfailure
#endif

#if defined(_Outptr_opt_result_nullonfailure_) && defined(SALIERI_DEFINED_Outptr_opt_result_nullonfailure)
#  undef _Outptr_opt_result_nullonfailure_
#  undef SALIERI_DEFINED_Outptr_opt_result_nullonfailure
#endif
#if !defined(_Outptr_opt_result_nullonfailure_)
#  define _Outptr_opt_result_nullonfailure_
#  define SALIERI_DEFINED_Outptr_opt_result_nullonfailure
#endif

#if defined(_Outref_result_nullonfailure_) && defined(SALIERI_DEFINED_Outref_result_nullonfailure)
#  undef _Outref_result_nullonfailure_
#  undef SALIERI_DEFINED_Outref_result_nullonfailure
#endif
#if !defined(_Outref_result_nullonfailure_)
#  define _Outref_result_nullonfailure_
#  define SALIERI_DEFINED_Outref_result_nullonfailure
#endif

/* Output Reference Parameters */

#if defined(_Outref_) && defined(SALIERI_DEFINED_Outref)
#  undef _Outref_
#  undef SALIERI_DEFINED_Outref
#endif
#if !defined(_Outref_)
#  define _Outref_
#  define SALIERI_DEFINED_Outref
#endif

#if defined(_Outref_result_maybenull_) && defined(SALIERI_DEFINED_Outref_result_maybenull)
#  undef _Outref_result_maybenull_
#  undef SALIERI_DEFINED_Outref_result_maybenull
#endif
#if !defined(_Outref_result_maybenull_)
#  define _Outref_result_maybenull_
#  define SALIERI_DEFINED_Outref_result_maybenull
#endif

#if defined(_Outref_result_buffer_) && defined(SALIERI_DEFINED_Outref_result_buffer)
#  undef _Outref_result_buffer_
#  undef SALIERI_DEFINED_Outref_result_buffer
#endif
#if !defined(_Outref_result_buffer_)
#  define _Outref_result_buffer_(s)
#  define SALIERI_DEFINED_Outref_result_buffer
#endif

#if defined(_Outref_result_bytebuffer_) && defined(SALIERI_DEFINED_Outref_result_bytebuffer)
#  undef _Outref_result_bytebuffer_
#  undef SALIERI_DEFINED_Outref_result_bytebuffer
#endif
#if !defined(_Outref_result_bytebuffer_)
#  define _Outref_result_bytebuffer_(s)
#  define SALIERI_DEFINED_Outref_result_bytebuffer
#endif

#if defined(_Outref_result_buffer_to_) && defined(SALIERI_DEFINED_Outref_result_buffer_to)
#  undef _Outref_result_buffer_to_
#  undef SALIERI_DEFINED_Outref_result_buffer_to
#endif
#if !defined(_Outref_result_buffer_to_)
#  define _Outref_result_buffer_to_(s,c)
#  define SALIERI_DEFINED_Outref_result_buffer_to
#endif

#if defined(_Outref_result_bytebuffer_to_) && defined(SALIERI_DEFINED_Outref_result_bytebuffer_to)
#  undef _Outref_result_bytebuffer_to_
#  undef SALIERI_DEFINED_Outref_result_bytebuffer_to
#endif
#if !defined(_Outref_result_bytebuffer_to_)
#  define _Outref_result_bytebuffer_to_(s,c)
#  define SALIERI_DEFINED_Outref_result_bytebuffer_to
#endif

#if defined(_Outref_result_buffer_all_) && defined(SALIERI_DEFINED_Outref_result_buffer_all)
#  undef _Outref_result_buffer_all_
#  undef SALIERI_DEFINED_Outref_result_buffer_all
#endif
#if !defined(_Outref_result_buffer_all_)
#  define _Outref_result_buffer_all_(s)
#  define SALIERI_DEFINED_Outref_result_buffer_all
#endif

#if defined(_Outref_result_bytebuffer_all_) && defined(SALIERI_DEFINED_Outref_result_bytebuffer_all)
#  undef _Outref_result_bytebuffer_all_
#  undef SALIERI_DEFINED_Outref_result_bytebuffer_all
#endif
#if !defined(_Outref_result_bytebuffer_all_)
#  define _Outref_result_bytebuffer_all_(s)
#  define SALIERI_DEFINED_Outref_result_bytebuffer_all
#endif

#if defined(_Outref_result_buffer_maybenull_) && defined(SALIERI_DEFINED_Outref_result_buffer_maybenull)
#  undef _Outref_result_buffer_maybenull_
#  undef SALIERI_DEFINED_Outref_result_buffer_maybenull
#endif
#if !defined(_Outref_result_buffer_maybenull_)
#  define _Outref_result_buffer_maybenull_(s)
#  define SALIERI_DEFINED_Outref_result_buffer_maybenull
#endif

#if defined(_Outref_result_bytebuffer_maybenull_) && defined(SALIERI_DEFINED_Outref_result_bytebuffer_maybenull)
#  undef _Outref_result_bytebuffer_maybenull_
#  undef SALIERI_DEFINED_Outref_result_bytebuffer_maybenull
#endif
#if !defined(_Outref_result_bytebuffer_maybenull_)
#  define _Outref_result_bytebuffer_maybenull_(s)
#  define SALIERI_DEFINED_Outref_result_bytebuffer_maybenull
#endif

#if defined(_Outref_result_buffer_to_maybenull_) && defined(SALIERI_DEFINED_Outref_result_buffer_to_maybenull)
#  undef _Outref_result_buffer_to_maybenull_
#  undef SALIERI_DEFINED_Outref_result_buffer_to_maybenull
#endif
#if !defined(_Outref_result_buffer_to_maybenull_)
#  define _Outref_result_buffer_to_maybenull_(s,c)
#  define SALIERI_DEFINED_Outref_result_buffer_to_maybenull
#endif

#if defined(_Outref_result_bytebuffer_to_maybenull_) && defined(SALIERI_DEFINED_Outref_result_bytebuffer_to_maybenull)
#  undef _Outref_result_bytebuffer_to_maybenull_
#  undef SALIERI_DEFINED_Outref_result_bytebuffer_to_maybenull
#endif
#if !defined(_Outref_result_bytebuffer_to_maybenull_)
#  define _Outref_result_bytebuffer_to_maybenull_(s,c)
#  define SALIERI_DEFINED_Outref_result_bytebuffer_to_maybenull
#endif

#if defined(_Outref_result_buffer_all_maybenull_) && defined(SALIERI_DEFINED_Outref_result_buffer_all_maybenull)
#  undef _Outref_result_buffer_all_maybenull_
#  undef SALIERI_DEFINED_Outref_result_buffer_all_maybenull
#endif
#if !defined(_Outref_result_buffer_all_maybenull_)
#  define _Outref_result_buffer_all_maybenull_(s)
#  define SALIERI_DEFINED_Outref_result_buffer_all_maybenull
#endif

#if defined(_Outref_result_bytebuffer_all_maybenull_) && defined(SALIERI_DEFINED_Outref_result_bytebuffer_all_maybenull)
#  undef _Outref_result_bytebuffer_all_maybenull_
#  undef SALIERI_DEFINED_Outref_result_bytebuffer_all_maybenull
#endif
#if !defined(_Outref_result_bytebuffer_all_maybenull_)
#  define _Outref_result_bytebuffer_all_maybenull_(s)
#  define SALIERI_DEFINED_Outref_result_bytebuffer_all_maybenull
#endif

/* Return Values */

#if defined(_Ret_z_) && defined(SALIERI_DEFINED_Ret_z)
#  undef _Ret_z_
#  undef SALIERI_DEFINED_Ret_z
#endif
#if !defined(_Ret_z_)
#  define _Ret_z_
#  define SALIERI_DEFINED_Ret_z
#endif

#if defined(_Ret_writes_) && defined(SALIERI_DEFINED_Ret_writes)
#  undef _Ret_writes_
#  undef SALIERI_DEFINED_Ret_writes
#endif
#if !defined(_Ret_writes_)
#  define _Ret_writes_(s)
#  define SALIERI_DEFINED_Ret_writes
#endif

#if defined(_Ret_writes_bytes_) && defined(SALIERI_DEFINED_Ret_writes_bytes)
#  undef _Ret_writes_bytes_
#  undef SALIERI_DEFINED_Ret_writes_bytes
#endif
#if !defined(_Ret_writes_bytes_)
#  define _Ret_writes_bytes_(s)
#  define SALIERI_DEFINED_Ret_writes_bytes
#endif

#if defined(_Ret_writes_z_) && defined(SALIERI_DEFINED_Ret_writes_z)
#  undef _Ret_writes_z_
#  undef SALIERI_DEFINED_Ret_writes_z
#endif
#if !defined(_Ret_writes_z_)
#  define _Ret_writes_z_(s)
#  define SALIERI_DEFINED_Ret_writes_z
#endif

#if defined(_Ret_writes_to_) && defined(SALIERI_DEFINED_Ret_writes_to)
#  undef _Ret_writes_to_
#  undef SALIERI_DEFINED_Ret_writes_to
#endif
#if !defined(_Ret_writes_to_)
#  define _Ret_writes_to_(s,c)
#  define SALIERI_DEFINED_Ret_writes_to
#endif

#if defined(_Ret_writes_maybenull_) && defined(SALIERI_DEFINED_Ret_writes_maybenull)
#  undef _Ret_writes_maybenull_
#  undef SALIERI_DEFINED_Ret_writes_maybenull
#endif
#if !defined(_Ret_writes_maybenull_)
#  define _Ret_writes_maybenull_(s)
#  define SALIERI_DEFINED_Ret_writes_maybenull
#endif

#if defined(_Ret_writes_to_maybenull_) && defined(SALIERI_DEFINED_Ret_writes_to_maybenull)
#  undef _Ret_writes_to_maybenull_
#  undef SALIERI_DEFINED_Ret_writes_to_maybenull
#endif
#if !defined(_Ret_writes_to_maybenull_)
#  define _Ret_writes_to_maybenull_(s)
#  define SALIERI_DEFINED_Ret_writes_to_maybenull
#endif

#if defined(_Ret_writes_maybenull_z_) && defined(SALIERI_DEFINED_Ret_writes_maybenull_z)
#  undef _Ret_writes_maybenull_z_
#  undef SALIERI_DEFINED_Ret_writes_maybenull_z
#endif
#if !defined(_Ret_writes_maybenull_z_)
#  define _Ret_writes_maybenull_z_(s)
#  define SALIERI_DEFINED_Ret_writes_maybenull_z
#endif

#if defined(_Ret_maybenull_) && defined(SALIERI_DEFINED_Ret_maybenull)
#  undef _Ret_maybenull_
#  undef SALIERI_DEFINED_Ret_maybenull
#endif
#if !defined(_Ret_maybenull_)
#  define _Ret_maybenull_
#  define SALIERI_DEFINED_Ret_maybenull
#endif

#if defined(_Ret_maybenull_z_) && defined(SALIERI_DEFINED_Ret_maybenull_z)
#  undef _Ret_maybenull_z_
#  undef SALIERI_DEFINED_Ret_maybenull_z
#endif
#if !defined(_Ret_maybenull_z_)
#  define _Ret_maybenull_z_
#  define SALIERI_DEFINED_Ret_maybenull_z
#endif

#if defined(_Ret_null_) && defined(SALIERI_DEFINED_Ret_null)
#  undef _Ret_null_
#  undef SALIERI_DEFINED_Ret_null
#endif
#if !defined(_Ret_null_)
#  define _Ret_null_
#  define SALIERI_DEFINED_Ret_null
#endif

#if defined(_Ret_notnull_) && defined(SALIERI_DEFINED_Ret_notnull)
#  undef _Ret_notnull_
#  undef SALIERI_DEFINED_Ret_notnull
#endif
#if !defined(_Ret_notnull_)
#  define _Ret_notnull_
#  define SALIERI_DEFINED_Ret_notnull
#endif

#if defined(_Ret_writes_bytes_to_) && defined(SALIERI_DEFINED_Ret_writes_bytes_to)
#  undef _Ret_writes_bytes_to_
#  undef SALIERI_DEFINED_Ret_writes_bytes_to
#endif
#if !defined(_Ret_writes_bytes_to_)
#  define _Ret_writes_bytes_to_
#  define SALIERI_DEFINED_Ret_writes_bytes_to
#endif

#if defined(_Ret_writes_bytes_to_) && defined(SALIERI_DEFINED_Ret_writes_bytes_to)
#  undef _Ret_writes_bytes_to_
#  undef SALIERI_DEFINED_Ret_writes_bytes_to
#endif
#if !defined(_Ret_writes_bytes_to_)
#  define _Ret_writes_bytes_to_
#  define SALIERI_DEFINED_Ret_writes_bytes_to
#endif

#if defined(_Ret_writes_bytes_maybenull_) && defined(SALIERI_DEFINED_Ret_writes_bytes_maybenull)
#  undef _Ret_writes_bytes_maybenull_
#  undef SALIERI_DEFINED_Ret_writes_bytes_maybenull
#endif
#if !defined(_Ret_writes_bytes_maybenull_)
#  define _Ret_writes_bytes_maybenull_
#  define SALIERI_DEFINED_Ret_writes_bytes_maybenull
#endif

#if defined(_Ret_writes_bytes_to_maybenull_) && defined(SALIERI_DEFINED_Ret_writes_bytes_to_maybenull)
#  undef _Ret_writes_bytes_to_maybenull_
#  undef SALIERI_DEFINED_Ret_writes_bytes_to_maybenull
#endif
#if !defined(_Ret_writes_bytes_to_maybenull_)
#  define _Ret_writes_bytes_to_maybenull_
#  define SALIERI_DEFINED_Ret_writes_bytes_to_maybenull
#endif

/* Other Common Annotations */

#if defined(_In_range_) && defined(SALIERI_DEFINED_In_range)
#  undef _In_range_
#  undef SALIERI_DEFINED_In_range
#endif
#if !defined(_In_range_)
#  define _In_range_(low, hi)
#  define SALIERI_DEFINED_In_range
#endif

#if defined(_Out_range_) && defined(SALIERI_DEFINED_Out_range)
#  undef _Out_range_
#  undef SALIERI_DEFINED_Out_range
#endif
#if !defined(_Out_range_)
#  define _Out_range_(low, hi)
#  define SALIERI_DEFINED_Out_range
#endif

#if defined(_Ret_range_) && defined(SALIERI_DEFINED_Ret_range)
#  undef _Ret_range_
#  undef SALIERI_DEFINED_Ret_range
#endif
#if !defined(_Ret_range_)
#  define _Ret_range_(low, hi)
#  define SALIERI_DEFINED_Ret_range
#endif

#if defined(_Deref_in_range_) && defined(SALIERI_DEFINED_Deref_in_range)
#  undef _Deref_in_range_
#  undef SALIERI_DEFINED_Deref_in_range
#endif
#if !defined(_Deref_in_range_)
#  define _Deref_in_range_(low, hi)
#  define SALIERI_DEFINED_Deref_in_range
#endif

#if defined(_Deref_out_range_) && defined(SALIERI_DEFINED_Deref_out_range)
#  undef _Deref_out_range_
#  undef SALIERI_DEFINED_Deref_out_range
#endif
#if !defined(_Deref_out_range_)
#  define _Deref_out_range_(low, hi)
#  define SALIERI_DEFINED_Deref_out_range
#endif

#if defined(_Deref_inout_range_) && defined(SALIERI_DEFINED_Deref_inout_range)
#  undef _Deref_inout_range_
#  undef SALIERI_DEFINED_Deref_inout_range
#endif
#if !defined(_Deref_inout_range_)
#  define _Deref_inout_range_(low, hi)
#  define SALIERI_DEFINED_Deref_inout_range
#endif

#if defined(_Field_range_) && defined(SALIERI_DEFINED_Field_range)
#  undef _Field_range_
#  undef SALIERI_DEFINED_Field_range
#endif
#if !defined(_Field_range_)
#  define _Field_range_(low, hi)
#  define SALIERI_DEFINED_Field_range
#endif

#if defined(_Pre_equal_to_) && defined(SALIERI_DEFINED_Pre_equal_to)
#  undef _Pre_equal_to_
#  undef SALIERI_DEFINED_Pre_equal_to
#endif
#if !defined(_Pre_equal_to_)
#  define _Pre_equal_to_(expr)
#  define SALIERI_DEFINED_Pre_equal_to
#endif

#if defined(_Post_equal_to_) && defined(SALIERI_DEFINED_Post_equal_to)
#  undef _Post_equal_to_
#  undef SALIERI_DEFINED_Post_equal_to
#endif
#if !defined(_Post_equal_to_)
#  define _Post_equal_to_(expr)
#  define SALIERI_DEFINED_Post_equal_to
#endif

#if defined(_Struct_size_bytes_) && defined(SALIERI_DEFINED_Struct_size_bytes)
#  undef _Struct_size_bytes_
#  undef SALIERI_DEFINED_Struct_size_bytes
#endif
#if !defined(_Struct_size_bytes_)
#  define _Struct_size_bytes_(size)
#  define SALIERI_DEFINED_Struct_size_bytes
#endif

/* Annotating Function Behavior
 *
 * https://msdn.microsoft.com/en-us/library/jj159529.aspx
 *****/

#if defined(_Called_from_function_class_) && defined(SALIERI_DEFINED_Called_from_function_class)
#  undef _Called_from_function_class_
#  undef SALIERI_DEFINED_Called_from_function_class
#endif
#if !defined(_Called_from_function_class_)
#  define _Called_from_function_class_(name)
#  define SALIERI_DEFINED_Called_from_function_class
#endif

#if defined(_Check_return_) && defined(SALIERI_DEFINED_Check_return)
#  undef _Check_return_
#  undef SALIERI_DEFINED_Check_return
#endif
#if !defined(_Check_return_)
#  define _Check_return_
#  define SALIERI_DEFINED_Check_return
#endif

#if defined(_Function_class_) && defined(SALIERI_DEFINED_Function_class)
#  undef _Function_class_
#  undef SALIERI_DEFINED_Function_class
#endif
#if !defined(_Function_class_)
#  define _Function_class_(name)
#  define SALIERI_DEFINED_Function_class
#endif

#if defined(_Raises_SEH_exception_) && defined(SALIERI_DEFINED_Raises_SEH_exception)
#  undef _Raises_SEH_exception_
#  undef SALIERI_DEFINED_Raises_SEH_exception
#endif
#if !defined(_Raises_SEH_exception_)
#  define _Raises_SEH_exception_
#  define SALIERI_DEFINED_Raises_SEH_exception
#endif

#if defined(_Must_inspect_result_) && defined(SALIERI_DEFINED_Must_inspect_result)
#  undef _Must_inspect_result_
#  undef SALIERI_DEFINED_Must_inspect_result
#endif
#if !defined(_Must_inspect_result_)
#  define _Must_inspect_result_
#  define SALIERI_DEFINED_Must_inspect_result
#endif

#if defined(_Use_decl_annotations_) && defined(SALIERI_DEFINED_Use_decl_annotations)
#  undef _Use_decl_annotations_
#  undef SALIERI_DEFINED_Use_decl_annotations
#endif
#if !defined(_Use_decl_annotations_)
#  define _Use_decl_annotations_
#  define SALIERI_DEFINED_Use_decl_annotations
#endif

#if defined(_Always_) && defined(SALIERI_DEFINED_Always)
#  undef _Always_
#  undef SALIERI_DEFINED_Always
#endif
#if !defined(_Always_)
#  define _Always_(anno_list)
#  define SALIERI_DEFINED_Always
#endif

#if defined(_On_failure_) && defined(SALIERI_DEFINED_On_failure)
#  undef _On_failure_
#  undef SALIERI_DEFINED_On_failure
#endif
#if !defined(_On_failure_)
#  define _On_failure_(anno_list)
#  define SALIERI_DEFINED_On_failure
#endif

#if defined(_Return_type_success_) && defined(SALIERI_DEFINED_Return_type_success)
#  undef _Return_type_success_
#  undef SALIERI_DEFINED_Return_type_success
#endif
#if !defined(_Return_type_success_)
#  define _Return_type_success_(expr)
#  define SALIERI_DEFINED_Return_type_success
#endif

#if defined(_Success_) && defined(SALIERI_DEFINED_Success)
#  undef _Success_
#  undef SALIERI_DEFINED_Success
#endif
#if !defined(_Success_)
#  define _Success_(expr)
#  define SALIERI_DEFINED_Success
#endif

/* Annotating Structs and Classes
 *
 * https://msdn.microsoft.com/en-us/library/jj159528.aspx
 *****/

#if defined(_Field_range_) && defined(SALIERI_DEFINED_Field_range)
#  undef _Field_range_
#  undef SALIERI_DEFINED_Field_range
#endif
#if !defined(_Field_range_)
#  define _Field_range_(low, high)
#  define SALIERI_DEFINED_Field_range
#endif

#if defined(_Field_size_) && defined(SALIERI_DEFINED_Field_size)
#  undef _Field_size_
#  undef SALIERI_DEFINED_Field_size
#endif
#if !defined(_Field_size_)
#  define _Field_size_(size)
#  define SALIERI_DEFINED_Field_size
#endif

#if defined(_Field_size_part_) && defined(SALIERI_DEFINED_Field_size_part)
#  undef _Field_size_part_
#  undef SALIERI_DEFINED_Field_size_part
#endif
#if !defined(_Field_size_part_)
#  define _Field_size_part_(size)
#  define SALIERI_DEFINED_Field_size_part
#endif

#if defined(_Field_size_opt_) && defined(SALIERI_DEFINED_Field_size_opt)
#  undef _Field_size_opt_
#  undef SALIERI_DEFINED_Field_size_opt
#endif
#if !defined(_Field_size_opt_)
#  define _Field_size_opt_(size)
#  define SALIERI_DEFINED_Field_size_opt
#endif

#if defined(_Field_size_bytes_) && defined(SALIERI_DEFINED_Field_size_bytes)
#  undef _Field_size_bytes_
#  undef SALIERI_DEFINED_Field_size_bytes
#endif
#if !defined(_Field_size_bytes_)
#  define _Field_size_bytes_(size)
#  define SALIERI_DEFINED_Field_size_bytes
#endif

#if defined(_Field_size_bytes_opt_) && defined(SALIERI_DEFINED_Field_size_bytes_opt)
#  undef _Field_size_bytes_opt_
#  undef SALIERI_DEFINED_Field_size_bytes_opt
#endif
#if !defined(_Field_size_bytes_opt_)
#  define _Field_size_bytes_opt_(size)
#  define SALIERI_DEFINED_Field_size_bytes_opt
#endif

#if defined(_Field_size_part_) && defined(SALIERI_DEFINED_Field_size_part)
#  undef _Field_size_part_
#  undef SALIERI_DEFINED_Field_size_part
#endif
#if !defined(_Field_size_part_)
#  define _Field_size_part_(size, count)
#  define SALIERI_DEFINED_Field_size_part
#endif

#if defined(_Field_size_part_opt_) && defined(SALIERI_DEFINED_Field_size_part_opt)
#  undef _Field_size_part_opt_
#  undef SALIERI_DEFINED_Field_size_part_opt
#endif
#if !defined(_Field_size_part_opt_)
#  define _Field_size_part_opt_(size, count)
#  define SALIERI_DEFINED_Field_size_part_opt
#endif

#if defined(_Field_size_bytes_part_) && defined(SALIERI_DEFINED_Field_size_bytes_part)
#  undef _Field_size_bytes_part_
#  undef SALIERI_DEFINED_Field_size_bytes_part
#endif
#if !defined(_Field_size_bytes_part_)
#  define _Field_size_bytes_part_(size, count)
#  define SALIERI_DEFINED_Field_size_bytes_part
#endif

#if defined(_Field_size_bytes_part_opt_) && defined(SALIERI_DEFINED_Field_size_bytes_part_opt)
#  undef _Field_size_bytes_part_opt_
#  undef SALIERI_DEFINED_Field_size_bytes_part_opt
#endif
#if !defined(_Field_size_bytes_part_opt_)
#  define _Field_size_bytes_part_opt_(size, count)
#  define SALIERI_DEFINED_Field_size_bytes_part_opt
#endif

#if defined(_Field_size_full_) && defined(SALIERI_DEFINED_Field_size_full)
#  undef _Field_size_full_
#  undef SALIERI_DEFINED_Field_size_full
#endif
#if !defined(_Field_size_full_)
#  define _Field_size_full_(size)
#  define SALIERI_DEFINED_Field_size_full
#endif

#if defined(_Field_size_full_opt_) && defined(SALIERI_DEFINED_Field_size_full_opt)
#  undef _Field_size_full_opt_
#  undef SALIERI_DEFINED_Field_size_full_opt
#endif
#if !defined(_Field_size_full_opt_)
#  define _Field_size_full_opt_(size)
#  define SALIERI_DEFINED_Field_size_full_opt
#endif

#if defined(_Field_size_bytes_full_) && defined(SALIERI_DEFINED_Field_size_bytes_full)
#  undef _Field_size_bytes_full_
#  undef SALIERI_DEFINED_Field_size_bytes_full
#endif
#if !defined(_Field_size_bytes_full_)
#  define _Field_size_bytes_full_(size)
#  define SALIERI_DEFINED_Field_size_bytes_full
#endif

#if defined(_Field_size_bytes_full_opt_) && defined(SALIERI_DEFINED_Field_size_bytes_full_opt)
#  undef _Field_size_bytes_full_opt_
#  undef SALIERI_DEFINED_Field_size_bytes_full_opt
#endif
#if !defined(_Field_size_bytes_full_opt_)
#  define _Field_size_bytes_full_opt_(size)
#  define SALIERI_DEFINED_Field_size_bytes_full_opt
#endif

#if defined(_Struct_size_bytes_) && defined(SALIERI_DEFINED_Struct_size_bytes)
#  undef _Struct_size_bytes_
#  undef SALIERI_DEFINED_Struct_size_bytes
#endif
#if !defined(_Struct_size_bytes_)
#  define _Struct_size_bytes_(size)
#  define SALIERI_DEFINED_Struct_size_bytes
#endif

/* Annotating Locking Behavior
 *
 * https://msdn.microsoft.com/en-us/library/hh916381.aspx
 *****/

#if defined(_Acquires_exclusive_lock_) && defined(SALIERI_DEFINED_Acquires_exclusive_lock)
#  undef _Acquires_exclusive_lock_
#  undef SALIERI_DEFINED_Acquires_exclusive_lock
#endif
#if !defined(_Acquires_exclusive_lock_)
#  define _Acquires_exclusive_lock_(expr)
#  define SALIERI_DEFINED_Acquires_exclusive_lock
#endif

#if defined(_Acquires_lock_) && defined(SALIERI_DEFINED_Acquires_lock)
#  undef _Acquires_lock_
#  undef SALIERI_DEFINED_Acquires_lock
#endif
#if !defined(_Acquires_lock_)
#  define _Acquires_lock_(expr)
#  define SALIERI_DEFINED_Acquires_lock
#endif

#if defined(_Acquires_nonreentrant_lock_) && defined(SALIERI_DEFINED_Acquires_nonreentrant_lock)
#  undef _Acquires_nonreentrant_lock_
#  undef SALIERI_DEFINED_Acquires_nonreentrant_lock
#endif
#if !defined(_Acquires_nonreentrant_lock_)
#  define _Acquires_nonreentrant_lock_(expr)
#  define SALIERI_DEFINED_Acquires_nonreentrant_lock
#endif

#if defined(_Acquires_shared_lock_) && defined(SALIERI_DEFINED_Acquires_shared_lock)
#  undef _Acquires_shared_lock_
#  undef SALIERI_DEFINED_Acquires_shared_lock
#endif
#if !defined(_Acquires_shared_lock_)
#  define _Acquires_shared_lock_(expr)
#  define SALIERI_DEFINED_Acquires_shared_lock
#endif

#if defined(_Create_lock_level_) && defined(SALIERI_DEFINED_Create_lock_level)
#  undef _Create_lock_level_
#  undef SALIERI_DEFINED_Create_lock_level
#endif
#if !defined(_Create_lock_level_)
#  define _Create_lock_level_(name)
#  define SALIERI_DEFINED_Create_lock_level
#endif

#if defined(_Has_lock_kind_) && defined(SALIERI_DEFINED_Has_lock_kind)
#  undef _Has_lock_kind_
#  undef SALIERI_DEFINED_Has_lock_kind
#endif
#if !defined(_Has_lock_kind_)
#  define _Has_lock_kind_(kind)
#  define SALIERI_DEFINED_Has_lock_kind
#endif

#if defined(_Has_lock_level_) && defined(SALIERI_DEFINED_Has_lock_level)
#  undef _Has_lock_level_
#  undef SALIERI_DEFINED_Has_lock_level
#endif
#if !defined(_Has_lock_level_)
#  define _Has_lock_level_(name)
#  define SALIERI_DEFINED_Has_lock_level
#endif

#if defined(_Lock_level_order_) && defined(SALIERI_DEFINED_Lock_level_order)
#  undef _Lock_level_order_
#  undef SALIERI_DEFINED_Lock_level_order
#endif
#if !defined(_Lock_level_order_)
#  define _Lock_level_order_(name1, name2)
#  define SALIERI_DEFINED_Lock_level_order
#endif

#if defined(_Post_same_lock_) && defined(SALIERI_DEFINED_Post_same_lock)
#  undef _Post_same_lock_
#  undef SALIERI_DEFINED_Post_same_lock
#endif
#if !defined(_Post_same_lock_)
#  define _Post_same_lock_(expr1, expr2)
#  define SALIERI_DEFINED_Post_same_lock
#endif

#if defined(_Releases_exclusive_lock_) && defined(SALIERI_DEFINED_Releases_exclusive_lock)
#  undef _Releases_exclusive_lock_
#  undef SALIERI_DEFINED_Releases_exclusive_lock
#endif
#if !defined(_Releases_exclusive_lock_)
#  define _Releases_exclusive_lock_(expr)
#  define SALIERI_DEFINED_Releases_exclusive_lock
#endif

#if defined(_Releases_lock_) && defined(SALIERI_DEFINED_Releases_lock)
#  undef _Releases_lock_
#  undef SALIERI_DEFINED_Releases_lock
#endif
#if !defined(_Releases_lock_)
#  define _Releases_lock_(expr)
#  define SALIERI_DEFINED_Releases_lock
#endif

#if defined(_Releases_nonreentrant_lock_) && defined(SALIERI_DEFINED_Releases_nonreentrant_lock)
#  undef _Releases_nonreentrant_lock_
#  undef SALIERI_DEFINED_Releases_nonreentrant_lock
#endif
#if !defined(_Releases_nonreentrant_lock_)
#  define _Releases_nonreentrant_lock_(expr)
#  define SALIERI_DEFINED_Releases_nonreentrant_lock
#endif

#if defined(_Releases_shared_lock_) && defined(SALIERI_DEFINED_Releases_shared_lock)
#  undef _Releases_shared_lock_
#  undef SALIERI_DEFINED_Releases_shared_lock
#endif
#if !defined(_Releases_shared_lock_)
#  define _Releases_shared_lock_(expr)
#  define SALIERI_DEFINED_Releases_shared_lock
#endif

#if defined(_Requires_lock_held_) && defined(SALIERI_DEFINED_Requires_lock_held)
#  undef _Requires_lock_held_
#  undef SALIERI_DEFINED_Requires_lock_held
#endif
#if !defined(_Requires_lock_held_)
#  define _Requires_lock_held_(expr)
#  define SALIERI_DEFINED_Requires_lock_held
#endif

#if defined(_Requires_lock_not_held_) && defined(SALIERI_DEFINED_Requires_lock_not_held)
#  undef _Requires_lock_not_held_
#  undef SALIERI_DEFINED_Requires_lock_not_held
#endif
#if !defined(_Requires_lock_not_held_)
#  define _Requires_lock_not_held_(expr)
#  define SALIERI_DEFINED_Requires_lock_not_held
#endif

#if defined(_Requires_no_locks_held_) && defined(SALIERI_DEFINED_Requires_no_locks_held)
#  undef _Requires_no_locks_held_
#  undef SALIERI_DEFINED_Requires_no_locks_held
#endif
#if !defined(_Requires_no_locks_held_)
#  define _Requires_no_locks_held_
#  define SALIERI_DEFINED_Requires_no_locks_held
#endif

#if defined(_Requires_shared_lock_held_) && defined(SALIERI_DEFINED_Requires_shared_lock_held)
#  undef _Requires_shared_lock_held_
#  undef SALIERI_DEFINED_Requires_shared_lock_held
#endif
#if !defined(_Requires_shared_lock_held_)
#  define _Requires_shared_lock_held_(expr)
#  define SALIERI_DEFINED_Requires_shared_lock_held
#endif

#if defined(_Requires_exclusive_lock_held_) && defined(SALIERI_DEFINED_Requires_exclusive_lock_held)
#  undef _Requires_exclusive_lock_held_
#  undef SALIERI_DEFINED_Requires_exclusive_lock_held
#endif
#if !defined(_Requires_exclusive_lock_held_)
#  define _Requires_exclusive_lock_held_(expr)
#  define SALIERI_DEFINED_Requires_exclusive_lock_held
#endif

/* Shared Data Access Annotations */

#if defined(_Guarded_by_) && defined(SALIERI_DEFINED_Guarded_by)
#  undef _Guarded_by_
#  undef SALIERI_DEFINED_Guarded_by
#endif
#if !defined(_Guarded_by_)
#  define _Guarded_by_(expr)
#  define SALIERI_DEFINED_Guarded_by
#endif

#if defined(_Interlocked_) && defined(SALIERI_DEFINED_Interlocked)
#  undef _Interlocked_
#  undef SALIERI_DEFINED_Interlocked
#endif
#if !defined(_Interlocked_)
#  define _Interlocked_
#  define SALIERI_DEFINED_Interlocked
#endif

#if defined(_Interlocked_operand_) && defined(SALIERI_DEFINED_Interlocked_operand)
#  undef _Interlocked_operand_
#  undef SALIERI_DEFINED_Interlocked_operand
#endif
#if !defined(_Interlocked_operand_)
#  define _Interlocked_operand_
#  define SALIERI_DEFINED_Interlocked_operand
#endif

#if defined(_Write_guarded_by_) && defined(SALIERI_DEFINED_Write_guarded_by)
#  undef _Write_guarded_by_
#  undef SALIERI_DEFINED_Write_guarded_by
#endif
#if !defined(_Write_guarded_by_)
#  define _Write_guarded_by_(expr)
#  define SALIERI_DEFINED_Write_guarded_by
#endif

/* Specifying When and Where an Annotation Applies
 *
 * https://msdn.microsoft.com/en-us/library/jj159526.aspx
 *****/

#if defined(_At_) && defined(SALIERI_DEFINED_At)
#  undef _At_
#  undef SALIERI_DEFINED_At
#endif
#if !defined(_At_)
#  define _At_(expr, anno_list)
#  define SALIERI_DEFINED_At
#endif

#if defined(_At_buffer_) && defined(SALIERI_DEFINED_At_buffer)
#  undef _At_buffer_
#  undef SALIERI_DEFINED_At_buffer
#endif
#if !defined(_At_buffer_)
#  define _At_buffer_(expr, iter, elem_count, anno_list)
#  define SALIERI_DEFINED_At_buffer
#endif

#if defined(_Group_) && defined(SALIERI_DEFINED_Group)
#  undef _Group_
#  undef SALIERI_DEFINED_Group
#endif
#if !defined(_Group_)
#  define _Group_(anno_list)
#  define SALIERI_DEFINED_Group
#endif

#if defined(_When_) && defined(SALIERI_DEFINED_When)
#  undef _When_
#  undef SALIERI_DEFINED_When
#endif
#if !defined(_When_)
#  define _When_(expr, anno_list)
#  define SALIERI_DEFINED_When
#endif

/* Intrinsic Functions
 *
 * https://msdn.microsoft.com/en-us/library/jj159527.aspx
 *****/

/* General Purpose */

#if defined(_Curr_) && defined(SALIERI_DEFINED_Curr)
#  undef _Curr_
#  undef SALIERI_DEFINED_Curr
#endif
#if !defined(_Curr_)
#  define _Curr_
#  define SALIERI_DEFINED_Curr
#endif

#if defined(_Inexpressible_) && defined(SALIERI_DEFINED_Inexpressible)
#  undef _Inexpressible_
#  undef SALIERI_DEFINED_Inexpressible
#endif
#if !defined(_Inexpressible_)
#  define _Inexpressible_(expr)
#  define SALIERI_DEFINED_Inexpressible
#endif

#if defined(_Nullterm_length_) && defined(SALIERI_DEFINED_Nullterm_length)
#  undef _Nullterm_length_
#  undef SALIERI_DEFINED_Nullterm_length
#endif
#if !defined(_Nullterm_length_)
#  define _Nullterm_length_(param)
#  define SALIERI_DEFINED_Nullterm_length
#endif

#if defined(_Old_) && defined(SALIERI_DEFINED_Old)
#  undef _Old_
#  undef SALIERI_DEFINED_Old
#endif
#if !defined(_Old_)
#  define _Old_(expr)
#  define SALIERI_DEFINED_Old
#endif

#if defined(_Param_) && defined(SALIERI_DEFINED_Param)
#  undef _Param_
#  undef SALIERI_DEFINED_Param
#endif
#if !defined(_Param_)
#  define _Param_(n)
#  define SALIERI_DEFINED_Param
#endif

/* String Specific */

#if defined(_String_length_) && defined(SALIERI_DEFINED_String_length)
#  undef _String_length_
#  undef SALIERI_DEFINED_String_length
#endif
#if !defined(_String_length_)
#  define _String_length_(param)
#  define SALIERI_DEFINED_String_length
#endif

#if defined(SALIERI_VERSION)
#  undef SALIERI_VERSION
#endif

#define SALIERI_VERSION 1

#endif /* !defined(SALIERI_VERSION) || (SALIERI_VERSION < X) */
