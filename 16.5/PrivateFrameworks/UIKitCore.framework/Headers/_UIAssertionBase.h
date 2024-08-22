// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIASSERTIONBASE_H
#define _UIASSERTIONBASE_H

@class NSString;
@protocol _UIAssertion;

#import <Foundation/Foundation.h>

#import "_UIAssertionController.h"

@interface _UIAssertionBase : NSObject <_UIAssertion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL initialState; // ivar: _initialState
@property (readonly, nonatomic) BOOL invalidated; // ivar: _invalidated
@property (weak, nonatomic) _UIAssertionController *parentController; // ivar: _parentController
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) BOOL requiresExplicitInvalidation; // ivar: _requiresExplicitInvalidation
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)_initWithType:(NSUInteger)arg0 initialState:(BOOL)arg1 reason:(id)arg2 requiresExplicitInvalidation:(BOOL)arg3 ;
-(void)_invalidate;
-(void)dealloc;


@end


#endif