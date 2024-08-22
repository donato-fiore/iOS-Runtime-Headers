// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMPMEDIAENTITIESDATASOURCE_H
#define VUIMPMEDIAENTITIESDATASOURCE_H

@class NSString, NSOrderedSet, NSArray;
@protocol VUIMediaEntitiesFetchControllerDelegate;


#import "VUIMediaEntitiesDataSource.h"
#import "VUIMediaEntitiesFetchController.h"
#import "VUIMediaLibrary.h"

@interface VUIMPMediaEntitiesDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate>

 {
    BOOL _shouldPauseAutoFetchingArtworkInfoDictionaries;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *fetchController; // ivar: _fetchController
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger inFlightArtworkRequests; // ivar: _inFlightArtworkRequests
@property (retain, nonatomic) NSOrderedSet *mediaEntitiesSet; // ivar: _mediaEntitiesSet
@property (retain, nonatomic) NSArray *mediaEntitiesToFetch; // ivar: _mediaEntitiesToFetch
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (nonatomic) _NSRange requestedRange; // ivar: _requestedRange
@property (readonly) Class superclass;


-(BOOL)shouldPauseAutoFetchingArtworkInfoDictionaries;
-(id)_getPurchaseHistoryIdsFromMediaEntities:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(id)initWithMediaLibrary:(id)arg0 fetchRequest:(id)arg1 ;
-(void)_fetchArtworkInfoIfNecessary;
-(void)_loadImageUrlsByPurchaseHistoryIds:(id)arg0 ;
-(void)controller:(id)arg0 fetchRequests:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)controller:(id)arg0 fetchRequests:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)setShouldPauseAutoFetchingArtworkInfoDictionaries:(BOOL)arg0 ;
-(void)startFetch;


@end


#endif