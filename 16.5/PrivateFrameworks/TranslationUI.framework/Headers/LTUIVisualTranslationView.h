// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTUIVISUALTRANSLATIONVIEW_H
#define LTUIVISUALTRANSLATIONVIEW_H

@class UIView;


#import "_TtC13TranslationUI27VisualTranslationViewBridge.h"

@interface LTUIVisualTranslationView : UIView

@property (weak) UIView *_presentationAnchorView; // ivar: __presentationAnchorView
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (weak) UIView *presentationAnchorView;
@property (retain, nonatomic) _TtC13TranslationUI27VisualTranslationViewBridge *translationView; // ivar: _translationView


+(id)describeRect:(struct CGRect )arg0 ;
+(struct CGRect )clipRect:(struct CGRect )arg0 contentRect:(struct CGRect )arg1 ;
+(struct CGRect )swiftUIRectFrom:(struct CGRect )arg0 contentRect:(struct CGRect )arg1 ;
+(void)constrainToSuperview:(id)arg0 ;
+(void)isTranslatable:(id)arg0 completion:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToSuperview;
-(void)dismiss;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)registerForDismissEvent:(id)arg0 ;
-(void)setZoomScale:(CGFloat)arg0 ;
-(void)translate:(id)arg0 ;
-(void)translate:(id)arg0 completion:(id)arg1 ;
-(void)translate:(id)arg0 sourceLocale:(id)arg1 targetLocale:(id)arg2 completion:(id)arg3 ;
-(void)updatePresentationAnchorRectForContentRect:(struct CGRect )arg0 ;


@end


#endif