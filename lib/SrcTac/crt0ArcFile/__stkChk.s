;; ヒープとスタックの間に 10Byte 以上の余裕があるかチェックする
__stkChk
        ld      g0,__alcAddr    ; G0 にヒープ領域の最後をロード
        add     g0,#10          ; 10Byte 分の余裕を持たせる
        cmp     g0,sp           ; G0 と G1 を比較 [ヒープの最後+10Byte] - [SP]
        jnc     .stkOverFlow    ; ユーザスタックがオーバーフローしている
        ret

; スタックがオーバーフローした場合、 _exit(EUSTK) を実行
.stkOverFlow
        ld      g0,#-25         ; パラメータ(EUSTK)
        push    g0              ;   をスタックに積む
        call    __exit          ; exit を呼ぶ