// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFORCEDORIENTATIONTRANSACTIONTOKEN_H
#define _UIFORCEDORIENTATIONTRANSACTIONTOKEN_H

@class NSString;
@protocol BSDebugDescriptionProviding, _UIOrientationDebugDescriptionProviding, _UIForcedOrientationTransactionHandler;

#import <Foundation/Foundation.h>


@interface _UIForcedOrientationTransactionToken : NSObject <BSDebugDescriptionProviding, _UIOrientationDebugDescriptionProviding>



@property (copy, nonatomic) id *commitCompletionBlock; // ivar: _commitCompletionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger originalInterfaceOrientation; // ivar: _originalInterfaceOrientation
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<_UIForcedOrientationTransactionHandler> *transactionHandler; // ivar: _transactionHandler
@property (readonly, nonatomic) NSString *transactionReason; // ivar: _transactionReason


-(id)_orientationDebugDescription;
-(id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)_orientationDebugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithOriginalOrientation:(NSInteger)arg0 handler:(id)arg1 reason:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)cancel;
-(void)commitAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)didCommitOrientation;


@end


#endif