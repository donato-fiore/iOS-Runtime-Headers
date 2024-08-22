// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI24MULTIPLAYERCONTAINERVIEW_H
#define _TTC8VIDEOSUI24MULTIPLAYERCONTAINERVIEW_H

@class UIView;



@interface _TtC8VideosUI24MultiPlayerContainerView : UIView {
    ? layout;
    ? $__lazy_storage_$_volumeIndicator;
    ? $__lazy_storage_$_dimmingView;
    ? isDimmed;
    ? snapshotView;
    ? onSelect;
    ? playerViewController;
    ? volumeObserver;
    ? statusObserver;
    ? isReadyForDisplayObserver;
    ? $__lazy_storage_$_singlePressGesture;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)singlePressWithGesture:(id)arg0 ;


@end


#endif