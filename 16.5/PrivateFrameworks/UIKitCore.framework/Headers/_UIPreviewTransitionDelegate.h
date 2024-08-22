// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPREVIEWTRANSITIONDELEGATE_H
#define _UIPREVIEWTRANSITIONDELEGATE_H

@class NSString;
@protocol UIForceTransitioningDelegate;

#import <Foundation/Foundation.h>

#import "_UIStatesFeedbackGenerator.h"
#import "UIInteractionProgress.h"

@interface _UIPreviewTransitionDelegate : NSObject <UIForceTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation; // ivar: interactionProgressForPresentation
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;


@end


#endif