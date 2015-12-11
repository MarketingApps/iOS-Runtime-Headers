/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceHID : NSObject {
    AVExternalDeviceHIDInternal *_externalDeviceHID;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic) int inputMode;
@property (nonatomic, readonly) NSString *screenID;

- (id)UUID;
- (id)_externalDevice;
- (id)_figEndpointHIDInputMode;
- (void)dealloc;
- (void)finalize;
- (id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2;
- (int)inputMode;
- (id)screenID;
- (void)setInputMode:(int)arg1;

@end