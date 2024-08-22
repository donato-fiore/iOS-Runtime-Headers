// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS22WEATHERMAPSNAPSHOTVIEW_H
#define _TTC11WEATHERMAPS22WEATHERMAPSNAPSHOTVIEW_H

@class UIView;



@interface _TtC11WeatherMaps22WeatherMapSnapshotView : UIView {
    ? annotationViewModelFactory;
    ? mapLocationAccessibilityModelManager;
    ? overlaySonifier;
    ? snapshotManager;
    ? $__lazy_storage_$_showDebugConsole;
    ? status;
    ? snapshotDisplayView;
    ? borderLayer;
    ? annotationView;
    ? annotationViewFractionalCenter;
    ? debugLabel;
    ? errorLabelEffect;
    ? errorEffectView;
    ? errorLabel;
    ? errorPlatterView;
    ? loadingIndicator;
    ? options;
    ? isTransitioningToSnapshotView;
}


@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didTransitionToSnapshotMap:(id)arg0 ;
-(void)layoutSubviews;
-(void)willTransitionToSnapshotMap:(id)arg0 ;


@end


#endif