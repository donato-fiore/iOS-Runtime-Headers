// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWORTHOGONALSCROLLEREMBEDDEDSCROLLVIEW_H
#define _UICOLLECTIONVIEWORTHOGONALSCROLLEREMBEDDEDSCROLLVIEW_H

@class NSString;
@protocol _UICollectionViewOrthogonalScrollView;


#import "UIScrollView.h"
#import "UIFocusContainerGuide.h"
#import "UICollectionView.h"

@interface _UICollectionViewOrthogonalScrollerEmbeddedScrollView : UIScrollView <_UICollectionViewOrthogonalScrollView>

 {
    UIFocusContainerGuide *_sectionFocusContainerGuide;
}


@property (nonatomic) UIEdgeInsets baseContentInsets; // ivar: _baseContentInsets
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) CGPoint contentOffset;
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (nonatomic) NSDirectionalEdgeInsets frameInsets; // ivar: _frameInsets
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maskCornerRadius; // ivar: _maskCornerRadius
@property (nonatomic) NSInteger section; // ivar: _section
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;


+(BOOL)_supportsInvalidatingFocusCache;
-(NSUInteger)_edgesPropagatingSafeAreaInsetsToSubviews;
-(NSUInteger)_focusPrimaryScrollableAxis;
-(id)_childFocusRegionsInRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(id)focusItemsInRect:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_panGestureLocationInView:(id)arg0 ;
-(struct CGPoint )_panGestureVelocityInView:(id)arg0 ;
-(struct CGPoint )_pointByApplyingBaseContentInsetsToPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_pointByRemovingBaseContentInsetsFromPoint:(struct CGPoint )arg0 ;
-(struct UIEdgeInsets )_focusScrollableAreaInsets;
-(void)_focusedItem:(id)arg0 isMinX:(*BOOL)arg1 isMaxX:(*BOOL)arg2 isMinY:(*BOOL)arg3 isMaxY:(*BOOL)arg4 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif