// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWLAYOUTINTERACTIONSTATEMODULE_H
#define _UICOLLECTIONVIEWLAYOUTINTERACTIONSTATEMODULE_H

@class NSMutableDictionary, NSString, UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost>;
@protocol _UICollectionViewLayoutInteractionStateProviding;

#import <Foundation/Foundation.h>


@interface _UICollectionViewLayoutInteractionStateModule : NSObject <_UICollectionViewLayoutInteractionStateProviding>

 {
    NSMutableDictionary *_processingCellsMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost> *host; // ivar: _host
@property (readonly, nonatomic) Class invalidationContextClass; // ivar: _invalidationContextClass
@property (readonly) Class superclass;


-(BOOL)_itemIsSelectedOrHighlightedAndHasBackgroundFillForGroupingAtIndexPath:(id)arg0 cellGroupingPreference:(*NSInteger)arg1 backgroundIsInset:(*BOOL)arg2 ;
-(BOOL)_shouldAdjustLayoutToDrawTopSeparatorInSection:(NSInteger)arg0 ;
-(BOOL)enumerateSectionsAfterSectionIndex:(NSInteger)arg0 enumerator:(id)arg1 ;
-(BOOL)itemAtIndexPathIsBeingReordered:(id)arg0 ;
-(BOOL)itemAtIndexPathIsHighlighted:(id)arg0 ;
-(BOOL)itemAtIndexPathIsSelected:(id)arg0 ;
-(NSUInteger)selectionGroupingForItemAtIndexPath:(id)arg0 ;
-(id)_cellForItemAtIndexPath:(id)arg0 ;
-(id)initWithHost:(id)arg0 ;
-(void)_noteCellDidFinishProcessingAtIndexPath:(id)arg0 ;
-(void)_noteCellWillBeginProcessing:(id)arg0 atIndexPath:(id)arg1 ;
// -(void)performPreferredAttributesProcessingBlock:(id)arg0 withLayoutAttributes:(unk)arg1 forView:(id)arg2  ;


@end


#endif