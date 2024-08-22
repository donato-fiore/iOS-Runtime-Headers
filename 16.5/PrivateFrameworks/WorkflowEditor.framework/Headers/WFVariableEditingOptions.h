// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVARIABLEEDITINGOPTIONS_H
#define WFVARIABLEEDITINGOPTIONS_H


#import <Foundation/Foundation.h>

#import "WFVariableEditingAnchor.h"

@interface WFVariableEditingOptions : NSObject

@property (readonly, nonatomic) WFVariableEditingAnchor *anchor; // ivar: _anchor
@property (copy, nonatomic) id *onChange; // ivar: _onChange
@property (copy, nonatomic) id *onFinish; // ivar: _onFinish
@property (readonly, nonatomic) NSUInteger resultType; // ivar: _resultType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
// -(id)initWithAnchor:(id)arg0 resultType:(NSUInteger)arg1 onChange:(id)arg2 onFinish:(unk)arg3  ;
-(void)finishEditingReturningToKeyboard:(BOOL)arg0 ;
-(void)variableDidChange:(id)arg0 ;


@end


#endif