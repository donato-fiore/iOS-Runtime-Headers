// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHICONSHARESHEETMANAGER_H
#define SBHICONSHARESHEETMANAGER_H

@class UIView, NSString, UIViewController;

#import <Foundation/Foundation.h>

#import "SBHIconManager.h"
#import "SBIconView.h"
#import "SBIcon.h"

@interface SBHIconShareSheetManager : NSObject

@property (readonly, nonatomic) BOOL areAnyAppIconShareSheetsShowing;
@property (retain, nonatomic) UIView *fakeSourceView; // ivar: _fakeSourceView
@property (weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (nonatomic) BOOL iconShareSheetsAreHiddenForRotation; // ivar: _iconShareSheetsAreHiddenForRotation
@property (weak, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (weak, nonatomic) SBIcon *iconWithShareSheetHidingForRotationAnimation; // ivar: _iconWithShareSheetHidingForRotationAnimation
@property (copy, nonatomic) NSString *locationOfIconWithShareSheetHiddenForRotationAnimation; // ivar: _locationOfIconWithShareSheetHiddenForRotationAnimation
@property (nonatomic) BOOL queuedToPresentShareSheet; // ivar: _queuedToPresentShareSheet
@property (retain, nonatomic) UIViewController *shareSheetViewController; // ivar: _shareSheetViewController


-(id)_shareSheetPresentationViewControllerForIconView:(id)arg0 ;
-(id)initWithIconManager:(id)arg0 ;
-(struct CGRect )_iconViewFrameInScreenCoordinateSpace:(id)arg0 ;
-(void)_appIconForceTouchControllerDidDismissNotification:(id)arg0 ;
-(void)_createFakeSourceViewForIconView:(id)arg0 ;
-(void)_presentShareSheet:(id)arg0 forIconView:(id)arg1 ;
-(void)_queueShareSheetPresentation:(id)arg0 forIconView:(id)arg1 ;
-(void)dealloc;
-(void)dismissIconShareSheetsIfNecessaryAndCleanUp;
-(void)hideIconShareSheetsIfAnyForRotationAnimation;
-(void)presentShareSheetForIconView:(id)arg0 ;
-(void)showIconShareSheetsIfAnyWereHiddenForRotationAnimation;


@end


#endif