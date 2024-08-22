// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIRESPONDER_OVERRIDE_H
#define _UIRESPONDER_OVERRIDE_H


#import <Foundation/Foundation.h>

#import "UIResponder.h"

@interface _UIResponder_Override : NSObject

@property (readonly, weak, nonatomic) UIResponder *owner; // ivar: _owner
@property (readonly, weak, nonatomic) UIResponder *target; // ivar: _target
@property (readonly, nonatomic) NSInteger types; // ivar: _types


+(id)overrideForResponder:(id)arg0 withTarget:(id)arg1 forType:(NSInteger)arg2 ;
-(id)description;
-(void)dealloc;


@end


#endif