// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCDURATIONFORMATTER_H
#define RCDURATIONFORMATTER_H

@class NSMutableDictionary, NSNumberFormatter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RCDurationFormatter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_styleToLocalizedDateTimeFormatTemplate;
    NSNumberFormatter *_defaultFormatter;
    NSNumberFormatter *_nonPaddedHourFormatter;
}




+(id)_dateTimeFormatTemplateForStyle:(NSInteger)arg0 ;
+(id)_localizedDateTimeFormatTemplateForStyle:(NSInteger)arg0 ;
+(id)sharedFormatter;
-(id)_onQueueStringFromDuration:(CGFloat)arg0 byReplacingDigitsWithDigit:(NSInteger)arg1 hideComponentOptions:(NSInteger)arg2 style:(NSInteger)arg3 ;
-(id)init;
-(id)localizedStringFromDurationStrings:(struct RCDurationStrings )arg0 style:(NSInteger)arg1 ;
-(id)stringFromDuration:(CGFloat)arg0 hideComponentOptions:(NSInteger)arg1 style:(NSInteger)arg2 ;
-(id)stringFromDuration:(CGFloat)arg0 replacingDigitsWithDigit:(NSUInteger)arg1 style:(NSInteger)arg2 ;
-(struct RCDurationIntegers )durationIntegersFromDuration:(CGFloat)arg0 byReplacingDigitsWithDigit:(NSInteger)arg1 style:(NSInteger)arg2 ;
-(struct RCDurationStrings )durationStringsFromDurationIntegers:(struct RCDurationIntegers )arg0 hideComponentOptions:(NSInteger)arg1 style:(NSInteger)arg2 ;
-(void)_onQueueReloadLocalizedFormatStrings;
-(void)_replaceComponentPlaceholderForType:(NSUInteger)arg0 withString:(id)arg1 inLocalizedDataFormatTemplate:(id)arg2 ;
-(void)reloadLocalizedFormatStrings;


@end


#endif