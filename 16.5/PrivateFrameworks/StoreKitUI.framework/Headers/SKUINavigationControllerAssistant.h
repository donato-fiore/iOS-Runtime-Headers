// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUINAVIGATIONCONTROLLERASSISTANT_H
#define SKUINAVIGATIONCONTROLLERASSISTANT_H

@class UIView, UINavigationController, _UINavigationControllerPalette, UIViewController;
@protocol SKUIStatusOverlayProvider;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUINavigationControllerAssistant : NSObject

@property (retain, nonatomic) UIView *childPaletteView; // ivar: _childPaletteView
@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (nonatomic) BOOL hidesShadow; // ivar: _hidesShadow
@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) _UINavigationControllerPalette *paletteBackgroundView; // ivar: _paletteBackgroundView
@property (retain, nonatomic) NSObject<SKUIStatusOverlayProvider> *statusOverlayProvider; // ivar: _statusOverlayProvider
@property (retain, nonatomic) UIViewController *statusOverlayViewController; // ivar: _statusOverlayViewController


+(id)assistantForNavigationController:(id)arg0 clientContext:(id)arg1 ;
+(id)existingAssistantForNavigationController:(id)arg0 ;
-(id)_initWithNavigationController:(id)arg0 clientContext:(id)arg1 ;
-(void)_hideChildPaletteView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_hideOverlayView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_previewDocumentChangeNotification:(id)arg0 ;
-(void)_showOverlayView:(id)arg0 previousOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_transitionToPaletteView:(id)arg0 animated:(BOOL)arg1 operation:(NSInteger)arg2 ;
-(void)dealloc;
-(void)setPalettePinningBarHidden:(BOOL)arg0 ;
-(void)setPaletteView:(id)arg0 animated:(BOOL)arg1 ;
-(void)willShowViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif