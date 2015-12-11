/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCenterCallModelState : TUCallModelState

@property (nonatomic, readonly, retain) TUFaceTimeAudioCallModel *faceTimeAudioCallModel;
@property (nonatomic, readonly, retain) TUProxyCallModel *proxyCallModel;
@property (nonatomic, readonly, retain) TUTelephonyCallModel *telephonyCallModel;

- (BOOL)_allCallsSupportCallModelType:(int)arg1;
- (BOOL)_anyCallsSupportCallModelType:(int)arg1;
- (BOOL)_displayedCallSupportsCallModelType:(int)arg1;
- (BOOL)_onlySupportsCallModelType:(int)arg1;
- (BOOL)_supportsCallModelType:(int)arg1;
- (BOOL)_updateAddCallAllowed;
- (BOOL)_updateAmbiguityState;
- (BOOL)_updateEndAndAnswerAllowed;
- (BOOL)_updateHardPauseAvailable;
- (BOOL)_updateHoldAllowed;
- (BOOL)_updateHoldAndAnswerAllowed;
- (BOOL)_updateMergeable;
- (BOOL)_updateSendToVoicemailAllowed;
- (BOOL)_updateSwappable;
- (BOOL)_updateTakingCallsPrivateAllowed;
- (void)dealloc;
- (id)faceTimeAudioCallModel;
- (void)handlePossibleStateChange;
- (id)init;
- (BOOL)isAmbiguous;
- (id)proxyCallModel;
- (id)telephonyCallModel;
- (void)telephonyCallModelDidChange:(id)arg1;
- (BOOL)updateInternalState;

@end