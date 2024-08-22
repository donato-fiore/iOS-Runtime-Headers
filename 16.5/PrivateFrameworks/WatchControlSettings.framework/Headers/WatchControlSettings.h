// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WATCHCONTROLSETTINGS_H
#define WATCHCONTROLSETTINGS_H

@class NSHashTable, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WatchControlSettings : NSObject {
    NSHashTable *_observers;
    os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_localObserverQueue;
}


@property (retain, nonatomic) NSArray *actionMenuFavorites;
@property (nonatomic) BOOL actionMenuLargerSize;
@property (nonatomic) NSInteger actionMenuPosition;
@property (nonatomic) NSUInteger autoFocusNavigationSpeed;
@property (nonatomic) BOOL automaticDigitalCrownEnablementInWaterLock;
@property (nonatomic) BOOL automationServerEnabled;
@property (nonatomic) NSUInteger defaultAutoScrollSpeed;
@property (nonatomic) BOOL disablePPGDataSource;
@property (nonatomic) BOOL dwellControlEnabled;
@property (nonatomic) BOOL dwellControlShakeToStart;
@property (nonatomic) NSUInteger dwellControlTimerAction;
@property (readonly, nonatomic) NSArray *eligibleGreyActivationGestures;
@property (nonatomic) BOOL falsePositiveLoggingEnabled;
@property (nonatomic) BOOL featureEnabled;
@property (nonatomic) NSInteger focusMovementStyle;
@property (nonatomic) NSInteger focusRingColor;
@property (nonatomic) BOOL focusRingHighContrastEnabled;
@property (nonatomic) NSInteger greyActivationGesture;
@property (nonatomic) BOOL greyQuickActionAutoScrollNotificationsEnabled;
@property (nonatomic) BOOL greyQuickActionsEnabled;
@property (nonatomic) BOOL hasShownInitialOnboarding;
@property (nonatomic) float motionPointerActivationDuration;
@property (readonly, nonatomic) float motionPointerActivationDurationMax;
@property (readonly, nonatomic) float motionPointerActivationDurationMin;
@property (nonatomic) NSUInteger motionPointerMovementTolerance;
@property (nonatomic) float motionPointerSensitivity;
@property (readonly, nonatomic) float motionPointerSensitivityMax;
@property (readonly, nonatomic) float motionPointerSensitivityMin;
@property (nonatomic) BOOL playDetectedGestureHapticFeedback;
@property (nonatomic) BOOL showDetectedGestureBanner;
@property (nonatomic) BOOL showGestureRecognizerIndicator;


+(id)sharedInstance;
-(id)_init;
-(id)accessibilityDomainAccessor;
-(id)enabledInputSourceTypes;
-(id)greyEventActionCustomizations;
-(id)greyEventCustomActionCustomizations;
-(id)motionPointerEdgeActionCustomizations;
-(id)watchControlDomainAccessor;
-(void)_updateInputSourceType:(NSUInteger)arg0 enable:(BOOL)arg1 ;
-(void)addSettingsObserver:(id)arg0 ;
-(void)dealloc;
-(void)disableInputSourceType:(NSUInteger)arg0 ;
-(void)enableInputSourceType:(NSUInteger)arg0 ;
-(void)informLocalObservers;
-(void)informObservers;
-(void)removeCustomActionForGreyEvent:(NSInteger)arg0 ;
-(void)removeSettingsObserver:(id)arg0 ;
-(void)resetGreyEventActionCustomizations;
-(void)resetMotionPointerEdgeActionCustomizations;
-(void)setAction:(NSUInteger)arg0 forGreyEvent:(NSInteger)arg1 ;
-(void)setAction:(NSUInteger)arg0 forMotionPointerEdge:(NSInteger)arg1 ;
-(void)setCustomActionType:(NSInteger)arg0 withCustomActionIdentifier:(id)arg1 forGreyEvent:(NSInteger)arg2 ;


@end


#endif