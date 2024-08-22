// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINTERFACEACTIONGROUPHEADERSCROLLVIEW_H
#define _UIINTERFACEACTIONGROUPHEADERSCROLLVIEW_H

@class UIAlertControllerShadowedScrollView, NSArray;


#import "UIView.h"

@interface _UIInterfaceActionGroupHeaderScrollView : UIAlertControllerShadowedScrollView {
    NSArray *_constraints;
}


@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView


-(CGFloat)_contentFitCanScrollThreshold;
-(id)initWithContentView:(id)arg0 ;
-(void)accessoryInsetsDidChange:(struct UIEdgeInsets )arg0 ;
-(void)updateConstraints;


@end


#endif