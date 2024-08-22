// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKOUTTYPE_H
#define WFWORKOUTTYPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFWorkoutType : NSObject

@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)allTypes;
-(id)initWithActivityType:(NSUInteger)arg0 ;


@end


#endif