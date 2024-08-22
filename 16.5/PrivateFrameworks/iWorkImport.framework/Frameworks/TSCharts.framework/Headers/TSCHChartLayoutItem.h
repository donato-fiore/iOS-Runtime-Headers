// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTLAYOUTITEM_H
#define TSCHCHARTLAYOUTITEM_H

@class NSArray;
@protocol TSWPStyleProviding;

#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"
#import "TSCHChartModel.h"
#import "TSCHChartLayoutItem.h"
#import "TSCHChartRootLayoutItem.h"

@interface TSCHChartLayoutItem : NSObject

@property (readonly, nonatomic) TSCHChartInfo *chart;
@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (retain, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic) NSUInteger dataSetIndex;
@property (readonly, nonatomic) CGPoint drawingOffset;
@property (readonly, nonatomic) CGRect drawingRect;
@property (nonatomic) CGRect drawingRectCache; // ivar: _drawingRectCache
@property (nonatomic) BOOL drawingRectCacheValid; // ivar: _drawingRectCacheValid
@property (readonly, nonatomic) CGSize drawingSize;
@property (readonly, nonatomic) BOOL isInResize;
@property (nonatomic) CGPoint layoutOffset; // ivar: _layoutOffset
@property (nonatomic) CGRect layoutRect;
@property (nonatomic) ? layoutSettings;
@property (nonatomic) CGSize layoutSize; // ivar: _layoutSize
@property (nonatomic) BOOL layoutSizeSet; // ivar: _layoutSizeSet
@property (readonly) CGSize minSize;
@property (nonatomic) CGSize minSizeCache; // ivar: _minSizeCache
@property (nonatomic) BOOL minSizeCacheValid; // ivar: _minSizeCacheValid
@property (readonly, nonatomic) TSCHChartModel *model;
@property (readonly, nonatomic) CGRect overhangRect;
@property (nonatomic) CGRect overhangRectCache; // ivar: _overhangRectCache
@property (nonatomic) BOOL overhangRectCacheValid; // ivar: _overhangRectCacheValid
@property (weak, nonatomic) TSCHChartLayoutItem *parent; // ivar: _parent
@property (readonly, nonatomic) TSCHChartRootLayoutItem *root;
@property (readonly, nonatomic) CGRect rootedDrawingRect;
@property (readonly, nonatomic) CGRect rootedLayoutRect;
@property (readonly, nonatomic) CGSize startingSize;
@property (readonly, weak, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource;
@property (readonly, nonatomic) NSObject<TSWPStyleProviding> *textStyleProvidingSource;
@property (readonly, nonatomic) CGAffineTransform transformToRoot;
@property (nonatomic) BOOL treeBuilt; // ivar: _treeBuilt


+(CGFloat)halfProtrusionForRegularPolygonWithSides:(NSInteger)arg0 strokeWidth:(CGFloat)arg1 ;
+(id)chartLayoutWithChartInfo:(id)arg0 styleProvidingSource:(id)arg1 ;
-(BOOL)stopIteratingItemsContainingPoint:(struct CGPoint )arg0 withBlock:(id)arg1 ;
-(CGFloat)overhangMagnitudeForEdge:(unsigned int)arg0 ;
-(id)description;
-(id)hitChartElements:(struct CGPoint )arg0 passingTest:(id)arg1 ;
-(id)initWithParent:(id)arg0 ;
-(id)p_description;
-(id)renderersWithRep:(id)arg0 ;
-(id)subselectionHaloPositionsForSelections:(id)arg0 ;
-(id)subselectionKnobPositionsForSelection:(id)arg0 ;
-(struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0 ;
-(struct CGPoint )overhangOffset;
-(struct CGRect )calcDrawingRect;
-(struct CGRect )calcOverhangRect;
-(struct CGSize )calcMinSize;
-(struct CGSize )overhangSize;
-(void)buildSubTree;
-(void)clearAll;
-(void)clearDrawingRect;
-(void)clearLayoutSize;
-(void)clearMinSize;
-(void)clearOverhangRect;
-(void)iterateHitChartElements:(struct CGPoint )arg0 withBlock:(id)arg1 ;
-(void)layoutInward;
-(void)layoutOutward;
-(void)layoutUsingMethod:(int)arg0 ;
-(void)p_iterateChildrenWithBlock:(id)arg0 ;


@end


#endif