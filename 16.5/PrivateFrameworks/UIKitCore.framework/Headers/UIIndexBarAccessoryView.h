// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINDEXBARACCESSORYVIEW_H
#define UIINDEXBARACCESSORYVIEW_H

@protocol UIScrollAccessory, UIIndexBarAccessoryViewDelegate;


#import "UIIndexBarView.h"
#import "UIScrollView.h"

@interface UIIndexBarAccessoryView : UIIndexBarView <UIScrollAccessory>



@property (weak, nonatomic) NSObject<UIIndexBarAccessoryViewDelegate> *delegate;
@property (nonatomic) NSInteger edge; // ivar: _edge
@property (readonly, nonatomic) BOOL overlay;
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


+(void)makeIndexBarView:(*id)arg0 scrollAccessoryContainerView:(*id)arg1 forTraits:(id)arg2 ;
-(BOOL)_selectEntry:(id)arg0 atIndex:(NSInteger)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)displayEntryNearestToContentOffset:(struct CGPoint )arg0 ;
-(void)setEntries:(id)arg0 ;
-(void)update;


@end


#endif