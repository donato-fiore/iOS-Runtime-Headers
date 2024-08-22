// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPARAMETERHOSTINGVIEW_H
#define WFPARAMETERHOSTINGVIEW_H

@class UIView;



@interface WFParameterHostingView : UIView {
    ? hostingController;
    ? initialState;
    ? updatedState;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)attachToParentViewController:(id)arg0 ;
-(void)configureConfigurationUIViewWithParameter:(id)arg0 state:(id)arg1 processing:(BOOL)arg2 shouldFocus:(BOOL)arg3 variableProvider:(id)arg4 widgetFamily:(NSInteger)arg5 fillProvider:(id)arg6 overridingCellBackgroundColor:(id)arg7 updateBlock:(id)arg8 ;
-(void)configureViewWithParameter:(id)arg0 state:(id)arg1 processing:(BOOL)arg2 shouldFocus:(BOOL)arg3 variableProvider:(id)arg4 updateBlock:(id)arg5 ;
-(void)detachFromParentViewController;


@end


#endif