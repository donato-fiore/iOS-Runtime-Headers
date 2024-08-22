// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPOPOVERPRESENTATIONMETRICS_H
#define _UIPOPOVERPRESENTATIONMETRICS_H


#import <Foundation/Foundation.h>


@interface _UIPopoverPresentationMetrics : NSObject

@property (readonly, nonatomic) CGSize defaultPreferredLargeContentSize;
@property (readonly, nonatomic) CGSize defaultPreferredSmallContentSize;
@property (nonatomic) BOOL shouldHideArrow; // ivar: _shouldHideArrow
@property (nonatomic) BOOL shouldUseVisualStyleAnimationControllerForDismissal; // ivar: _shouldUseVisualStyleAnimationControllerForDismissal
@property (nonatomic) BOOL shouldUseVisualStyleAnimationControllerForPresentation; // ivar: _shouldUseVisualStyleAnimationControllerForPresentation


+(id)defaultPopoverMetrics;


@end


#endif