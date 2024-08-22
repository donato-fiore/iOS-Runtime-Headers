// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITOASTPRESENTATIONWINDOW_H
#define SKUITOASTPRESENTATIONWINDOW_H

@class UIApplicationRotationFollowingWindow;



@interface SKUIToastPresentationWindow : UIApplicationRotationFollowingWindow



-(BOOL)isInternalWindow;
-(id)_presentationViewController;
-(id)init;
-(void)presentAlertController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif