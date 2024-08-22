// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCHEDULEEVENTDODGINGMODIFIEREVENTRESPONSE_H
#define SBSCHEDULEEVENTDODGINGMODIFIEREVENTRESPONSE_H

@class NSString;


#import "SBDodgingModifierEventResponse.h"

@interface SBScheduleEventDodgingModifierEventResponse : SBDodgingModifierEventResponse

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(NSUInteger)type;
-(id)description;
-(id)initWithName:(id)arg0 ;


@end


#endif