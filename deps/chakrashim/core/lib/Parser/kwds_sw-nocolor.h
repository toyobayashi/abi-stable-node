//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
// Generated by switch.exe on Wed Jan 28 10:56:16 2009
// Hand-edited to exclude identifiers that are not JScript keywords.

#if _WIN32 && _M_IX86
    __asm
        {
        mov eax,luHash
    // 0001 while
        cmp eax, 0x009FF239
        jb L0003
        je LEqual_while
    // 0002 protected
        cmp eax, 0x7679AA2A
        jb L0005
    // 0004 package
        cmp eax, 0xA9DEE87C
        ja LDefault
    // 0009 decimal
        cmp eax, 0x98F1BFFF
        jb L0013
    // 0012 extends
        cmp eax, 0x9C13124B
        jb L0025
        je LEqual_extends
    // 0024 finally
        cmp eax, 0x9C3672EF
        je LEqual_finally
        jmp LDefault
L0025:
    // 0025 default
        cmp eax, 0x98F50305
        je LEqual_default
        jmp LDefault
L0013:
        cmp eax, 0x79C146FA
        je LEqual_instanceof
        jmp LDefault
L0005:
    // 0005 static
        cmp eax, 0x0A5727B8
        jb L000B
    // 000A continue
        cmp eax, 0x1EF7AD75
        jb L0015
        je LEqual_continue
    // 0014 synchronized
        cmp eax, 0x3189C9E0
        jb L0029
    // 0028 function
        cmp eax, 0x70E47CD6
        je LEqual_function
        jmp LDefault
L0029:
    // 0029 debugger
        cmp eax, 0x2806F445
        je LEqual_debugger
        jmp LDefault
L0015:
    // 0015 typeof
        cmp eax, 0x0A7440A7
        jb L002B
        je LEqual_typeof
L002B:
    // 002B throws
    // 0057 switch
        cmp eax, 0x0A5B93A2
        je LEqual_switch
        jmp LDefault
L000B:
    // 000B export
        cmp eax, 0x092E0B32
        jb L0017
        je LEqual_export
    // 0016 public
        cmp eax, 0x0A17792F
        jb L002D
    // 002C return
        cmp eax, 0x0A2FCE00
        je LEqual_return
        jmp LDefault
L002D:
    // 002D native
    // 005B import
        cmp eax, 0x0976AFAB
        je LEqual_import
        jmp LDefault
L0017:
    // 0017 double
        cmp eax, 0x090D396B
        jb L002F
        jmp LDefault
L002F:
    // 002F delete
        cmp eax, 0x08FFD213
        je LEqual_delete
        jmp LDefault
L0003:
    // 0003 null
        cmp eax, 0x0008CABB
        jb L0007
        je LEqual_null
    // 0006 false
        cmp eax, 0x0089C56B
        jb L000D
        je LEqual_false
    // 000C short
        cmp eax, 0x009AE070
        jb LDefault
    // 0018 throw
        cmp eax, 0x009C29E4
        jb L0031
        je LEqual_throw
L0031:
    // 0031 super
        cmp eax, 0x009BDA2F
        je LEqual_super
        jmp LDefault
L000D:
    // 000D with
        cmp eax, 0x00096A6C
        jb L001B
        je LEqual_with
    // 001A class
        cmp eax, 0x0086B966
        jb L0035
        je LEqual_class
    // 0034 const
        cmp eax, 0x008701A7
        je LEqual_const
        jmp LDefault
L0035:
    // 0035 catch
        cmp eax, 0x0085FAA3
        je LEqual_catch
    // 006B break
        cmp eax, 0x0085E995
        je LEqual_break
        jmp LDefault
L001B:
    // 001B uint
        cmp eax, 0x000943B0
        jb L0037
    // 0036 void
        cmp eax, 0x00095D42
        je LEqual_void
        jmp LDefault
L0037:
    // 0037 true
        cmp eax, 0x00093B10
        je LEqual_true
    // 006F this
        cmp eax, 0x00092F08
        je LEqual_this
        jmp LDefault
L0007:
    // 0007 var
        cmp eax, 0x00008C19
        jb L000F
        je LEqual_var
    // 000E else
        cmp eax, 0x00081449
        jb L003B
        je LEqual_else
    // 001C goto
        cmp eax, 0x00083E29
        jb L0039
        jmp LDefault
L0039:
    // 0039 enum
        cmp eax, 0x000816B5
        je LEqual_enum
        jmp LDefault
L003B:
    // 003B case
        cmp eax, 0x0007E17C
        je LEqual_case
        jmp LDefault
L000F:
    // 000F get
        cmp eax, 0x00007B70
        jb L001F
    // 001E set
        cmp eax, 0x000088FC
        jb L003D
    // 003C try
        cmp eax, 0x00008AFF
        je LEqual_try
        jmp LDefault
L003D:
    // 003D new
        cmp eax, 0x0000835A
        je LEqual_new
        jmp LDefault
L001F:
    // 001F in
        cmp eax, 0x00000767
        jb L003F
        je LEqual_in
    // 003E for
        cmp eax, 0x00007AF7
        je LEqual_for
        jmp LDefault
L003F:
    // 003F if
        cmp eax, 0x0000075F
        je LEqual_if
    // 007F do
        cmp eax, 0x00000713
        je LEqual_do
        jmp LDefault
        }
#else
    // 0001 while
    if (luHash < 0x009FF239) goto L0003;
    if (luHash == 0x009FF239) goto LEqual_while;
    // 0002 protected
    if (luHash < 0x7679AA2A) goto L0005;
    // 0004 package
    if (luHash < 0xA9DEE87C) goto L0009;
    goto LDefault;
L0009:
    // 0009 decimal
    if (luHash < 0x98F1BFFF) goto L0013;
    // 0012 extends
    if (luHash < 0x9C13124B) goto L0025;
    if (luHash == 0x9C13124B) goto LEqual_extends;
    // 0024 finally
    if (luHash == 0x9C3672EF) goto LEqual_finally;
    goto LDefault;
L0025:
    // 0025 default
    if (luHash == 0x98F50305) goto LEqual_default;
    goto LDefault;
L0013:
    // 004F instanceof
    if (luHash == 0x79C146FA) goto LEqual_instanceof;
    goto LDefault;
L0005:
    // 0005 static
    if (luHash < 0x0A5727B8) goto L000B;
    // 000A continue
    if (luHash < 0x1EF7AD75) goto L0015;
    if (luHash == 0x1EF7AD75) goto LEqual_continue;
    // 0014 synchronized
    if (luHash < 0x3189C9E0) goto L0029;
    // 0028 function
    if (luHash == 0x70E47CD6) goto LEqual_function;
    goto LDefault;
L0029:
    // 0029 debugger
    if (luHash == 0x2806F445) goto LEqual_debugger;
    goto LDefault;
L0015:
    // 0015 typeof
    if (luHash < 0x0A7440A7) goto L002B;
    if (luHash == 0x0A7440A7) goto LEqual_typeof;
    // 002A ushort
    goto LDefault;
L002B:
    // 0057 switch
    if (luHash == 0x0A5B93A2) goto LEqual_switch;
    goto LDefault;
L000B:
    // 000B export
    if (luHash < 0x092E0B32) goto L0017;
    if (luHash == 0x092E0B32) goto LEqual_export;
    // 0016 public
    if (luHash < 0x0A17792F) goto L002D;
    // 002C return
    if (luHash == 0x0A2FCE00) goto LEqual_return;
    goto LDefault;
L002D:
    // 005B import
    if (luHash == 0x0976AFAB) goto LEqual_import;
    goto LDefault;
L0017:
    // 0017 double
    if (luHash < 0x090D396B) goto L002F;
    goto LDefault;
L002F:
    // 002F delete
    if (luHash == 0x08FFD213) goto LEqual_delete;
    goto LDefault;
L0003:
    // 0003 null
    if (luHash < 0x0008CABB) goto L0007;
    if (luHash == 0x0008CABB) goto LEqual_null;
    // 0006 false
    if (luHash < 0x0089C56B) goto L000D;
    if (luHash == 0x0089C56B) goto LEqual_false;
    // 000C short
    if (luHash < 0x009AE070) goto LDefault;
    // 0018 throw
    if (luHash < 0x009C29E4) goto L0031;
    if (luHash == 0x009C29E4) goto LEqual_throw;
    // 0030 ulong
    goto LDefault;
L0031:
    // 0031 super
    if (luHash == 0x009BDA2F) goto LEqual_super;
    goto LDefault;
L000D:
    // 000D with
    if (luHash < 0x00096A6C) goto L001B;
    if (luHash == 0x00096A6C) goto LEqual_with;
    // 001A class
    if (luHash < 0x0086B966) goto L0035;
    if (luHash == 0x0086B966) goto LEqual_class;
    // 0034 const
    if (luHash == 0x008701A7) goto LEqual_const;
    goto LDefault;
L0035:
    // 0035 catch
    if (luHash == 0x0085FAA3) goto LEqual_catch;
    // 006B break
    if (luHash == 0x0085E995) goto LEqual_break;
    goto LDefault;
L001B:
    // 001B uint
    if (luHash < 0x000943B0) goto L0037;
    // 0036 void
    if (luHash == 0x00095D42) goto LEqual_void;
    goto LDefault;
L0037:
    // 0037 true
    if (luHash == 0x00093B10) goto LEqual_true;
    // 006F this
    if (luHash == 0x00092F08) goto LEqual_this;
    goto LDefault;
L0007:
    // 0007 var
    if (luHash < 0x00008C19) goto L000F;
    if (luHash == 0x00008C19) goto LEqual_var;
    // 000E else
    if (luHash < 0x00081449) goto L001D;
    if (luHash == 0x00081449) goto LEqual_else;
    // 001C goto
    if (luHash < 0x00083E29) goto L0039;
    goto LDefault;
L0039:
    // 0039 enum
    if (luHash == 0x000816B5) goto LEqual_enum;
    goto LDefault;
L001D:
    // 001D char
    if (luHash < 0x0007E83E) goto L003B;
    goto LDefault;
L003B:
    // 003B case
    if (luHash == 0x0007E17C) goto LEqual_case;
    goto LDefault;
L000F:
    // 000F get
    if (luHash < 0x00007B70) goto L001F;
    // 001E set
    if (luHash < 0x000088FC) goto L003D;
    // 003C try
    if (luHash == 0x00008AFF) goto LEqual_try;
    goto LDefault;
L003D:
    // 003D new
    if (luHash == 0x0000835A) goto LEqual_new;
    // 007B int
    goto LDefault;
L001F:
    // 001F in
    if (luHash < 0x00000767) goto L003F;
    if (luHash == 0x00000767) goto LEqual_in;
    // 003E for
    if (luHash == 0x00007AF7) goto LEqual_for;
    goto LDefault;
L003F:
    // 003F if
    if (luHash == 0x0000075F) goto LEqual_if;
    // 007F do
    if (luHash == 0x00000713) goto LEqual_do;
    goto LDefault;
#endif // _WIN32 && _M_IX86
