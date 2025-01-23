;; 符号なし整数の比較
__uCmp                          ; int _uCmp(int a, int b);
;; アドレス比較(第1引数の方が大きいとき1, 等しいとき0、小さいとき-1)
__aCmp                          ; int _aCmp(void[] a, void[] b);
        ld      g0,2,sp
        cmp     g0,4,sp
        ld      g0,#1
        jhi     .L1
        ld      g0,#0
        jz      .L1
        ld      g0,#-1
.L1     ret