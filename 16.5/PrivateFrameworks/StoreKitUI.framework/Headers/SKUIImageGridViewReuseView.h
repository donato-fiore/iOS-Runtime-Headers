// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIIMAGEGRIDVIEWREUSEVIEW_H
#define SKUIIMAGEGRIDVIEWREUSEVIEW_H

@class NSMapTable, NSString, NSArray;
@protocol SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUIImageGridViewElement.h"

@interface SKUIImageGridViewReuseView : SKUIViewReuseView <SKUIViewElementView>

 {
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSMapTable *_viewElementViews;
    SKUIImageGridViewElement *_imageGridViewElement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *imageViews; // ivar: _imageViews
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)init;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif