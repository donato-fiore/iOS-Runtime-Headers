// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAPPLICATIONSCENESETTINGS_H
#define UIAPPLICATIONSCENESETTINGS_H

@class FBSSceneSettings, BSCornerRadiusConfiguration, NSString, FBSDisplayConfiguration, NSNumber, NSSet;
@protocol _UIDisplayInfoProviding, UIApplicationSceneSettings, _UIDisplayInfoShape, BSInterfaceOrientationMapResolving><BSXPCSecureCoding;



@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayInfoProviding, UIApplicationSceneSettings>



@property (readonly, nonatomic) BOOL _debugValidationOrientationMaskEnabled;
@property (readonly, nonatomic) NSInteger accessibilityContrast;
@property (readonly, nonatomic) NSUInteger artworkSubtype;
@property (readonly, nonatomic) BOOL canShowAlerts;
@property (readonly, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (readonly, nonatomic) NSUInteger deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger deviceOrientation;
@property (readonly, nonatomic) BOOL deviceOrientationEventsEnabled;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) BOOL enhancedWindowingEnabled;
@property (readonly, nonatomic) NSObject<_UIDisplayInfoShape> *exclusionArea;
@property (readonly, nonatomic) BOOL forcedStatusBarForegroundTransparent;
@property (readonly, nonatomic) NSNumber *forcedStatusBarStyle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat homeAffordanceOverlayAllowance;
@property (readonly, nonatomic) unsigned int hostContextIdentifierForSnapshotting;
@property (readonly, nonatomic) BOOL idleModeEnabled;
@property (readonly, nonatomic) BOOL inLiveResize;
@property (readonly, nonatomic) NSObject<BSInterfaceOrientationMapResolving><BSXPCSecureCoding> *interfaceOrientationMapResolver;
@property (readonly, nonatomic) NSInteger interfaceOrientationMode;
@property (readonly, nonatomic) UIEdgeInsets peripheryInsets;
@property (readonly, nonatomic) NSString *persistenceIdentifier;
@property (readonly, nonatomic) NSInteger pointerLockStatus;
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsetsLandscapeRight;
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsetsPortrait;
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property (readonly, nonatomic) NSUInteger scenePresenterRenderIdentifierForSnapshotting;
@property (readonly, nonatomic) BOOL screenBoundsIgnoresSceneOrientation;
@property (readonly, nonatomic) NSInteger screenReferenceDisplayModeStatus;
@property (readonly, nonatomic) CGRect statusBarAvoidanceFrame;
@property (readonly, nonatomic) BOOL statusBarDisabled;
@property (readonly, nonatomic) CGFloat statusBarHeight;
@property (readonly, nonatomic) NSInteger statusBarParts;
@property (readonly, nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat systemMinimumMargin;
@property (readonly, nonatomic) NSSet *targetOfEventDeferringEnvironments;
@property (readonly, nonatomic) BOOL underLock;
@property (readonly, nonatomic) NSInteger userInterfaceStyle;


-(BOOL)isUISubclass;
-(CGFloat)defaultStatusBarHeightForOrientation:(NSInteger)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif