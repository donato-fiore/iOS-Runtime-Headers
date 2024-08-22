// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBGEOLOCATIONPOLICYDECIDER_H
#define UIWEBGEOLOCATIONPOLICYDECIDER_H

@class NSMutableDictionary, NSMutableArray, NSMapTable;

#import <Foundation/Foundation.h>


@interface UIWebGeolocationPolicyDecider : NSObject {
    NSMutableDictionary *_sites;
    NSMutableArray *_challenges;
    NSMapTable *_activeChallenges;
}




+(id)sharedPolicyDecider;
+(void)initialize;
-(BOOL)_getAuthorizationStatusForToken:(id)arg0 userVisibleDomain:(id)arg1 requestingURL:(id)arg2 promptInfo:(*id)arg3 ;
-(BOOL)_isAuthorizationDate:(id)arg0 inclusivelyBetweenDate:(id)arg1 andDate:(id)arg2 ;
-(BOOL)getAuthorizationStatusForOrigin:(id)arg0 requestingURL:(id)arg1 promptInfo:(*id)arg2 ;
-(NSInteger)_getChallengeCountFromHistoryForToken:(id)arg0 requestingURL:(id)arg1 ;
-(id)_siteFile;
-(id)_siteFileInContainerDirectory:(id)arg0 creatingIntermediateDirectoriesIfNecessary:(BOOL)arg1 ;
-(id)init;
-(void)_addChallengeCount:(NSInteger)arg0 forToken:(id)arg1 requestingURL:(id)arg2 ;
-(void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg0 requestingURL:(id)arg1 view:(id)arg2 listener:(id)arg3 ;
-(void)_executeNextChallenge;
-(void)_load;
-(void)_save;
-(void)clearAllCaches;
-(void)clearAuthorizationsAddedBetween:(id)arg0 and:(id)arg1 ;
-(void)clearCache;
-(void)clearSafariCache;
-(void)dealloc;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg0 requestingURL:(id)arg1 view:(id)arg2 listener:(id)arg3 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg0 requestingURL:(id)arg1 window:(id)arg2 listener:(id)arg3 ;
-(void)didAuthorizeGeolocationForPromptInfo:(id)arg0 ;
-(void)didDenyGeolocationForPromptInfo:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForGeolocationRequestFromOrigin:(id)arg1 frame:(id)arg2 listener:(id)arg3 ;


@end


#endif