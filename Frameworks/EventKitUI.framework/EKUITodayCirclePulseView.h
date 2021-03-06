/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUITodayCirclePulseView : UIView <_UIBasicAnimationFactory> {
    NSDictionary * _attributes;
    TodayCirclePulseBackground * _background;
    UIView * _backgroundContainer;
    float  _circleDiameter;
    BOOL  _circleShouldFillFrame;
    BOOL  _dontApplyCenteringOffset;
    UILabel * _label;
    NSDictionary * _overlayAttributes;
    UILabel * _overlayLabel;
    float  _textFrameWidthAdjustment;
    struct CGPoint { 
        float x; 
        float y; 
    }  _textOffsetFromCircle;
    float  _textYOffset;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic) float circleDiameter;
@property (nonatomic) BOOL circleShouldFillFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dontApplyCenteringOffset;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDictionary *overlayAttributes;
@property (nonatomic, retain) UIFont *overlayFont;
@property (nonatomic, copy) NSString *overlayString;
@property (nonatomic, copy) NSString *string;
@property (readonly) Class superclass;
@property (nonatomic) float textFrameWidthAdjustment;
@property (nonatomic) struct CGPoint { float x1; float x2; } textOffsetFromCircle;
@property (nonatomic) float textYOffset;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_layoutSubviews;
- (id)_overlayLabel;
- (void)_updateLabelAttributedString;
- (void)_updateOverlayLabelAttributedString;
- (id)attributes;
- (float)circleDiameter;
- (BOOL)circleShouldFillFrame;
- (BOOL)dontApplyCenteringOffset;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)overlayAttributes;
- (id)overlayFont;
- (id)overlayString;
- (void)pulse:(id /* block */)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCircleDiameter:(float)arg1;
- (void)setCircleShouldFillFrame:(BOOL)arg1;
- (void)setDontApplyCenteringOffset:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setOverlayAttributes:(id)arg1;
- (void)setOverlayFont:(id)arg1;
- (void)setOverlayString:(id)arg1;
- (void)setString:(id)arg1;
- (void)setTextFrameWidthAdjustment:(float)arg1;
- (void)setTextOffsetFromCircle:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTextYOffset:(float)arg1;
- (id)string;
- (float)textFrameWidthAdjustment;
- (struct CGPoint { float x1; float x2; })textOffsetFromCircle;
- (float)textYOffset;

@end
