// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI17PINNINGHEADERVIEW_H
#define _TTC8VIDEOSUI17PINNINGHEADERVIEW_H



#import "VUIBaseView.h"

@interface _TtC8VideosUI17PinningHeaderView : VUIBaseView {
    ? statusBarView;
    ? collapsingView;
    ? pinnedView;
    ? animator;
    ? trackingScrollView;
    ? scrollObserver;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;


@end


#endif