// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FILTERACTIONS_H
#define FILTERACTIONS_H


#import <Foundation/Foundation.h>

#import "Filter.h"

@interface FilterActions : NSObject

@property (readonly, nonatomic) NSInteger delayValue; // ivar: _delayValue
@property (readonly, nonatomic) Filter *finalFilter; // ivar: _finalFilter
@property (readonly, nonatomic) Filter *initialFilter; // ivar: _initialFilter
@property (nonatomic) unsigned int triggerSymptomId; // ivar: _triggerSymptomId


+(id)initForSymptom:(unsigned int)arg0 trigger:(unsigned int)arg1 triggering:(id)arg2 finally:(id)arg3 after:(id)arg4 ;
-(id)description;
-(void)initForSymptom:(unsigned int)arg0 trigger:(unsigned int)arg1 triggering:(id)arg2 finally:(id)arg3 after:(id)arg4 ;


@end


#endif