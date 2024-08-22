// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICARDLAYOUT_H
#define SKUICARDLAYOUT_H


#import <Foundation/Foundation.h>

#import "SKUICardViewElement.h"
#import "SKUIViewElementLayoutContext.h"

@interface SKUICardLayout : NSObject {
    BOOL _hasBackground;
}


@property (readonly, nonatomic) SKUICardViewElement *cardViewElement; // ivar: _cardViewElement
@property (readonly, nonatomic) CGFloat horizontalContentInset;
@property (readonly, nonatomic) SKUIViewElementLayoutContext *layoutContext; // ivar: _layoutContext
@property (readonly, nonatomic) NSInteger layoutStyle;


+(BOOL)allowsViewElement:(id)arg0 ;
+(id)layoutWithCardViewElement:(id)arg0 context:(id)arg1 ;
-(CGFloat)bottomInsetForLastViewElement:(id)arg0 width:(CGFloat)arg1 ;
-(CGFloat)topInsetForViewElement:(id)arg0 previousViewElement:(id)arg1 width:(CGFloat)arg2 ;
-(id)attributedStringForButton:(id)arg0 ;
-(id)attributedStringForLabel:(id)arg0 ;
-(struct CGSize )sizeForViewElement:(id)arg0 width:(CGFloat)arg1 ;


@end


#endif