// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPRODUCTLOCKUPLAYOUT_H
#define SKUIPRODUCTLOCKUPLAYOUT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "SKUIViewElementLayoutContext.h"
#import "SKUIViewElement.h"

@interface SKUIProductLockupLayout : NSObject {
    NSMutableArray *_bottomLeftViewElements;
    NSMutableArray *_bottomRightViewElements;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_middleLeftViewElements;
    SKUIViewElement *_productImageElement;
    NSMutableArray *_topLeftViewElements;
    NSMutableArray *_topRightViewElements;
}


@property (readonly, nonatomic) NSInteger bottomLeftLayoutStyle; // ivar: _bottomLeftLayoutStyle


-(BOOL)hasBottomRightElementWithRightAlignment;
-(CGFloat)bottomPaddingForViewElement:(id)arg0 ;
-(CGFloat)metadataWidthForWidth:(CGFloat)arg0 ;
-(CGFloat)topPaddingForViewElement:(id)arg0 ;
-(id)initWithLockup:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)viewElementsForSection:(NSInteger)arg0 ;
-(struct CGSize )_sizeForSegmentedControl:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )_sizeForVerticalViewElements:(id)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )_sizeForViewElement:(id)arg0 width:(CGFloat)arg1 ;
-(struct SKUIProductLockupLayoutSizing )layoutWidthsForWidth:(CGFloat)arg0 ;
-(struct SKUIProductLockupLayoutSizing )sizingToFitWidth:(CGFloat)arg0 ;
-(void)enumerateViewElementsForWidth:(CGFloat)arg0 usingBlock:(id)arg1 ;


@end


#endif