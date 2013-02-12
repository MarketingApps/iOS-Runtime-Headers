/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFTimeZone : NSTimeZone {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)abbreviationForDate:(id)arg1;
- (id)data;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (NSUInteger)hash;
- (id)init;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithName:(id)arg1;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedName:(NSInteger)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (oneway void)release;
- (id)retain;
- (NSUInteger)retainCount;
- (NSInteger)secondsFromGMTForDate:(id)arg1;

@end