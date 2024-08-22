// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCMATERIALDISPLAYINGCAPTUREONLYVIEWCONTROLLER_H
#define NCMATERIALDISPLAYINGCAPTUREONLYVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary;



@interface NCMaterialDisplayingCaptureOnlyViewController : UIViewController {
    NSMutableDictionary *_supplementaryMaterialsAndUsageCounts;
}




-(BOOL)_canShowWhileLocked;
-(BOOL)_supportsCaptureForMaterialDisplaying:(id)arg0 ;
-(id)init;
-(void)_registerMaterialDisplaying:(BOOL)arg0 forDisplaying:(id)arg1 persistent:(BOOL)arg2 ;
-(void)loadView;
-(void)registerMaterialDisplaying:(id)arg0 persistent:(BOOL)arg1 ;
-(void)unregisterMaterialDisplaying:(id)arg0 ;


@end


#endif