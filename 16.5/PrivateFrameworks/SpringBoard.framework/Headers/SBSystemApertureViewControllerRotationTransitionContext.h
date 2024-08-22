// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTUREVIEWCONTROLLERROTATIONTRANSITIONCONTEXT_H
#define SBSYSTEMAPERTUREVIEWCONTROLLERROTATIONTRANSITIONCONTEXT_H

@class UIViewControllerTransitionContext;



@interface SBSystemApertureViewControllerRotationTransitionContext : UIViewControllerTransitionContext {
    CGAffineTransform _targetTransform;
}




+(struct CGAffineTransform )transformForRotationToInterfaceOrientation:(NSInteger)arg0 ;
-(id)initWithTargetOrientation:(NSInteger)arg0 ;
-(struct CGAffineTransform )_affineTransform;


@end


#endif