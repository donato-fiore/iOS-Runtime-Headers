// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISIMPLECONTAINERVIEWCONTROLLER_H
#define SKUISIMPLECONTAINERVIEWCONTROLLER_H

@class UIViewController;



@interface SKUISimpleContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)loadView;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;


@end


#endif