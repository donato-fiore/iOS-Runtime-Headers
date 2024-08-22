// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS24MAPSCRUBBEROVERLAYUIVIEW_H
#define _TTC11WEATHERMAPS24MAPSCRUBBEROVERLAYUIVIEW_H

@class UIView;



@interface _TtC11WeatherMaps24MapScrubberOverlayUIView : UIView {
    ? titleDateContainer;
    ? titleLabel;
    ? dateLabel;
    ? playPauseButton;
    ? bar;
    ? affordanceActionIcon;
    ? titleButton;
    ? regularBreakpointWidth;
    ? wideBreakpointWidth;
    ? verticalPadding;
    ? horizontalPaddingPlay;
    ? horizontalPaddingPlayToTitle;
    ? horizontalPadding;
    ? minimumHeight;
    ? affordanceIconSpacing;
    ? affordanceTextSpacing;
    ? barVerticalSpacing;
    ? buttonTouchInsets;
    ? calendar;
    ? scrubberLayoutStyle;
    ? delegate;
    ? menuWasOpened;
    ? representsIsPlaying;
    ? model;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)barTouched:(id)arg0 ;
-(void)barValueChanged:(id)arg0 ;
-(void)didReceiveMenuAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)playPauseTapped;


@end


#endif