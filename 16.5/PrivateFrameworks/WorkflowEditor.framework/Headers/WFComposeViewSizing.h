// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMPOSEVIEWSIZING_H
#define WFCOMPOSEVIEWSIZING_H


#import <Foundation/Foundation.h>


@interface WFComposeViewSizing : NSObject



+(CGFloat)constrainMaximumContentWidth:(CGFloat)arg0 toSize:(struct CGSize )arg1 traitCollection:(id)arg2 ;
+(CGFloat)moduleWidthForViewSize:(struct CGSize )arg0 maximumContentWidth:(CGFloat)arg1 maximumModuleWidth:(CGFloat)arg2 traitCollection:(id)arg3 safeAreaInsets:(struct UIEdgeInsets )arg4 ;
+(struct CGSize )drawerSizeFromParentSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 traitCollection:(id)arg2 ;
+(struct CGSize )sizeForRequestType:(NSUInteger)arg0 parentSize:(struct CGSize )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 traitCollection:(id)arg3 ;
+(struct CGSize )workflowViewSizeFromParentSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 traitCollection:(id)arg2 ;
+(struct UIEdgeInsets )moduleHorizontalInsetWithTraitCollection:(id)arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;


@end


#endif