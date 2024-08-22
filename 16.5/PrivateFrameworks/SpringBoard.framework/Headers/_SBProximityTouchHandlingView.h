// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBPROXIMITYTOUCHHANDLINGVIEW_H
#define _SBPROXIMITYTOUCHHANDLINGVIEW_H

@class UIView;
@protocol _SBProximityTouchHandlingDelegate;



@interface _SBProximityTouchHandlingView : UIView {
    id<_SBProximityTouchHandlingDelegate> *_delegate;
    CGFloat _statusBarHeight;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif