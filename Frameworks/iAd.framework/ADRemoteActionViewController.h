/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADRemoteActionViewController : _UIRemoteViewController {
    BOOL  _hasBeenDismissed;
    unsigned int  _remoteSupportedInterfaceOrientations;
    NSString * _vendedClass;
}

@property (nonatomic) BOOL hasBeenDismissed;
@property (nonatomic) unsigned int remoteSupportedInterfaceOrientations;
@property (nonatomic, copy) NSString *vendedClass;

+ (id)serviceViewControllerInterface;

- (BOOL)hasBeenDismissed;
- (unsigned int)remoteSupportedInterfaceOrientations;
- (void)setHasBeenDismissed:(BOOL)arg1;
- (void)setRemoteSupportedInterfaceOrientations:(unsigned int)arg1;
- (void)setVendedClass:(id)arg1;
- (void)updateInterfaceOrientationIfNeeded;
- (id)vendedClass;

@end