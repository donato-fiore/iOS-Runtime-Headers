// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHOMEMANAGER_H
#define WFHOMEMANAGER_H

@class NSString, NSHashTable, HMHomeManager, NSArray;
@protocol HMHomeManagerDelegate, WFApplicationStateObserver, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface WFHomeManager : NSObject <HMHomeManagerDelegate, WFApplicationStateObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSHashTable *eventObservers; // ivar: _eventObservers
@property (readonly, nonatomic) BOOL hasLoadedHomes; // ivar: _hasLoadedHomes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) NSArray *homes; // ivar: _homes
@property (readonly, nonatomic) NSArray *homesToWhichWeCanAddHomeAutomations;
@property (readonly, nonatomic) NSArray *homesToWhichWeHaveAdminAccess;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *loadHomesGroup; // ivar: _loadHomesGroup
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly, nonatomic) NSUInteger status;
@property (readonly) Class superclass;


+(id)cachedHomeSceneNames;
+(id)sharedManager;
-(id)homeNamed:(id)arg0 ;
-(id)homeWithIdentifier:(id)arg0 ;
-(id)init;
-(id)primaryHome;
-(id)sceneNamed:(id)arg0 inHome:(id)arg1 ;
-(id)serviceWithIdentifier:(id)arg0 inHome:(id)arg1 ;
-(void)addEventObserver:(id)arg0 ;
-(void)applicationContext:(id)arg0 applicationStateDidChange:(NSInteger)arg1 ;
-(void)cacheHomeSceneNames;
-(void)dealloc;
-(void)ensureHomesAreLoadedWithCompletionHandler:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)reloadData;
-(void)removeEventObserver:(id)arg0 ;


@end


#endif