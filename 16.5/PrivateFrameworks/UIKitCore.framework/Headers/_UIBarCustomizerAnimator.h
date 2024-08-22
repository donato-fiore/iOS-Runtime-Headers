// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBARCUSTOMIZERANIMATOR_H
#define _UIBARCUSTOMIZERANIMATOR_H

@class NSMutableArray, NSString;
@protocol _UIBarCustomizerAnimating;

#import <Foundation/Foundation.h>


@interface _UIBarCustomizerAnimator : NSObject <_UIBarCustomizerAnimating>



@property (retain, nonatomic) NSMutableArray *animations; // ivar: _animations
@property (retain, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)performAllAnimations;
-(void)performAllCompletionsWithSession:(id)arg0 ;


@end


#endif