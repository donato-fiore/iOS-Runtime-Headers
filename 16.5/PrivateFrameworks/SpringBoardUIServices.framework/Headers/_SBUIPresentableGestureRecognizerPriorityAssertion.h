// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBUIPRESENTABLEGESTURERECOGNIZERPRIORITYASSERTION_H
#define _SBUIPRESENTABLEGESTURERECOGNIZERPRIORITYASSERTION_H

@class NSString;
@protocol SBUIPresentableGestureRecognizerPriorityAssertion;

#import <Foundation/Foundation.h>


@interface _SBUIPresentableGestureRecognizerPriorityAssertion : NSObject <SBUIPresentableGestureRecognizerPriorityAssertion>

 {
    id *_invalidationHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)initWithReason:(id)arg0 invalidationHandler:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif