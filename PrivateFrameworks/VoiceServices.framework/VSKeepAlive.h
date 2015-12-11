/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSKeepAlive : NSObject {
    BOOL _active;
    int _audioType;
    BOOL _keepAudioSessionActive;
    NSXPCConnection *_serverConnection;
}

@property (nonatomic) BOOL active;
@property (nonatomic) int audioType;
@property (nonatomic) BOOL keepAudioSessionActive;

- (void).cxx_destruct;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;
- (id)_serverConnection;
- (BOOL)active;
- (int)audioType;
- (void)dealloc;
- (BOOL)keepAudioSessionActive;
- (void)setActive:(BOOL)arg1;
- (void)setAudioType:(int)arg1;
- (void)setKeepAudioSessionActive:(BOOL)arg1;

@end