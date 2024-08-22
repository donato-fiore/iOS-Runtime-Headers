// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONDRAWERRESULTSCONTROLLER_H
#define WFACTIONDRAWERRESULTSCONTROLLER_H

@class WFActionRegistry, WFContextualActionSuggester, HMHome, WFWorkflow;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFActionDrawerResults.h"

@interface WFActionDrawerResultsController : NSObject

@property (readonly, nonatomic) WFActionRegistry *actionRegistry; // ivar: _actionRegistry
@property (readonly, nonatomic) WFContextualActionSuggester *actionSuggester; // ivar: _actionSuggester
@property (readonly, nonatomic) WFActionDrawerResults *cachedSiriSuggestionsResults; // ivar: _cachedSiriSuggestionsResults
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow


+(id)localizedAppNames;
-(BOOL)filteringForResidentCompatibleActions;
-(id)actions;
-(id)actionsForCategory:(id)arg0 ;
-(id)initWithActionRegistry:(id)arg0 home:(id)arg1 workflow:(id)arg2 actionSuggester:(id)arg3 ;
-(id)suggestedCategoriesForContentClasses:(id)arg0 ;
-(void)getContextualSuggestionsForCurrentActions:(id)arg0 completionHandler:(id)arg1 ;
-(void)getHomeSectionsIncludingRelatedActions:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getResultsForAllActionsWithCompletionHandler:(id)arg0 ;
-(void)getResultsForAllAppActionsWithCompletionHandler:(id)arg0 ;
-(void)getResultsForAppWithBundleIdentifier:(id)arg0 legacyIdentifier:(id)arg1 shouldFilterForAppsViewController:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)getResultsForCategory:(id)arg0 completionHandler:(id)arg1 ;
-(void)getResultsForFavorites:(id)arg0 ;
-(void)getResultsForSearchQuery:(id)arg0 includingSiriSuggestedResults:(id)arg1 completionHandler:(id)arg2 ;
-(void)getSiriSuggestedGroupedResultsRefreshingCache:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getSiriSuggestedResultsForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif