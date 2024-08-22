// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIPRESSANDHOLDGRID_H
#define TUIPRESSANDHOLDGRID_H

@class UIView, NSArray, UICollectionView, NSString, NSIndexPath;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, TUIPressAndHoldGridDelegate;



@interface TUIPressAndHoldGrid : UIView <UICollectionViewDelegate, UICollectionViewDataSource>



@property (readonly, nonatomic) NSArray *accentVariants; // ivar: _accentVariants
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUIPressAndHoldGridDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSIndexPath *firstIndexPath;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexPath *lastIndexPath;
@property (readonly, nonatomic) NSString *selectedAccentVariant;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;


-(BOOL)handleNumberKey:(NSUInteger)arg0 ;
-(BOOL)handleSelection;
-(BOOL)hasAccentVariantInForwardDirection:(BOOL)arg0 ;
-(BOOL)indexPathIsValid:(id)arg0 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)accentVariantNumberForIndexPath:(id)arg0 ;
-(id)accentAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForAccentVariantNumber:(NSUInteger)arg0 ;
-(id)indexPathInForwardDirection:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 accentVariants:(id)arg1 ;
-(id)showAccentVariantInForwardDirection:(BOOL)arg0 ;
-(id)visibleAttributes;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)forceUpdateVisibleCells;
-(void)layoutSubviews;


@end


#endif