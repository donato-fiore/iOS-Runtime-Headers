// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVTUMBLERVIEW_H
#define _TVTUMBLERVIEW_H

@class UIView, UIImageView, NSMutableDictionary, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol _TVTumblerViewDataSource, _TVTumblerViewDelegate;



@interface _TVTumblerView : UIView {
    ? _delegateFlags;
}


@property (readonly, retain, nonatomic) UIImageView *arrowLeading;
@property (readonly, retain, nonatomic) UIImageView *arrowLeft; // ivar: _arrowLeft
@property (readonly, retain, nonatomic) UIImageView *arrowRight; // ivar: _arrowRight
@property (readonly, retain, nonatomic) UIImageView *arrowTrailing;
@property (readonly, nonatomic) BOOL canMove; // ivar: _canMove
@property (readonly, retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (weak, nonatomic) NSObject<_TVTumblerViewDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<_TVTumblerViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger focusedItemIndex; // ivar: _focusedItemIndex
@property (readonly, retain, nonatomic) UIView *focusedItemView;
@property (weak, nonatomic) UIView *gestureTargetView; // ivar: _gestureTargetView
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (retain, nonatomic) Class itemViewClass; // ivar: _itemViewClass
@property (readonly, retain, nonatomic) NSMutableDictionary *itemViewsByIndex; // ivar: _itemViewsByIndex
@property (readonly, retain, nonatomic) UISwipeGestureRecognizer *leftSwipeGesture; // ivar: _leftSwipeGesture
@property (readonly, retain, nonatomic) UITapGestureRecognizer *leftTapGesture; // ivar: _leftTapGesture
@property (retain, nonatomic) UIView *referredFocusedItemView; // ivar: _referredFocusedItemView
@property (readonly, retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGesture; // ivar: _rightSwipeGesture
@property (readonly, retain, nonatomic) UITapGestureRecognizer *rightTapGesture; // ivar: _rightTapGesture
@property (retain, nonatomic) UIView *spareItemView; // ivar: _spareItemView
@property (nonatomic) NSInteger unfocusedItemIndex; // ivar: _unfocusedItemIndex


-(id)_itemViewAtIndex:(NSInteger)arg0 ;
-(id)dequeueReusableItemView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_disableMove;
-(void)_enableMove;
-(void)_leftAction:(id)arg0 ;
-(void)_markItemViewForInUse:(id)arg0 forIndex:(NSInteger)arg1 ;
-(void)_markItemViewForReuse:(id)arg0 ;
-(void)_rightAction:(id)arg0 ;
-(void)_scheduleMoveToIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)registerItemViewClass:(Class)arg0 ;
-(void)reloadData;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif