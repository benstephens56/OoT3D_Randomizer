#ifndef _CUSTOM_MODELS_H_
#define _CUSTOM_MODELS_H_

void CustomModel_EditLinkToCustomTunic(void* linkCMB);
void CustomModel_EditChildLinkToCustomTunic(void* linkCMB);
void CustomModel_EditHeartContainerToDoubleDefense(void* heartContainerCMB);
void CustomModel_ApplyColorEditsToSmallKey(void* smallKeyCMB, s32 keyType);
void CustomModel_EditTitleScreenLogo(void* titleScreenZAR);
void CustomModel_SetOcarinaToRGBA565(void* fairyOcarinaCMB);
void CustomModel_Update(void);

#define OBJECT_CUSTOM_DOUBLE_DEFENSE 4
#define OBJECT_CUSTOM_CHILD_SONGS 5
#define OBJECT_CUSTOM_ADULT_SONGS 16
#define OBJECT_CUSTOM_SMALL_KEY_FOREST 17
#define OBJECT_CUSTOM_SMALL_KEY_FIRE 58
#define OBJECT_CUSTOM_SMALL_KEY_WATER 120
#define OBJECT_CUSTOM_SMALL_KEY_SHADOW 121
#define OBJECT_CUSTOM_SMALL_KEY_BOTW 122
#define OBJECT_CUSTOM_SMALL_KEY_SPIRIT 123
#define OBJECT_CUSTOM_SMALL_KEY_FORTRESS 125
#define OBJECT_CUSTOM_SMALL_KEY_GTG 126
#define OBJECT_CUSTOM_SMALL_KEY_GANON 127
#define OBJECT_CUSTOM_GENERAL_ASSETS 182

#define GID_CUSTOM_DOUBLE_DEFENSE 4
#define GID_CUSTOM_CHILD_SONGS 5
#define GID_CUSTOM_ADULT_SONGS 6
#define GID_CUSTOM_SMALL_KEYS 7

typedef enum {
    TEXANIM_COPY_NINTENDO,
    TEXANIM_LINK_BODY,
    TEXANIM_TITLE_LOGO_US,
    TEXANIM_ADULT_SONG,
    TEXANIM_CHILD_SONG,
    TEXANIM_CHILD_LINK_BODY
} CustomGeneralAssetsTexAnims;

typedef enum {
    TEXANIMFRAME_ZELDAS_LULLABY,
    TEXANIMFRAME_EPONAS_SONG,
    TEXANIMFRAME_SARIAS_SONG,
    TEXANIMFRAME_SONG_STORMS,
    TEXANIMFRAME_SUNS_SONG,
    TEXANIMFRAME_SONG_TIME
} ChildSongTexAnimFrames;

typedef enum {
    TEXANIMFRAME_BOLERO,
    TEXANIMFRAME_MINUET,
    TEXANIMFRAME_NOCTURNE,
    TEXANIMFRAME_PRELUDE,
    TEXANIMFRAME_REQUIEM,
    TEXANIMFRAME_SERENADE
} AdultSongTexAnimFrames;

#endif //_CUSTOM_MODELS_H_
