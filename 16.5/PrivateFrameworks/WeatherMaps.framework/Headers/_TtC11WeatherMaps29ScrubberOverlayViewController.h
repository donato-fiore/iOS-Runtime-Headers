// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS29SCRUBBEROVERLAYVIEWCONTROLLER_H
#define _TTC11WEATHERMAPS29SCRUBBEROVERLAYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11WeatherMaps29ScrubberOverlayViewController : UIViewController {
    ? delegate;
    ? store;
    ? scrubberView;
    ? scrubberForecastHintView;
    ? storeObserver;
    ? hideTimer;
    ? hideDelay;
    ? horizontalPadding;
    ? verticalSpacingBeneathForecastHint;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif