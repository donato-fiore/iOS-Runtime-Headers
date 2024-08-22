// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTUNMANAGEDCONTENTVIEWCONTROLLERVIEW_H
#define NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTUNMANAGEDCONTENTVIEWCONTROLLERVIEW_H

@class UIView, UISegmentedControl, UILabel, UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate;



@interface NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerView : UIView <UIGestureRecognizerDelegate>

 {
    UIView *_unmanagedView;
    UISegmentedControl *_unmanagedSegmentControl;
    UILabel *_unmanagedTitleLabel;
    UITapGestureRecognizer *_tapGestureRecongizer;
    UILabel *_overflowingLabel;
}


@property (nonatomic) BOOL containsUnmanagedContent; // ivar: _containsUnmanagedContent
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_unmanagedViewTapped;
-(void)layoutSubviews;


@end


#endif