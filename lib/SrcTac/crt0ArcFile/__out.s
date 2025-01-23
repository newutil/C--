;; ワードを I/O ポートへ出力する
__out                           ; void out(int p,int v);
        ld      g0,2,sp	        ; ポートアドレス
        ld      g1,4,sp	        ; 出力データ
        out     g1,g0	        ; I/O ポートへ出力する
        ret