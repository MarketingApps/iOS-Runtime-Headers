/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWHDRNode : BWNode <BWBracketSettingsProvider> {
    BOOL  _alwaysRequestsPreBracketedEV0;
    int  _bracketCount;
    int  _clientPID;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    unsigned int  _emittedFrameOrErrorCount;
    NSArray * _exposureValues;
    struct opaqueCMSampleBuffer {} * _pendingBracketBuffers;
    BOOL  _preBracketedFrameExpected;
    BOOL  _preBracketedFrameReceived;
    NSMutableArray * _receivedNodeErrors;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSDictionary * _sensorIDDictionary;
    FigCapturePixelConverter * _stereoFusionPixelConverter;
    BOOL  _supportsStereoFusionCaptures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2;
- (void)_emitNodeErrorToReportFailedOutputFrame;
- (void)_emitNodeErrorsIfNecessary;
- (void)_hdrProcessorOutputReady:(long)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)_initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(int (*)arg3;
- (BOOL)_receivedExpectedNumberOfInputFramesOrErrors;
- (long)_setupSampleBufferProcessor;
- (BOOL)alwaysRequestsPreBracketedEV0;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg2 stillImageSettings:(id)arg3;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1;
- (void)setSupportsStereoFusionCaptures:(BOOL)arg1;
- (BOOL)supportsStereoFusionCaptures;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1;

@end
