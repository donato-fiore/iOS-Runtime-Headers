// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGALLERYSESSIONMANAGER_H
#define WFGALLERYSESSIONMANAGER_H

@class NSCache, CKContainer, NSString, CKDatabase, NSArray;

#import <Foundation/Foundation.h>


@interface WFGallerySessionManager : NSObject

@property (readonly, nonatomic) NSCache *bannerImageCache; // ivar: _bannerImageCache
@property (readonly, nonatomic) NSCache *collectionSearchCache; // ivar: _collectionSearchCache
@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) NSString *containerDescription;
@property (readonly, copy, nonatomic) NSString *currentIdiom; // ivar: _currentIdiom
@property (readonly, copy, nonatomic) NSString *currentRegion; // ivar: _currentRegion
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSCache *pageCache; // ivar: _pageCache
@property (readonly, nonatomic) BOOL performExpensiveFetchOperations; // ivar: _performExpensiveFetchOperations
@property (readonly, copy, nonatomic) NSArray *preferredLocalizations; // ivar: _preferredLocalizations
@property (readonly, nonatomic) NSCache *workflowCache; // ivar: _workflowCache
@property (readonly, nonatomic) NSCache *workflowSearchCache; // ivar: _workflowSearchCache


+(id)currentDeviceIdiom;
+(id)defaultPreferredLocalizations;
+(id)sharedManager;
-(BOOL)bannerIsRestricted:(id)arg0 ;
-(BOOL)collectionIsRestricted:(id)arg0 ;
-(BOOL)workflowIsRestricted:(id)arg0 ;
-(NSInteger)version;
-(id)collectionWithoutRestrictedContent:(id)arg0 ;
-(id)createItemRequest;
-(id)getImageForBanner:(id)arg0 size:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(id)getWorkflowForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithContainer:(id)arg0 preferredLocalizations:(id)arg1 currentRegion:(id)arg2 currentIdiom:(id)arg3 performExpensiveFetchOperations:(BOOL)arg4 ;
-(id)loadWorkflowInGalleryWorkflow:(id)arg0 completionHandler:(id)arg1 ;
-(id)pageWithoutRestrictedContent:(id)arg0 ;
-(id)preferredPageInPages:(id)arg0 preferredLanguages:(id)arg1 ;
-(id)queryFilterForTokenizedKey:(id)arg0 query:(id)arg1 ;
-(id)searchCollections:(id)arg0 completionHandler:(id)arg1 ;
-(id)searchUsingWebServicesForItem:(Class)arg0 query:(id)arg1 queryFilter:(id)arg2 completionHandler:(id)arg3 ;
-(id)searchWorkflows:(id)arg0 completionHandler:(id)arg1 ;
-(id)searchWorkflowsAndCollections:(id)arg0 completionHandler:(id)arg1 ;
-(id)sortAndFilterSearchResults:(id)arg0 query:(id)arg1 ;
-(id)unshareSharedShortcut:(id)arg0 completionHandler:(id)arg1 ;
-(id)updateItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)createBannerWithName:(id)arg0 detailPage:(id)arg1 iphone2xImage:(id)arg2 iphone3xImage:(id)arg3 ipadImage:(id)arg4 completionHandler:(id)arg5 ;
-(void)createCollection:(id)arg0 small2xImage:(id)arg1 large2xImage:(id)arg2 small3xImage:(id)arg3 large3xImage:(id)arg4 completionHandler:(id)arg5 ;
-(void)deleteBanner:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteCollection:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCollectionForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCollectionForPersistentIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCurrentUserIdentifierWithCompletionHandler:(id)arg0 ;
-(void)getHomeWithCompletionHandler:(id)arg0 ;
-(void)getHomeWithPreferredLanguages:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPageWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportWorkflow:(id)arg0 iCloudIdentifier:(id)arg1 reportReason:(id)arg2 reportMessage:(id)arg3 completionHandler:(id)arg4 ;
-(void)updateBanner:(id)arg0 withName:(id)arg1 detailPage:(id)arg2 iphone2xImage:(id)arg3 iphone3xImage:(id)arg4 ipadImage:(id)arg5 completionHandler:(id)arg6 ;
-(void)updateCollection:(id)arg0 small2xImage:(id)arg1 large2xImage:(id)arg2 small3xImage:(id)arg3 large3xImage:(id)arg4 completionHandler:(id)arg5 ;
-(void)updatePage:(id)arg0 withName:(id)arg1 banners:(id)arg2 collections:(id)arg3 completionHandler:(id)arg4 ;
-(void)updateWorkflow:(id)arg0 withName:(id)arg1 shortDescription:(id)arg2 longDescription:(id)arg3 workflow:(id)arg4 completionHandler:(id)arg5 ;
-(void)uploadWorkflow:(id)arg0 withName:(id)arg1 shortDescription:(id)arg2 longDescription:(id)arg3 private:(BOOL)arg4 completionHandler:(id)arg5 ;


@end


#endif