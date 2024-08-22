// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCMODALNAVIGATIONCONTROLLER_H
#define NCMODALNAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol NCModalNavigationControllerDelegate;



@interface NCModalNavigationController : UINavigationController

@property (weak, nonatomic) NSObject<NCModalNavigationControllerDelegate> *presenterDelegate; // ivar: _presenterDelegate


-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif