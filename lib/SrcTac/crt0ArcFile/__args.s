;; 呼び出した C-- 関数の第1引数のアドレスを返す
__args                          ; void[] _args();
        ld      g0,fp
        add     g0,#4
        ret