// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCMODECONFIGURATIONREMOTESUGGESTIONCONTENTPROVIDER_H
#define NCMODECONFIGURATIONREMOTESUGGESTIONCONTENTPROVIDER_H

@class DNDModeConfiguration;


#import "NCRemoteSuggestionContentProvider.h"

@interface NCModeConfigurationRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider {
    NSUInteger _suggestionType;
    NSUInteger _scope;
    DNDModeConfiguration *_modeConfiguration;
}




+(id)_localizedSummaryStringForSuggestionType:(NSUInteger)arg0 configurationType:(NSUInteger)arg1 scope:(NSUInteger)arg2 semanticType:(NSInteger)arg3 modeName:(id)arg4 bundleDisplayName:(id)arg5 preferredSenderSummary:(id)arg6 localizedStringForKeyBlock:(id)arg7 ;
-(id)auxiliaryOptionActions;
-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 uuid:(id)arg4 suggestionType:(NSUInteger)arg5 scope:(NSUInteger)arg6 modeConfiguration:(id)arg7 ;
-(void)handleAcceptAction:(id)arg0 ;
-(void)handleRejectAction:(id)arg0 ;


@end


#endif