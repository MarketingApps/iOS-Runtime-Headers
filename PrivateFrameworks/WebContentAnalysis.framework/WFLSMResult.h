/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFLSMResult : NSObject {
    NSMutableArray *categoryJudgements;
    NSNumber *threshold;
}

@property (copy) NSNumber *threshold;

+ (id)LSMResultWithLSMResultRef:(struct __LSMResult { }*)arg1 threshold:(id)arg2;
+ (id)extractScoresFromLSMResults:(struct __LSMResult { }*)arg1;

- (long)bestMatchingCategory;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithLSMResultRef:(struct __LSMResult { }*)arg1 threshold:(id)arg2;
- (BOOL)isRestricted;
- (long)numberOfCategories;
- (float)scoreForCategory:(long)arg1;
- (void)setScore:(float)arg1 forCategory:(long)arg2;
- (void)setThreshold:(id)arg1;
- (id)threshold;

@end