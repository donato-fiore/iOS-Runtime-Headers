// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGELQMROLLINGWINDOW_H
#define WIFIUSAGELQMROLLINGWINDOW_H

@class NSDate, NSMutableSet, NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "WiFiUsageInterfaceCapabilities.h"

@interface WiFiUsageLQMRollingWindow : NSObject

@property (retain, nonatomic) WiFiUsageInterfaceCapabilities *capabilities; // ivar: _capabilities
@property (copy, nonatomic) NSDate *createdTimestamp; // ivar: _createdTimestamp
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSMutableSet *features; // ivar: _features
@property (retain, nonatomic) NSString *fgApp; // ivar: _fgApp
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *lastSampleBssid; // ivar: _lastSampleBssid
@property (readonly, nonatomic) NSMutableArray *preceedingTriggers; // ivar: _preceedingTriggers
@property (retain, nonatomic) NSMutableArray *samples; // ivar: _samples
@property (retain, nonatomic) NSMutableArray *triggerCriteriaFilterList; // ivar: _triggerCriteriaFilterList


+(id)averageIntegerValueForField:(id)arg0 ScaledByDuration:(BOOL)arg1 OnSamples:(id)arg2 ;
+(id)getValue:(id)arg0 ForField:(id)arg1 ScaledByDuration:(BOOL)arg2 ;
+(id)maximumIntegerValueForField:(id)arg0 ScaledByDuration:(BOOL)arg1 OnSamples:(id)arg2 ;
+(id)medianIntegerValueForField:(id)arg0 ScaledByDuration:(BOOL)arg1 OnSamples:(id)arg2 ;
+(id)minimumIntegerValueForField:(id)arg0 ScaledByDuration:(BOOL)arg1 OnSamples:(id)arg2 ;
+(id)modeValueForField:(id)arg0 ScaledByDuration:(BOOL)arg1 OnSamples:(id)arg2 ;
+(id)modesValueForField:(id)arg0 ScaledByDuration:(BOOL)arg1 OnSamples:(id)arg2 ;
+(id)sumIntegerValueForField:(id)arg0 ScaledByDuration:(BOOL)arg1 OnSamples:(id)arg2 ;
+(void)initialize;
+(void)updateConfig;
-(BOOL)checkCriteriaBSSIDWithSample:(id)arg0 ;
-(BOOL)configureDataTriggeredCriteria;
-(BOOL)endOngoingCriteria;
-(BOOL)hasChanged:(id)arg0 ;
-(id)evaluateCriteriaWithStopUponFirstMatch:(BOOL)arg0 ;
-(id)getTriggerCriteriaList;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)initWithInterfaceName:(id)arg0 andDuration:(CGFloat)arg1 ;
-(void)addSample:(id)arg0 ;
-(void)addSamples:(id)arg0 ;
-(void)addTrigger:(id)arg0 ;
-(void)cleanUpStashedMedians;
-(void)clearOngoingCriteriaDates;
-(void)setCurrentApplicationName:(id)arg0 withAttributes:(id)arg1 ;
-(void)updateWindow;


@end


#endif