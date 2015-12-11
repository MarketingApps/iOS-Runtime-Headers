/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingStrokeView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _aggregateInvalidRect;
    struct CGContext { } *_bitmapContext;
    UIKBHandwritingView *_keyView;
    float _scaleFactor;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } aggregateInvalidRect;
@property (nonatomic, readonly) struct CGContext { }*bitmapContext;
@property (nonatomic, retain) UIKBHandwritingView *keyView;
@property (nonatomic, readonly) float scaleFactor;

- (void)addHandwritingPoint:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1;
- (void)addTrapezoidFromFirstPoint:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1 secondPoint:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })aggregateInvalidRect;
- (struct CGContext { }*)bitmapContext;
- (void)clearRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToBitmapCoordinates:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToViewCoordinates:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)createBitmapIfNeeded;
- (void)dealloc;
- (void)displayAggregateInvalidRect;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })handwritingPointToRect:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1;
- (id)keyView;
- (void)redrawStrokesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)scaleFactor;
- (void)setKeyView:(id)arg1;
- (void)updateInkColor;

@end