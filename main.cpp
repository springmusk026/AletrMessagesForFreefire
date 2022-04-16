
static void ShowPopupMessageByDepth(monoString *nick) {
    void (*_ShowDynamicPopupMessage)(void *players, monoString * nicks,int depth, float duration) = (void (*)(void *, monoString *, int,float))(getRealOffset(0xCB8880));
    void *ui = CurrentUIScene();
    if (ui != nullptr) {
        _ShowDynamicPopupMessage(ui, nick,1, 0.1f);
    }
}
static void ShowPopupMessageWithoutAutoHide(monoString *nick) {
    void (*_ShowDynamicPopupMessage)(void *players, monoString * nicks) = (void (*)(void *, monoString *))(getRealOffset(0xCD6DC4));
    void *ui = CurrentUIScene();
    if (ui != nullptr) {
        _ShowDynamicPopupMessage(ui, nick);
    }
}
static void ShowLowPopupMessage(monoString *nick) {
    void (*_ShowDynamicPopupMessage)(void *players, monoString * nicks, float duration) = (void (*)(void *, monoString *, float))(getRealOffset(0xCD6F00));
    void *ui = CurrentUIScene();
    if (ui != nullptr) {
        _ShowDynamicPopupMessage(ui, nick, 0.1f);
    }
}

static void ShowCreditBehaviorPopupMessage(monoString *nick) {
    void (*_ShowDynamicPopupMessage)(void *players, monoString * nicks) = (void (*)(void *, monoString *))(getRealOffset(0xCD7098));
    void *ui = CurrentUIScene();
    if (ui != nullptr) {
        _ShowDynamicPopupMessage(ui, nick);
    }
}
static void ShowPlayerAttributeUP(monoString *nick) {
    void (*_ShowDynamicPopupMessage)(void *players, monoString * nicks) = (void (*)(void *, monoString *))(getRealOffset(0xCF7C84));
    void *ui = CurrentUIScene();
    if (ui != nullptr) {
        _ShowDynamicPopupMessage(ui, nick);
    }
}
static void SetManualTips(monoString *nick) {
    void (*_ShowDynamicPopupMessage)(void *players, monoString * nicks) = (void (*)(void *, monoString *))(getRealOffset(0xCD6598));
    void *ui = CurrentUIScene();
    if (ui != nullptr) {
        _ShowDynamicPopupMessage(ui, nick);
    }
}
