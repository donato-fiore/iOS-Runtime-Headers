// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIEDITORIALPAGESECTION_H
#define SKUIEDITORIALPAGESECTION_H



#import "SKUIStorePageSection.h"
#import "SKUIColorScheme.h"
#import "SKUIEditorialLayout.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIEditorialComponent.h"

@interface SKUIEditorialPageSection : SKUIStorePageSection {
    SKUIColorScheme *_colorScheme;
    SKUIEditorialLayout *_editorialLayout;
    BOOL _hasValidColorScheme;
    BOOL _isExpanded;
    SKUIViewElementLayoutContext *_layoutContext;
}


@property (readonly, nonatomic) SKUIEditorialComponent *pageComponent;


-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)numberOfCells;
-(id)_colorScheme;
-(id)_editorialLayout;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)reloadCellWithIndexPath:(id)arg0 reason:(NSInteger)arg1 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif