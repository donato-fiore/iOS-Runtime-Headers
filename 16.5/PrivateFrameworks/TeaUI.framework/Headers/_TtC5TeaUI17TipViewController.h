// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC5TEAUI17TIPVIEWCONTROLLER_H
#define _TTC5TEAUI17TIPVIEWCONTROLLER_H

@class AMSUIBubbleTipViewController;



@interface _TtC5TeaUI17TipViewController : AMSUIBubbleTipViewController {
    ? viewModel;
    ? eventHandler;
    ? styler;
    ? requestFactory;
    ? tipPresentationConfig;
    ? startDate;
}


@property (nonatomic, readonly) BOOL canBecomeFirstResponder;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 account:(id)arg2 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif