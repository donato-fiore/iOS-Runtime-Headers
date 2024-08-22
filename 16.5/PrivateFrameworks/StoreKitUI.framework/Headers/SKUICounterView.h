// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOUNTERVIEW_H
#define SKUICOUNTERVIEW_H

@class NSNumberFormatter, UILabel, NSString;
@protocol SKUIViewElementView, OS_dispatch_source;


#import "SKUIViewReuseView.h"
#import "SKUICounterViewElement.h"
#import "SKUIImageView.h"
#import "SKUICounterTimeView.h"

@interface SKUICounterView : SKUIViewReuseView <SKUIViewElementView>

 {
    UIEdgeInsets _contentInset;
    SKUICounterViewElement *_counterElement;
    SKUIImageView *_imageView;
    NSNumberFormatter *_numberFormatter;
    UILabel *_numberView;
    SKUICounterTimeView *_timeView;
    NSObject<OS_dispatch_source> *_updateTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(NSUInteger)_visibleTimeFieldsForDateFormat:(NSInteger)arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_addNumberViewWithViewElement:(id)arg0 context:(id)arg1 ;
-(void)_addTimeViewWithViewElement:(id)arg0 context:(id)arg1 ;
-(void)_reloadNumberValue;
-(void)_reloadUpdateTimer;
-(void)_startUpdateTimer;
-(void)_stopUpdateTimer;
-(void)_updateTimerAction;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif