/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {
    struct { 
        int type; 
        unsigned int unitValue; 
        unsigned int unitCount; 
        unsigned int residualValue; 
    }  _allowance;
    struct { 
        int type; 
        unsigned int unitValue; 
        unsigned int unitCount; 
        unsigned int residualValue; 
    }  _allowanceConsumed;
    unsigned int  _baselineValue;
    unsigned int  _milestoneValue;
    NSObject<OS_dispatch_queue> * _queue;
    BSMachPortSendRight * _taskRight;
    BSTimer * _timer;
}

@property (nonatomic) struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; } allowance;
@property (nonatomic) int type;

+ (id)provisionWithAllowance:(struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
+ (id)provisionWithResourceType:(int)arg1 timeInterval:(double)arg2;

- (void)_beginMonitoring;
- (double)_getElapsedCPUTimeForTaskPort:(unsigned int)arg1;
- (void)_prepareForReuse;
- (unsigned int)_queue_calculateValueConsumed;
- (void)_queue_evaluateConsumption;
- (void)_queue_noteAllowanceExhausted;
- (void)_queue_stopMonitoring;
- (BOOL)_queue_updateConsumption;
- (void)_stopMonitoring;
- (void)_updateProgress;
- (struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; })allowance;
- (BOOL)allowanceRemaining:(out struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithAllowance:(struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (BOOL)isResourceProvision;
- (void)setAllowance:(struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (id)succinctDescriptionBuilder;
- (int)type;

@end