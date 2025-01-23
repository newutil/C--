;; ワード(16bit)を I/O ポートから入力する
__in                            ; int in(int p);
        ld      g1,2,sp	        ; ポートアドレス
        in      g0,g1	        ; I/O ポートから入力する
        ret