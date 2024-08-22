// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS12CONTROLSVIEW_H
#define _TTC11WEATHERMAPS12CONTROLSVIEW_H

@class UIView, NSArray;



@interface _TtC11WeatherMaps12ControlsView : UIView {
    ? buttonGroups;
    ? scaleModel;
    ? mapViewForZoomControl;
    ? menuDelegate;
    ? actionDelegate;
    ? configuration;
    ? buttonGroupViews;
    ? scaleView;
    ? zoomControl;
    ? backgroundEffectManagerBlur;
    ? backgroundEffectManagerUltraThin;
}


@property (nonatomic, copy) NSArray *accessibilityElements;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif