// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGESESSIONCACONFIG_H
#define WIFIUSAGESESSIONCACONFIG_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface WiFiUsageSessionCAConfig : NSObject

@property (readonly, nonatomic) NSDate *ca_lastSubmission; // ivar: _ca_lastSubmission
@property (readonly, nonatomic) CGFloat ca_minTimeIntervalBetweenSubmissions; // ivar: _ca_minTimeIntervalBetweenSubmissions
@property (readonly, nonatomic) NSUInteger ca_sampling; // ivar: _ca_sampling


-(BOOL)canSubmit;
-(id)description;
-(id)initWithSampling:(NSUInteger)arg0 minInterval:(CGFloat)arg1 ;
-(void)countSubmission;


@end


#endif