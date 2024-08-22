// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIREMOTEKEYBOARDWINDOW_H
#define UIREMOTEKEYBOARDWINDOW_H

@class NSDictionary, FBSSceneLayer, FBSScene, CAContext, FBSSceneIdentityToken, NSString;
@protocol _UIContextCustomBinding, _UIScreenBasedObject;


#import "UITextEffectsWindow.h"
#import "UIScreen.h"
#import "_UIContextBinder.h"

@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding, _UIScreenBasedObject>

 {
    NSDictionary *_perScreenOptions;
    UIScreen *_intendedScreen;
    BOOL _arePlaceholdersInitialised;
    FBSSceneLayer *_keyboardSceneLayer;
    FBSScene *_activeScene;
    BOOL _resetRequired;
}


@property (readonly, nonatomic) ? _bindingDescription;
@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext;
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, nonatomic) FBSSceneIdentityToken *activeSceneIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isHostedInAnotherProcess;
+(id)remoteKeyboardWindowForScreen:(id)arg0 create:(BOOL)arg1 ;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_canIgnoreInteractionEvents;
-(BOOL)_isAlwaysKeyboardWindow;
-(BOOL)_isEligibleForFocusOcclusion;
-(BOOL)_isFullscreen;
-(BOOL)_isHostedInAnotherProcess;
-(BOOL)_isRemoteKeyboardWindow;
-(BOOL)_isTextEffectsWindowNotificationOwner;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_matchingOptions:(id)arg0 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_wantsSceneAssociation;
-(BOOL)isInternalWindow;
-(BOOL)isTransparentFocusItem;
-(BOOL)shouldAttachBindable;
-(BOOL)shouldDetachBindable;
-(CGFloat)_adjustedWindowLevelFromLevel:(CGFloat)arg0 ;
-(NSInteger)_orientationForClassicPresentation;
-(NSInteger)_orientationInSceneSpace;
-(id)_initBasicWithScreen:(id)arg0 options:(id)arg1 ;
-(id)_initWithScreen:(id)arg0 options:(id)arg1 ;
-(id)_layerForCoordinateSpaceConversion;
-(void)_configureAlphaIfNecessary;
-(void)_resetScene;
-(void)_setRotatableClient:(id)arg0 toOrientation:(NSInteger)arg1 updateStatusBar:(BOOL)arg2 duration:(CGFloat)arg3 force:(BOOL)arg4 isRotating:(BOOL)arg5 ;
-(void)attachBindable;
-(void)dealloc;
-(void)detachBindable;
-(void)endDisablingInterfaceAutorotation;
-(void)invalidate;
-(void)resetScene;
-(void)setWindowLevel:(CGFloat)arg0 ;


@end


#endif