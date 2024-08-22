// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMPMENUDATASOURCE_H
#define VUIMPMENUDATASOURCE_H

@class NSDictionary, NSArray, NSString;
@protocol VUIMediaEntitiesFetchControllerDelegate, VUILibraryDataSourceDelegate, VUIDownloadDataSourceDelegate;


#import "VUILibraryMenuDataSource.h"
#import "VUIDownloadDataSource.h"
#import "VUILibraryFamilyMembersDataSource.h"
#import "VUIMediaEntitiesFetchController.h"
#import "VUIMediaLibrary.h"

@interface VUIMPMenuDataSource : VUILibraryMenuDataSource <VUIMediaEntitiesFetchControllerDelegate, VUILibraryDataSourceDelegate, VUIDownloadDataSourceDelegate>



@property (retain, nonatomic) NSDictionary *categoryTypeByFetchRequestIdentifier; // ivar: _categoryTypeByFetchRequestIdentifier
@property (retain, nonatomic) NSArray *categoryTypes; // ivar: _categoryTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIDownloadDataSource *downloadDataSource; // ivar: _downloadDataSource
@property (retain, nonatomic) VUILibraryFamilyMembersDataSource *familyDataSource; // ivar: _familyDataSource
@property (retain, nonatomic) NSArray *genreGroupings; // ivar: _genreGroupings
@property (nonatomic) BOOL hasDownloadDataSourceFetchCompleted; // ivar: _hasDownloadDataSourceFetchCompleted
@property (nonatomic) BOOL hasGenresDataForCheckHasItemsOption; // ivar: _hasGenresDataForCheckHasItemsOption
@property (nonatomic) BOOL hasMediaEntitiesFetchCompleted; // ivar: _hasMediaEntitiesFetchCompleted
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *homeShares; // ivar: _homeShares
@property (retain, nonatomic) NSDictionary *mediaEntitiesByCategoryType; // ivar: _mediaEntitiesByCategoryType
@property (retain, nonatomic) VUIMediaEntitiesFetchController *mediaEntitiesFetchController; // ivar: _mediaEntitiesFetchController
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) VUIMediaEntitiesFetchController *rentalsUpdateFetchController; // ivar: _rentalsUpdateFetchController
@property (readonly) Class superclass;


-(BOOL)_addOrRemoveDownloadCategoryIfNeeded;
-(BOOL)_addOrRemoveFamilySharingCategoryIfNeeded;
-(BOOL)_allFetchesHaveCompleted;
-(id)_categoryTypesWithMediaEntitiesMap:(id)arg0 categoryTypeComparator:(id)arg1 ;
-(id)_categoryTypesWithOptimizedMenuDataMap:(id)arg0 categoryTypeComparator:(id)arg1 ;
-(id)_constructCategoryList;
-(id)_deviceMediaLibrary;
-(id)_fetchRequestsWithMediaLibrary:(id)arg0 categoryTypeMap:(*id)arg1 isInitialFetch:(BOOL)arg2 ;
-(id)initWithValidCategories:(id)arg0 ;
-(void)_accountsChanged:(id)arg0 ;
-(void)_addAccountChangedNotificationObserver;
-(void)_addMediaLibraryNotificationObservers;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg0 ;
-(void)_addRentalsUpdateNotificationObserver;
-(void)_homeShareMediaLibrariesDidChange:(id)arg0 ;
-(void)_loadInitialMediaEntityShelves;
-(void)_loadMediaEntityShelvesWithInitialFetch:(BOOL)arg0 ;
-(void)_notifyDelegateFetchDidComplete;
-(void)_populateViewModelFromMeidaLibraryCategoryTypes:(id)arg0 ;
-(void)_refetchMediaEntityShelves;
-(void)_removeAccountChangedNotificationObserver;
-(void)_removeMediaLibraryNotificationObservers;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg0 ;
-(void)_removeRentalsUpdateNotificationObserver;
-(void)_updateFetchRequest:(id)arg0 isInitialFetch:(BOOL)arg1 ;
-(void)_updateRentalShelf;
-(void)controller:(id)arg0 fetchRequests:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)controller:(id)arg0 fetchRequests:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadedFetchDidFinishWithEntities:(id)arg1 ;
-(void)downloadManager:(id)arg0 downloadsDidChange:(id)arg1 ;
-(void)refetch;
-(void)startFetch;


@end


#endif