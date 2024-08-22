// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSYSTEMAPERTUREPROXIMITYTOUCHHANDLINGVIEW_H
#define _SBSYSTEMAPERTUREPROXIMITYTOUCHHANDLINGVIEW_H

@class UIView;
@protocol _SBSystemApertureProximityTouchHandlingViewDelegate;



@interface _SBSystemApertureProximityTouchHandlingView : UIView

@property (weak, nonatomic) NSObject<_SBSystemApertureProximityTouchHandlingViewDelegate> *delegate; // ivar: _delegate


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 hitTestsAsOpaque:(BOOL)arg1 ;


@end


#endif