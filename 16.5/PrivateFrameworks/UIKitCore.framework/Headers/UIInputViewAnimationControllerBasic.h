// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTVIEWANIMATIONCONTROLLERBASIC_H
#define UIINPUTVIEWANIMATIONCONTROLLERBASIC_H

@class NSString;
@protocol UIInputViewAnimationController;

#import <Foundation/Foundation.h>


@interface UIInputViewAnimationControllerBasic : NSObject <UIInputViewAnimationController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)prepareAnimationWithHost:(id)arg0 startPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(void)completeAnimationWithHost:(id)arg0 context:(id)arg1 ;
-(void)performAnimationWithHost:(id)arg0 context:(id)arg1 ;


@end


#endif