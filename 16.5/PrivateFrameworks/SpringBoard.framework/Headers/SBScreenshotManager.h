// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCREENSHOTMANAGER_H
#define SBSCREENSHOTMANAGER_H

@protocol SBScreenshotManagerDataSource;

#import <Foundation/Foundation.h>

#import "_SBScreenshotPersistenceCoordinator.h"
#import "SBSceneManagerCoordinator.h"

@interface SBScreenshotManager : NSObject

@property (readonly, nonatomic) NSObject<SBScreenshotManagerDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic, getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:) _SBScreenshotPersistenceCoordinator *persistenceCoordinator; // ivar: _persistenceCoordinator
@property (retain, nonatomic, getter=_sceneManagerCoordinator, setter=_setSceneManagerCoordinator:) SBSceneManagerCoordinator *sceneManagerCoordinator; // ivar: _sceneManagerCoordinator


-(id)_fetchEligibleScreenshotProvidersForSnapshotting;
-(id)_initWithDataSource:(id)arg0 persistenceCoordinator:(id)arg1 sceneManagerCoordinator:(id)arg2 ;
-(id)_providerForScreen:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)saveScreenshots;
-(void)saveScreenshotsWithCompletion:(id)arg0 ;


@end


#endif