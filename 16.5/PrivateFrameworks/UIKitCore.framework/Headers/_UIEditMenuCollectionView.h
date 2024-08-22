// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEDITMENUCOLLECTIONVIEW_H
#define _UIEDITMENUCOLLECTIONVIEW_H

@class NSArray;


#import "UICollectionView.h"

@interface _UIEditMenuCollectionView : UICollectionView

@property (readonly, nonatomic) CGFloat currentPage;
@property (retain, nonatomic) NSArray *pages; // ivar: _pages
@property (nonatomic) NSInteger targetPage; // ivar: _targetPage


-(CGFloat)clampedPageForPageProgress:(CGFloat)arg0 ;
-(CGFloat)pageProgressForContentOffset:(struct CGPoint )arg0 clamped:(BOOL)arg1 ;
-(CGFloat)viewWidthForPageProgress:(CGFloat)arg0 ;
-(struct CGPoint )contentOffsetForPage:(NSInteger)arg0 ;
-(void)_prepareToPageWithHorizontalVelocity:(CGFloat)arg0 verticalVelocity:(CGFloat)arg1 ;
-(void)decrementTargetPage;
-(void)incrementTargetPage;
-(void)scrollToTargetPageAnimated:(BOOL)arg0 ;


@end


#endif