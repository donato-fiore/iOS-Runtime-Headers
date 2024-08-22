// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI15MULTIPLAYERVIEW_H
#define _TTC8VIDEOSUI15MULTIPLAYERVIEW_H

@class UIView;



@interface _TtC8VideosUI15MultiPlayerView : UIView {
    ? playerLayout;
    ? _mode;
    ? cancellables;
    ? delegate;
    ? didSelectPlayerViewController;
    ? didPinchPlayerViewController;
    ? distribution;
    ? layoutEngine;
    ? _focusedPlayerViewController;
    ? animatingViews;
    ? patternGenerator;
    ? containerViews;
    ? shouldMaximizeScreenUsage;
    ? initialPinchFrame;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)viewPinchedWithGesture:(id)arg0 ;


@end


#endif