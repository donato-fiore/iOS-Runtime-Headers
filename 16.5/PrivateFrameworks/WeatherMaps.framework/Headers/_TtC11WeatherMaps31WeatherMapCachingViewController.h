// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS31WEATHERMAPCACHINGVIEWCONTROLLER_H
#define _TTC11WEATHERMAPS31WEATHERMAPCACHINGVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11WeatherMaps31WeatherMapCachingViewController : UIViewController {
    ? cacheIdentifier;
    ? debugIdentifier;
    ? isPreferredForCachedInstance;
    ? makeMapViewController;
    ? connectToMapViewController;
    ? map;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif