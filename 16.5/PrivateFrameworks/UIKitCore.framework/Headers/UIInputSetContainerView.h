// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTSETCONTAINERVIEW_H
#define UIINPUTSETCONTAINERVIEW_H

@class NSMutableDictionary, NSString;
@protocol _UIViewHost;


#import "UIInputSetHostView.h"
#import "UIKBRenderConfig.h"
#import "UIScreen.h"

@interface UIInputSetContainerView : UIInputSetHostView <_UIViewHost>

 {
    UIKBRenderConfig *_renderConfig;
    NSMutableDictionary *_hostedViews;
    BOOL _disableGeometryObserverNotifications;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) UIScreen *hostingScreen;
@property (nonatomic) CGPoint offsetOrigin; // ivar: _offsetOrigin
@property (readonly) Class superclass;


+(BOOL)_notifyOnExplicitLayout;
+(BOOL)_shouldHitTestInputViewFirst;
-(BOOL)_disableGeometryObserverNotification;
-(BOOL)_isTransparentFocusRegion;
-(BOOL)hasHostedViews;
-(id)_inheritedRenderConfig;
-(id)_inputWindowController;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_accessoryViewFrame;
-(void)_didRemoveSubview:(id)arg0 ;
-(void)_setAccessoryViewFrame:(struct CGRect )arg0 ;
-(void)_setRenderConfig:(id)arg0 ;
-(void)addHostedView:(id)arg0 withViewRemovalHandler:(id)arg1 ;
-(void)dealloc;
-(void)didAddSubview:(id)arg0 ;
-(void)performWithoutGeometryObserverNotifications:(id)arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif