;; 32ビット掛け算ルーチン
__mul32                     ; int[] _mul32(int[] dst, int src)
        push    g3
        ld      g0,4,sp     ; ディスティネーション(アドレス)
        ld      g1,2,g0     ; ディスティネーション下位ワード(B)
        ld      g2,#0       ; (g1,g2) <= (B,0)
        ld      g3,#16      ; カウンタ
.A1     ld      g0,#0       ; g0をとりあえず0にする
        shll    g1,#1       ; g1 <<= 1
        jnc     .A2         ; g1の最上位が1だったなら
        ld      g0,6,sp     ;  g0にソースをロード
.A2     shll    g2,#1       ; g2 <<= 1
        jnc     .A3         ; キャリーがあったら
        add     g1,#1       ;  g1 += 1
.A3     add     g2,g0       ; g2 += g0
        jnc     .A4         ; キャリーがあったら
        add     g1,#1       ;  g1 += 1
.A4     sub     g3,#1       ; 16回繰り返したか
        jnz     .A1
        ld      g0,4,sp     ; ディスティネーション(アドレス)
        st      g1,0,g0     ; ディスティネーション上位ワード
        st      g2,2,g0     ; ディスティネーション下位ワード
        pop     g3
        ret