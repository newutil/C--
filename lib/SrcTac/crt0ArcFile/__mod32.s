;; 32ビット剰余算ルーチン
__mod32                     ; int _mod32(int[] dst, int src)
        push    g3
        ld      g0,4,sp     ; ディスティネーション(アドレス)
        ld      g1,0,g0     ; ディスティネーション上位ワード
        ld      g2,2,g0     ; ディスティネーション下位ワード
        ld      g0,#17      ; (g1,g2)は被除数, g0はカウンタ
        ld      g3,#0       ; g3は商
.M1     cmp     g1,6,sp     ; 被除数から除数が引けるなら引く
        jc      .M2         ;
        sub     g1,6,sp     ;
        add     g3,#1       ; 引いた時は商の最下位ビットを1にする
.M2     sub     g0,#1       ; 17回繰り返したなら
        jz      .M4         ;  終了
        shll    g1,#1       ; 被除数を左にシフト
        shll    g2,#1       ;
        jnc     .M3         ;
        add     g1,#1       ;
.M3     shll    g3,#1       ; 商を左にシフト
        jmp     .M1
.M4     ld      g0,g1       ; 余りを返す
        pop     g3
        ret