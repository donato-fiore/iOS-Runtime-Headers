// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCANVASVIEW_H
#define TSDCANVASVIEW_H

@class UIView, NSString, UITextInputPasswordRules;
@protocol UITextLinkInteraction, _UITextInputRevealSupportProviding, UITextInputTraits, TSDCanvasLayerHosting;


#import "TSDCanvasLayer.h"
#import "TSDInteractiveCanvasController.h"
#import "TSKScrollView.h"
#import "TSDCanvasView.h"

@interface TSDCanvasView : UIView <UITextLinkInteraction, _UITextInputRevealSupportProviding, UITextInputTraits>



@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) TSDCanvasLayer *canvasLayer;
@property (nonatomic) TSDInteractiveCanvasController *controller; // ivar: mController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly) TSKScrollView *enclosingScrollView;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<UITextLinkInteraction> *hyperLinkDelegate; // ivar: mHyperLinkDelegate
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) NSObject<TSDCanvasLayerHosting> *layerHost; // ivar: mLayerHost
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (readonly, nonatomic) TSDCanvasView *rootCanvasView;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;


+(Class)layerClass;
-(BOOL)isInteractingWithLink;
-(BOOL)mightHaveLinks;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(struct CGPoint )arg0 ;
-(id)_textImageFromRect:(struct CGRect )arg0 ;
-(id)_textInputForReveal;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(void)_requestTextItemConstrainedToLineAtPoint:(struct CGPoint )arg0 resultHandler:(id)arg1 ;
-(void)cancelInteractionWithLink;
-(void)didAddSubview:(id)arg0 ;
-(void)startInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)startLongInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)tapLinkAtPoint:(struct CGPoint )arg0 ;
-(void)teardown;
-(void)updateInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)validateInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;


@end


#endif