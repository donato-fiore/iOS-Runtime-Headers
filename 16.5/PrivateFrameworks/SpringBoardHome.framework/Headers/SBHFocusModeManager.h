// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHFOCUSMODEMANAGER_H
#define SBHFOCUSMODEMANAGER_H

@class NSString;
@protocol SBFolderObserver;

#import <Foundation/Foundation.h>

#import "SBHFocusMode.h"
#import "SBHFocusModeFeatureIntroductionItem.h"
#import "SBHIconManager.h"

@interface SBHFocusModeManager : NSObject <SBFolderObserver>



@property (retain, nonatomic) SBHFocusMode *activeFocusMode; // ivar: _activeFocusMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBHFocusModeFeatureIntroductionItem *focusModeFeatureIntroductionItem; // ivar: _focusModeFeatureIntroductionItem
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (readonly) Class superclass;


-(id)_focusModesRequiringIntroduction;
-(id)initWithIconManager:(id)arg0 ;
-(void)_iconEditingDidChange:(id)arg0 ;
-(void)_iconModelDidChange:(id)arg0 ;
-(void)addFocusModeRequiringIntroduction:(id)arg0 ;
-(void)dealloc;
-(void)dismissAllFocusModePopovers;
-(void)folder:(id)arg0 didAddList:(id)arg1 ;
-(void)removeFocusModeRequiringIntroduction:(id)arg0 ;
-(void)updateFocusModePopoverVisibility;


@end


#endif