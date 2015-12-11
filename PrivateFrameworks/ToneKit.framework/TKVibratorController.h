/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibratorController : NSObject {
    TLAccessQueue *_accessQueue;
    NSUUID *_activePlayRequestsIdentifier;
    NSMutableSet *_pendingStopRequestIdentifiers;
}

@property (setter=_setAccessQueue:, retain) TLAccessQueue *_accessQueue;
@property (setter=_setActivePlayRequestIdentifier:, nonatomic, retain) NSUUID *_activePlayRequestsIdentifier;
@property (setter=_setPendingStopRequestIdentifiers:, nonatomic, retain) NSMutableSet *_pendingStopRequestIdentifiers;
@property (nonatomic, readonly) unsigned long _previewVibrationSystemSoundID;
@property (nonatomic, readonly) unsigned int vibratorState;

- (id)_accessQueue;
- (id)_activePlayRequestsIdentifier;
- (id)_pendingStopRequestIdentifiers;
- (unsigned long)_previewVibrationSystemSoundID;
- (void)_setAccessQueue:(id)arg1;
- (void)_setActivePlayRequestIdentifier:(id)arg1;
- (void)_setPendingStopRequestIdentifiers:(id)arg1;
- (void)_turnOffIfAppropriate;
- (void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1;
- (unsigned int)vibratorState;

@end