// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFBUNDLEDACTIONPROVIDER_H
#define WFBUNDLEDACTIONPROVIDER_H

@class NSSet;


#import "WFActionProvider.h"

@interface WFBundledActionProvider : WFActionProvider

@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;


-(id)actionDefinitionsWithIdentifiers:(id)arg0 ;
-(id)availableActionIdentifiers;
-(id)bundledURL;
-(id)cacheDirectoryURL;
-(id)cacheURL;
-(id)createActionWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 fallbackToMissing:(BOOL)arg3 isForLocalization:(BOOL)arg4 ;
-(id)createAllAvailableActions;
-(id)createAllAvailableActionsForLocalization;
-(id)createAllAvailableActionsIncludingMissingActions:(BOOL)arg0 ;
-(id)currentVersion;
-(void)createActionsForRequests:(id)arg0 ;
-(void)deleteCache;
-(void)updateCache:(id)arg0 ;


@end


#endif