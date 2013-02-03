/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIViewController, UITransitionView, UIWindow;

@interface UIWindowController : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } _beginOriginForToView;
    NSInteger _currentTransition;
    SEL _didEndSelector;
    } _endOriginForToView;
    UIViewController *_fromViewController;
    BOOL _presenting;
    id _target;
    UIViewController *_toViewController;
    UITransitionView *_transitionView;
    UIWindow *_window;
}

@property(readonly) UITransitionView *transitionView;
@property UIWindow *window;
@property BOOL presenting;

+ (id)windowControllerForWindow:(id)arg1;
+ (void)windowWillBeDeallocated:(id)arg1;

- (struct CGPoint { float x1; float x2; })_adjustOrigin:(struct CGPoint { float x1; float x2; })arg1 givenOtherOrigin:(struct CGPoint { float x1; float x2; })arg2 forTransition:(NSInteger)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForViewController:(id)arg1 transition:(NSInteger)arg2 orientation:(NSInteger)arg3 fullScreenLayout:(BOOL)arg4 inWindow:(id)arg5;
- (struct CGSize { float x1; float x2; })_flipSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_originForViewController:(id)arg1 orientation:(NSInteger)arg2 fullScreenLayout:(BOOL)arg3 inWindow:(id)arg4;
- (void)_prepareKeyboardForTransition:(NSInteger)arg1 fromView:(id)arg2;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)dealloc;
- (double)durationForTransition:(NSInteger)arg1;
- (BOOL)presenting;
- (void)setPresenting:(BOOL)arg1;
- (void)setWindow:(id)arg1;
- (void)transition:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(NSInteger)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(NSInteger)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(NSInteger)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (id)transitionView;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionViewDidStart:(id)arg1;
- (id)window;

@end