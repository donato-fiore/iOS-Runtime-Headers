// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFOVERRIDABLEDATEPROVIDER_H
#define SBFOVERRIDABLEDATEPROVIDER_H

@class NSMutableDictionary, NSDate, NSString;
@protocol SBFDateTimeOverrideObserver, SBFDateProviding;

#import <Foundation/Foundation.h>

#import "SBFDateTimeController.h"

@interface SBFOverridableDateProvider : NSObject <SBFDateTimeOverrideObserver, SBFDateProviding>

 {
    SBFDateTimeController *_dateTimeController;
    id<SBFDateProviding> *_underlyingProvider;
    NSMutableDictionary *_minuteHandlers;
    NSUInteger _nextToken;
    id *_underlyingToken;
    NSDate *_overrideDate;
    CGFloat _overrideDateOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)date;
-(id)init;
-(id)initWithDateProvider:(id)arg0 ;
-(id)observeMinuteUpdatesWithHandler:(id)arg0 ;
-(void)_fireHandlersForDate:(id)arg0 ;
-(void)_updateForOverrides;
-(void)_updateUnderlyingProvider;
-(void)controller:(id)arg0 didChangeOverrideDateFromDate:(id)arg1 ;
-(void)removeMinuteUpdateHandler:(id)arg0 ;


@end


#endif