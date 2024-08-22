// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVARIABLEAVAILABILITY_H
#define WFVARIABLEAVAILABILITY_H

@class NSMapTable, NSHashTable, NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFWorkflow.h"

@interface WFVariableAvailability : NSObject

@property (retain, nonatomic) NSMapTable *actionOutputVariableActionsByUUID; // ivar: _actionOutputVariableActionsByUUID
@property (retain, nonatomic) NSHashTable *actionsUsingShortcutInputVariable; // ivar: _actionsUsingShortcutInputVariable
@property (retain, nonatomic) NSCache *cachedContentClassesForVariableNameAtIndex; // ivar: _cachedContentClassesForVariableNameAtIndex
@property (retain, nonatomic) NSMapTable *providingActionsByVariableName; // ivar: _providingActionsByVariableName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic, getter=isShortcutInputVariableUsed) BOOL shortcutInputVariableUsed;
@property (retain, nonatomic) NSHashTable *variableObservers; // ivar: _variableObservers
@property (retain, nonatomic) NSMapTable *variableScopeEndActionsByStartAction; // ivar: _variableScopeEndActionsByStartAction
@property (retain, nonatomic) NSMapTable *variableScopeLevelsByGroupingIdentifier; // ivar: _variableScopeLevelsByGroupingIdentifier
@property (readonly, weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow


+(BOOL)actionIsEligibleForOutputVariable:(id)arg0 ;
-(BOOL)areActionOutputVariablesAvailableAtIndex:(NSUInteger)arg0 ;
-(BOOL)areVariablesAvailableAtIndex:(NSUInteger)arg0 ;
-(BOOL)isVariableAvailableAtIndex:(NSUInteger)arg0 withActionTest:(id)arg1 ;
-(BOOL)isVariableWithName:(id)arg0 availableAtIndex:(NSUInteger)arg1 ;
-(BOOL)isVariableWithOutputUUIDAvailable:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(NSUInteger)variableScopeLevelForGroupingIdentifier:(id)arg0 ;
-(id)_possibleContentClassesForVariableNamed:(id)arg0 atIndex:(NSUInteger)arg1 context:(id)arg2 excludingAction:(id)arg3 ;
-(id)actionProvidingVariableWithOutputUUID:(id)arg0 ;
-(id)actionsProvidingVariableName:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)availableOutputActionsAtIndex:(NSUInteger)arg0 ;
-(id)availableVariableNamesAtIndex:(NSUInteger)arg0 ;
-(id)availableVariableNamesExcludingThoseProvidedByAction:(id)arg0 ;
-(id)initWithWorkflow:(id)arg0 ;
-(id)possibleContentClassesForVariableNamed:(id)arg0 atIndex:(NSUInteger)arg1 context:(id)arg2 excludingAction:(id)arg3 ;
-(void)actionDidChange:(id)arg0 moved:(BOOL)arg1 removed:(BOOL)arg2 ;
-(void)actionsDidMove;
-(void)addVariableObserver:(id)arg0 ;
-(void)enumerateActionsInScopeAtIndex:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)invalidateActionOutputProviderCache;
-(void)invalidateActionsUsingShortcutInputVariableCache;
-(void)invalidateCache;
-(void)invalidateContentClassCache;
-(void)notifyContentClassesChanged;
-(void)notifyVariablesChanged;
-(void)populateActionOutputVariableActionsByUUID;
-(void)populateActionsUsingShortcutInputVariableCache;
-(void)populateCache;
-(void)removeVariableObserver:(id)arg0 ;
-(void)renameVariable:(id)arg0 to:(id)arg1 fromAction:(id)arg2 ;
-(void)updateShortcutInputVariableUsageForChangeInAction:(id)arg0 removed:(BOOL)arg1 ;


@end


#endif