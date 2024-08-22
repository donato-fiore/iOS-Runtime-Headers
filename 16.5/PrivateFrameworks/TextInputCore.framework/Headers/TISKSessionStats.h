// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISKSESSIONSTATS_H
#define TISKSESSIONSTATS_H

@class NSDate, NSString, NSMutableDictionary, TIKeyboardLayout, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TISKEvent.h"

@interface TISKSessionStats : NSObject <NSSecureCoding>

 {
    TISKEvent *_startTimerEvent;
    CGFloat _currentTypingStart;
}


@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (nonatomic) BOOL isEmpty; // ivar: _isEmpty
@property (retain, nonatomic) NSMutableDictionary *keyedMetrics; // ivar: _keyedMetrics
@property (retain, nonatomic) TIKeyboardLayout *layout; // ivar: _layout
@property (retain, nonatomic) NSMutableArray *sessionIds; // ivar: _sessionIds
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTypingTimerHalted;
-(id)_roundUpToNearestHalfHour:(id)arg0 ;
-(id)_roundedSessionInterval;
-(id)counter:(id)arg0 ;
-(id)description:(BOOL)arg0 ;
-(id)generateDataForSR;
-(id)init:(id)arg0 endDate:(id)arg1 identifier:(id)arg2 version:(id)arg3 inputMode:(id)arg4 sessionIds:(id)arg5 layout:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)positionalMetric:(id)arg0 ;
-(id)samples:(id)arg0 ;
-(id)samples:(id)arg0 withPosition:(NSUInteger)arg1 ;
-(id)singleMetric:(id)arg0 ;
-(void)addSample:(id)arg0 forKey:(id)arg1 ;
-(void)addSample:(id)arg0 forKey:(id)arg1 withPosition:(NSUInteger)arg2 ;
-(void)addToCounterForRateMetric:(int)arg0 forKey:(id)arg1 ;
-(void)addToDurationForRateMetric:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)haltTypingTimer;
-(void)haltTypingTimerWithEvent:(id)arg0 ;
-(void)merge:(id)arg0 ;
-(void)setup;
-(void)startTypingTimerWithEvent:(id)arg0 ;


@end


#endif