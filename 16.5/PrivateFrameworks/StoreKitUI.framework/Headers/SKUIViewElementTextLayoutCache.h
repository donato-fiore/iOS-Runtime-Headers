// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIVIEWELEMENTTEXTLAYOUTCACHE_H
#define SKUIVIEWELEMENTTEXTLAYOUTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SKUILayoutCache.h"

@interface SKUIViewElementTextLayoutCache : NSObject {
    NSMutableDictionary *_layoutMapTables;
}


@property (readonly, nonatomic) SKUILayoutCache *layoutCache; // ivar: _layoutCache


-(id)_bestGuessCache;
-(id)_createLayoutRequestForBadge:(id)arg0 width:(NSInteger)arg1 ;
-(id)_createLayoutRequestForButton:(id)arg0 attributedString:(id)arg1 width:(NSInteger)arg2 ;
-(id)_createLayoutRequestForLabel:(id)arg0 attributedString:(id)arg1 width:(NSInteger)arg2 ;
-(id)_createLayoutRequestForOrdinal:(id)arg0 attributedString:(id)arg1 width:(NSInteger)arg2 ;
-(id)_createLayoutRequestForViewElement:(id)arg0 attributedString:(id)arg1 width:(NSInteger)arg2 ;
-(id)_existingLayoutForViewElement:(id)arg0 width:(NSInteger)arg1 ;
-(id)_layoutIndexForViewElement:(id)arg0 width:(NSInteger)arg1 ;
-(id)initWithLayoutCache:(id)arg0 ;
-(id)layoutForWidth:(NSInteger)arg0 viewElement:(id)arg1 ;
-(struct CGSize )_bestGuessSizeForButton:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )_bestGuessSizeForLabel:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )_bestGuessSizeForOrdinal:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )estimatedSizeForButton:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )estimatedSizeForLabel:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )estimatedSizeForOrdinal:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )sizeForButton:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )sizeForLabel:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )sizeForViewElement:(id)arg0 width:(CGFloat)arg1 ;
-(void)_addRequest:(id)arg0 forViewElement:(id)arg1 ;
-(void)invalidateLayoutsForUpdatedElements;
-(void)requestLayoutForBadge:(id)arg0 width:(NSInteger)arg1 ;
-(void)requestLayoutForButton:(id)arg0 attributedString:(id)arg1 width:(NSInteger)arg2 ;
-(void)requestLayoutForLabel:(id)arg0 attributedString:(id)arg1 width:(NSInteger)arg2 ;
-(void)requestLayoutForOrdinal:(id)arg0 attributedString:(id)arg1 width:(NSInteger)arg2 ;
-(void)requestLayoutForViewElement:(id)arg0 attributedString:(id)arg1 width:(NSInteger)arg2 ;


@end


#endif