// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTBINDER_H
#define _UICONTEXTBINDER_H

@class NSPointerArray, NSMutableOrderedSet, NSArray;
@protocol _UIContextBinderContextCreationPolicyHolding, _UIContextBinding;

#import <Foundation/Foundation.h>


@interface _UIContextBinder : NSObject {
    NSPointerArray *_enrolledBindables;
    NSPointerArray *_attachedBindables;
    NSMutableOrderedSet *_contexts;
}


@property (readonly, nonatomic) NSArray *attachedBindables;
@property (weak, nonatomic) NSObject<_UIContextBinderContextCreationPolicyHolding> *contextCreationPolicyHolder; // ivar: _contextCreationPolicyHolder
@property (nonatomic) NSInteger contextManagementPolicy; // ivar: _contextManagementPolicy
@property (readonly, nonatomic) NSArray *enrolledBindables;
@property (readonly, nonatomic) NSObject<_UIContextBinding> *substrate; // ivar: _substrate


+(id)createContextForBindable:(id)arg0 withSubstrate:(id)arg1 ;
-(BOOL)bindableEnrolled:(id)arg0 ;
-(BOOL)bindableIsTopmostAttached:(id)arg0 ;
-(BOOL)permitContextCreationForBindable:(id)arg0 ;
-(id)_attachedBindablePointersAsCopy:(BOOL)arg0 ;
-(id)_contextForBindable:(id)arg0 ;
-(id)_enrolledBindablePointersAsCopy:(BOOL)arg0 ;
-(id)initWithSubstrate:(id)arg0 ;
-(void)attachBindable:(id)arg0 ;
// -(void)createContextsWithTest:(id)arg0 creationAction:(unk)arg1  ;
-(void)detachBindable:(id)arg0 ;
-(void)enrollBindable:(id)arg0 ;
-(void)expellBindable:(id)arg0 ;
-(void)purgeContextsWithPurgeAction:(id)arg0 ;
// -(void)purgeContextsWithPurgeAction:(id)arg0 afterPurgeAction:(unk)arg1  ;
-(void)recreateContextForBindable:(id)arg0 ;
-(void)updateBindable:(id)arg0 ;
-(void)updateBindableOrderWithTest:(id)arg0 ;
// -(void)updateBindableOrderWithTest:(id)arg0 force:(unk)arg1  ;


@end


#endif