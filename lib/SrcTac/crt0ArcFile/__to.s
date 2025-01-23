;; アドレスから整数へ変換
__aToI                          ; int _aToI(void[] a);
;; 整数からアドレスへ変換
__iToA                          ; void[] _iToA(int a);
;; アドレスからアドレスへ変換
__aToA                          ; void[] _aToA(void[] a);
        ld      g0,2,sp
        ret