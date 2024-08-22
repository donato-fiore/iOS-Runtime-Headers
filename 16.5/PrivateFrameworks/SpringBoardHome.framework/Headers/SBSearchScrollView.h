// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSEARCHSCROLLVIEW_H
#define SBSEARCHSCROLLVIEW_H

@class UIScrollView;
@protocol SBSearchScrollViewDelegate;



@interface SBSearchScrollView : UIScrollView

@property (weak, nonatomic) NSObject<SBSearchScrollViewDelegate> *searchDelegate; // ivar: _searchDelegate


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;


@end


#endif