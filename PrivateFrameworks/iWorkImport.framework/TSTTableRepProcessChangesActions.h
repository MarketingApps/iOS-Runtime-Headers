/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableRepProcessChangesActions : NSObject {
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } _dirtyCellRange;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } _dirtyStrokeRange;
    BOOL _hideChromeContextMenuButton;
    BOOL _hideStepperHUD;
    BOOL _invalidateAllChrome;
    BOOL _invalidateAllChromeCaches;
    BOOL _invalidateColumnChrome;
    BOOL _invalidateKnobs;
    BOOL _invalidateRowChrome;
    BOOL _invalidateSelection;
    BOOL _invalidateTableName;
    BOOL _setNeedsDisplay;
    BOOL _syncReferenceHighlightState;
    BOOL _updateEditorRemainders;
}

@property (nonatomic) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dirtyCellRange;
@property (nonatomic) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dirtyStrokeRange;
@property (nonatomic) BOOL hideChromeContextMenuButton;
@property (nonatomic) BOOL hideStepperHUD;
@property (nonatomic) BOOL invalidateAllChrome;
@property (nonatomic) BOOL invalidateAllChromeCaches;
@property (nonatomic) BOOL invalidateColumnChrome;
@property (nonatomic) BOOL invalidateKnobs;
@property (nonatomic) BOOL invalidateRowChrome;
@property (nonatomic) BOOL invalidateSelection;
@property (nonatomic) BOOL invalidateTableName;
@property (nonatomic) BOOL setNeedsDisplay;
@property (nonatomic) BOOL syncReferenceHighlightState;
@property (nonatomic) BOOL updateEditorRemainders;

- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dirtyCellRange;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dirtyStrokeRange;
- (BOOL)hideChromeContextMenuButton;
- (BOOL)hideStepperHUD;
- (BOOL)invalidateAllChrome;
- (BOOL)invalidateAllChromeCaches;
- (BOOL)invalidateColumnChrome;
- (BOOL)invalidateKnobs;
- (BOOL)invalidateRowChrome;
- (BOOL)invalidateSelection;
- (BOOL)invalidateTableName;
- (void)setDirtyCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setDirtyStrokeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setHideChromeContextMenuButton:(BOOL)arg1;
- (void)setHideStepperHUD:(BOOL)arg1;
- (void)setInvalidateAllChrome:(BOOL)arg1;
- (void)setInvalidateAllChromeCaches:(BOOL)arg1;
- (void)setInvalidateColumnChrome:(BOOL)arg1;
- (void)setInvalidateKnobs:(BOOL)arg1;
- (void)setInvalidateRowChrome:(BOOL)arg1;
- (void)setInvalidateSelection:(BOOL)arg1;
- (void)setInvalidateTableName:(BOOL)arg1;
- (BOOL)setNeedsDisplay;
- (void)setSetNeedsDisplay:(BOOL)arg1;
- (void)setSyncReferenceHighlightState:(BOOL)arg1;
- (void)setUpdateEditorRemainders:(BOOL)arg1;
- (BOOL)syncReferenceHighlightState;
- (BOOL)updateEditorRemainders;

@end