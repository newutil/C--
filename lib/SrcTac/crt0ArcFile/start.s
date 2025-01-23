;プログラムの開始位置（このルーチンは必ずテキストの先頭に配置する)
.start
    call    __stdlibInit        ; stdlibの初期化ルーチンを呼ぶ
    call    __stdioInit         ; stdio の初期化ルーチンを呼ぶ
    ld      g0,4,sp             ; envp を
    push    g0                  ;   スタックに積む
    call    __environInit       ; environ の初期化ルーチンを呼ぶ
    pop     g0                  ; スタックを戻す
    call    _main               ; ユーザプログラムのメインに飛ぶ
    push    g0                  ; メインの戻り値をスタックに積む
    call    _exit               ; プログラムの最後まで到達した場合は終了する