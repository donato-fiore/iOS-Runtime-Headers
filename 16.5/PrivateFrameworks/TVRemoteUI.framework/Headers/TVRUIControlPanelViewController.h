// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRUICONTROLPANELVIEWCONTROLLER_H
#define TVRUICONTROLPANELVIEWCONTROLLER_H

@class UIViewController, NSMutableSet, UIView, NSString;
@protocol _TVRUIEventDelegate, TVRUIRemoteViewProvider, TVRUIDevice, TVRUIStyleProvider;


#import "TVRUIButtonPanelView.h"

@interface TVRUIControlPanelViewController : UIViewController <_TVRUIEventDelegate, TVRUIRemoteViewProvider>



@property (retain, nonatomic) NSMutableSet *allButtonPanels; // ivar: _allButtonPanels
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *buttonActionsDelegate; // ivar: _buttonActionsDelegate
@property (retain, nonatomic) TVRUIButtonPanelView *currentButtonPanel; // ivar: _currentButtonPanel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) TVRUIButtonPanelView *genericButtonPanel; // ivar: _genericButtonPanel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVRUIButtonPanelView *legacyButtonPanel; // ivar: _legacyButtonPanel
@property (retain, nonatomic) TVRUIButtonPanelView *legacyPanelWithKeyboardButton; // ivar: _legacyPanelWithKeyboardButton
@property (retain, nonatomic) TVRUIButtonPanelView *panelWithKeyboardButton; // ivar: _panelWithKeyboardButton
@property (retain, nonatomic) NSObject<TVRUIDevice> *remoteDevice; // ivar: _remoteDevice
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) TVRUIButtonPanelView *touchpadButtonPanel; // ivar: _touchpadButtonPanel


-(BOOL)_canShowWhileLocked;
-(id)_createPagedViewWithPrimaryButtonType:(NSInteger)arg0 leftButtonTypes:(id)arg1 ;
-(id)_createViewWithPrimaryButtonType:(NSInteger)arg0 leftButtonTypes:(id)arg1 rightButtonTypes:(id)arg2 ;
-(void)_createButtonPanelWithKeyboard;
-(void)_createGenericControlButtonPanel;
-(void)_createLegacyButtonPanel;
-(void)_createLegacyPanelWithkeyboard;
-(void)_createTouchpadButtonPanel;
-(void)_disableControls;
-(void)_enableControls;
-(void)_transitionToButtonPanelAndCreateIfNeeded;
-(void)_transitionToPanelView:(id)arg0 ;
-(void)_transitionToTouchpadPanelAndCreateIfNeeded;
-(void)_updateViewState;
-(void)disableSearchButton;
-(void)enableSearchButton;
-(void)hideKeyboardButton;
-(void)setDevice:(id)arg0 ;
-(void)showKeyboardButton;
-(void)transitonToViewForDeviceType:(NSInteger)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif