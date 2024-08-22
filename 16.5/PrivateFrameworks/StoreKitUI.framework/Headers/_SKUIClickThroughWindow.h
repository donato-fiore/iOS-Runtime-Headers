// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SKUICLICKTHROUGHWINDOW_H
#define _SKUICLICKTHROUGHWINDOW_H

@class UIWindow, UIView;



@interface _SKUIClickThroughWindow : UIWindow

@property (retain, nonatomic) UIView *interactionView; // ivar: _interactionView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif