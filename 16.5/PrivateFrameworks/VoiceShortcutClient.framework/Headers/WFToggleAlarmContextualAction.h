// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTOGGLEALARMCONTEXTUALACTION_H
#define WFTOGGLEALARMCONTEXTUALACTION_H

@class NSString;


#import "WFContextualAction.h"

@interface WFToggleAlarmContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSString *alarmIdentifier; // ivar: _alarmIdentifier
@property (readonly, copy, nonatomic) NSString *alarmName; // ivar: _alarmName
@property (readonly, nonatomic) NSUInteger operation; // ivar: _operation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showsUserInterfaceWhenRunning;
-(NSUInteger)hash;
-(id)initWithAlarmIdentifier:(id)arg0 alarmName:(id)arg1 operation:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif