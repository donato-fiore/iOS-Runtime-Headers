// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAUDIOTIMEERRORVALUE_H
#define TSAUDIOTIMEERRORVALUE_H


#import <Foundation/Foundation.h>


@interface TSAudioTimeErrorValue : NSObject

@property (readonly, nonatomic) CGFloat sampleTimestamp; // ivar: _sampleTimestamp
@property (readonly, nonatomic) CGFloat timeError; // ivar: _timeError


-(id)description;
-(id)initWithSampleTimestamp:(CGFloat)arg0 andTimeError:(CGFloat)arg1 ;


@end


#endif