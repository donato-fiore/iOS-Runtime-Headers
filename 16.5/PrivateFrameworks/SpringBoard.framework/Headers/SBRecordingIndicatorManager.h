// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBRECORDINGINDICATORMANAGER_H
#define SBRECORDINGINDICATORMANAGER_H

@class UIWindow, NSDate, NSTimer, NSSet, NSString;
@protocol SBWindowSceneStatusBarAssertionManagerObserver, SBRecordingIndicatorViewControllerDelegate, SBSensorActivityObserver, SBUIActiveOrientationObserver, PTSettingsKeyObserver, SAInvalidatable;

#import <Foundation/Foundation.h>

#import "SBRecordingIndicatorViewController.h"
#import "SBSensorActivityDataProvider.h"
#import "SBRecordingIndicatorSystemApertureElement.h"
#import "SBWindowScene.h"

@interface SBRecordingIndicatorManager : NSObject <SBWindowSceneStatusBarAssertionManagerObserver, SBRecordingIndicatorViewControllerDelegate, SBSensorActivityObserver, SBUIActiveOrientationObserver, PTSettingsKeyObserver>

 {
    UIWindow *_recordingIndicatorWindow;
    UIWindow *_recordingIndicatorWindowUIKitStatusBarPortal;
    UIWindow *_recordingIndicatorWindowSystemAperturePortal;
    SBRecordingIndicatorViewController *_recordingIndicatorViewController;
    SBRecordingIndicatorViewController *_recordingIndicatorViewControllerUIKitStatusBarPortal;
    SBRecordingIndicatorViewController *_recordingIndicatorViewControllerSystemAperturePortal;
    BOOL _indicatorStatusBarPartIsHidden;
    BOOL _indicatorIsHiddenForControlCenter;
    BOOL _visibilityIsForcedByPrototypeSettings;
    NSDate *_indicatorDisplayTime;
    NSTimer *_minimumTimeOnScreenTimer;
    SBSensorActivityDataProvider *_dataProvider;
}


@property (retain, nonatomic) NSSet *activeCameraAndMicrophoneActivityAttributions; // ivar: _activeCameraAndMicrophoneActivityAttributions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIndicatorVisible) BOOL indicatorVisible; // ivar: _indicatorVisible
@property (readonly, nonatomic, getter=isIndicatorVisibleAtStatusBarLocation) BOOL indicatorVisibleAtStatusBarLocation; // ivar: _indicatorVisibleAtStatusBarLocation
@property (retain, nonatomic) SBRecordingIndicatorSystemApertureElement *recordingIndicatorElement; // ivar: _recordingIndicatorElement
@property (retain, nonatomic) NSObject<SAInvalidatable> *recordingIndicatorElementAssertion; // ivar: _recordingIndicatorElementAssertion
@property (readonly) Class superclass;
@property (nonatomic, getter=isSystemApertureEmpty) BOOL systemApertureEmpty; // ivar: _systemApertureEmpty
@property (nonatomic) BOOL systemApertureIsSoLargeThatTheStatusBarIsProbablyHidden; // ivar: _systemApertureIsSoLargeThatTheStatusBarIsProbablyHidden
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(BOOL)_supportsStatusBarItem;
-(NSUInteger)_indicatorShapeForSensorType:(NSInteger)arg0 ;
-(id)_indicatorColorForSensorType:(NSInteger)arg0 ;
-(id)_indicatorIdentifierForSensorType:(NSInteger)arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(void)_createRecordingIndicatorForStandaloneLocation;
-(void)_createRecordingIndicatorForStatusBarLocation;
-(void)_createRecordingIndicatorForSystemApertureLocation;
-(void)_dataProviderDidUpdate:(id)arg0 ;
-(void)_updateIndicatorStyleForSensorActivityAttributions:(id)arg0 ;
-(void)_updateIndicatorViewForSensorType:(NSInteger)arg0 ;
-(void)_updateRecordingIndicatorForStatusBarChanges;
-(void)_updateRecordingIndicatorLocationIfNecessary;
-(void)_updateSystemApertureElementAssertion;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)activityDidChangeForSensorActivityDataProvider:(id)arg0 ;
-(void)controlCenterDidDismiss:(id)arg0 ;
-(void)controlCenterWillPresent:(id)arg0 ;
-(void)dealloc;
-(void)differentiateWithoutColorDidChange:(id)arg0 ;
-(void)recordingIndicatorViewController:(id)arg0 didUpdateIndicatorState:(NSUInteger)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 addStatusBarSettingsAssertion:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 removeStatusBarSettingsAssertion:(id)arg1 ;
-(void)systemApertureLayoutDidChange:(id)arg0 ;
-(void)updateRecordingIndicatorForStatusBarChanges;
-(void)updateRecordingIndicatorLocationIfNecessary;


@end


#endif