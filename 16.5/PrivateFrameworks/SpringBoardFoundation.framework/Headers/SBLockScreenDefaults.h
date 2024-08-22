// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENDEFAULTS_H
#define SBLOCKSCREENDEFAULTS_H

@class NSDictionary;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBLockScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) CGFloat cameraSwipePrelaunchThreshold;
@property (nonatomic) CGFloat cameraSwipePrewarmThreshold;
@property (nonatomic) NSInteger dateTimeOverridesIntervalSince1970;
@property (nonatomic) BOOL forceWakeToMaps;
@property (nonatomic) BOOL limitFeaturesForRemoteLock;
@property (nonatomic) CGFloat nowPlayingTimeout;
@property (nonatomic) BOOL overridesDateTimeToDefaultPast;
@property (nonatomic) BOOL overridesDateTimeToDefaultToday;
@property (nonatomic) BOOL prelaunchCameraOnButtonTouch;
@property (nonatomic) BOOL prelaunchCameraOnSwipe;
@property (nonatomic) BOOL prewarmCameraOnButtonTouch;
@property (nonatomic) BOOL prewarmCameraOnSwipe;
@property (nonatomic) NSDictionary *sessionTestWidgetInfo;
@property (nonatomic) BOOL showAuthenticationEngineeringUI;
@property (readonly, nonatomic) BOOL showLegalText;
@property (nonatomic) BOOL showQuickNoteFingerGestureRecognizer;
@property (nonatomic) BOOL showSupervisionText;
@property (nonatomic) BOOL useDefaultsValuesForCameraPrewarm;
@property (nonatomic) BOOL useDefaultsValuesForDateTimeOverrides;
@property (nonatomic) BOOL weDontNeedNoEducation;


-(void)_bindAndRegisterDefaults;


@end


#endif