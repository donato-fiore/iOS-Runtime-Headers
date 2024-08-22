// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREVERSECONTEXTUALACTION_H
#define WFREVERSECONTEXTUALACTION_H

@class NSData;


#import "WFContextualAction.h"

@interface WFReverseContextualAction : WFContextualAction

@property (readonly, nonatomic) WFContextualAction *actionToReverse; // ivar: _actionToReverse
@property (readonly, copy, nonatomic) NSData *reversalState; // ivar: _reversalState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithActionToReverse:(id)arg0 reversalState:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif