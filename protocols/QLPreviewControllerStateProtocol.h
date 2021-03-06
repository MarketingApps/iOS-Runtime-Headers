/* Generated by RuntimeBrowser.
 */

@protocol QLPreviewControllerStateProtocol <NSObject>

@required

- (void)beginInteractiveTransition;
- (void)expandContentOfCurrentItem;
- (void)openURLIfAllowed:(NSURL *)arg1;
- (void)presentAlertControllerForScenario:(int)arg1;
- (void)previewCollectionPrefersWhitePointAdaptivityStyle:(int)arg1;
- (void)previewCollectionUpdatePreviewItem:(int)arg1;
- (void)setAccessoryViewVisible:(BOOL)arg1;
- (void)setCanChangeCurrentPage:(BOOL)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)setPrinter:(id <QLPrintingProtocol>)arg1;
- (void)setRotationEnabled:(BOOL)arg1;
- (void)setToolbarCanBeVisible:(BOOL)arg1;
- (void)updateKeyCommands;
- (void)updateOverlayButtons:(BOOL)arg1;
- (void)updatePreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)updatePreviewItemAtIndex:(unsigned int)arg1 updatedContentsURL:(NSURL *)arg2 sandboxExtension:(NSData *)arg3;

@end
