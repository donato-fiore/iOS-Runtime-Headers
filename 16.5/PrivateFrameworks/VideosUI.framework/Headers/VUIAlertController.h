// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIALERTCONTROLLER_H
#define VUIALERTCONTROLLER_H

@class UIAlertController, NSMutableArray;



@interface VUIAlertController : UIAlertController

@property (retain, nonatomic) NSMutableArray *alertActions; // ivar: _alertActions


+(id)vui_alertControllerWithTitle:(id)arg0 message:(id)arg1 preferredStyle:(NSInteger)arg2 ;
-(void)vui_addAction:(id)arg0 ;
-(void)vui_addAction:(id)arg0 isPreferred:(BOOL)arg1 ;
-(void)vui_dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)vui_presentAlertFromPresentingController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif