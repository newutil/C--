追加日：2024/12/19
更新日：2025/01/09

リンカld--をアーカイブファイルに対応させたため、
ライブラリ関数をアーカイブ化する

stdio.cmm   内のライブラリ関数は、分割して   stdio.a    に格納
stdlib.cmm  内のライブラリ関数は、分割して   stdlib.a   に格納
printf.cmm  は一つのファイルprintf.oとして　stdio.a    に格納
environ.cmm 内のライブラリ関数は、分割して   stdlib.a   に格納
syslib.s    は.sのファイルで分割したのち
            アセンブリした.oファイルを      syslib.aとして格納
ctr0.s      は.sのファイルで分割したのち
            アセンブリした.oファイルを      crt0.aとして格納
            start関数のみ単独の.oファイルで保存
wrap_syslib 内のライブラリ関数は、分割して   syslib.a   に格納

string.cmm  内のライブラリ関数は、分割して   string.a   に格納
ctype.cmm   内のライブラリ関数は、分割して   ctype.a    に格納