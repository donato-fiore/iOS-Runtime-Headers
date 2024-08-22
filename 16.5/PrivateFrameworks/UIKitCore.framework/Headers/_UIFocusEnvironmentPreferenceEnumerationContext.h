// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSENVIRONMENTPREFERENCEENUMERATIONCONTEXT_H
#define _UIFOCUSENVIRONMENTPREFERENCEENUMERATIONCONTEXT_H

@class NSMutableArray, NSArray, NSHashTable, NSMapTable, NSString;
@protocol _UIFocusEnvironmentPreferenceEnumerationContext, UIFocusEnvironment, _UIFocusEnvironmentPreferenceEnumerationContextDelegate;

#import <Foundation/Foundation.h>

#import "UIFocusSystem.h"
#import "_UIDebugLogStack.h"

@interface _UIFocusEnvironmentPreferenceEnumerationContext : NSObject <_UIFocusEnvironmentPreferenceEnumerationContext>

 {
    UIFocusSystem *_focusSystem;
    id<UIFocusEnvironment> *_preferredSubtree;
    NSMutableArray *_visitedEnvironmentStack;
    id<UIFocusEnvironment> *_lastPrimaryPreferredEnvironment;
    NSArray *_cachedPreferredEnvironments;
    NSHashTable *_allVisitedEnvironments;
    BOOL _hasResolvedPreferredFocusEnvironments;
    BOOL _hasNeverPoppedInPreferredSubtree;
    id<UIFocusEnvironment> *_preferredSubtreeEntryPoint;
    NSMapTable *_preferredEnvironmentsMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UIDebugLogStack *debugStack; // ivar: _debugStack
@property (weak, nonatomic) NSObject<_UIFocusEnvironmentPreferenceEnumerationContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<UIFocusEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInPreferredSubtree) BOOL inPreferredSubtree;
@property (readonly, nonatomic) BOOL isLeafPreference;
@property (readonly, nonatomic) BOOL isPrimaryPreference;
@property (readonly, nonatomic, getter=isPreferredByItself) BOOL preferredByItself;
@property (readonly, nonatomic) NSArray *preferredEnvironments;
@property (readonly, nonatomic) NSObject<UIFocusEnvironment> *preferringEnvironment;
@property (readonly, nonatomic) BOOL prefersNothingFocused; // ivar: _cachedPrefersNothingFocused
@property (readonly) Class superclass;


-(BOOL)_isAllowedToPreferEnvironment:(id)arg0 ;
-(id)_inferPreferencesForEnvironment:(id)arg0 ;
-(id)_startLogging;
-(id)init;
-(id)initWithFocusEnvironment:(id)arg0 enumerationMode:(NSInteger)arg1 ;
-(void)_invalidatePreferredEnvironments;
-(void)_reportInferredPreferredFocusEnvironment:(id)arg0 ;
-(void)_resolvePreferredFocusEnvironments;
-(void)_stopLogging;
-(void)popEnvironment;
-(void)pushEnvironment:(id)arg0 ;


@end


#endif