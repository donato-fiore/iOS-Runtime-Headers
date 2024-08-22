// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAENTITIESDATASOURCE_H
#define VUIMEDIAENTITIESDATASOURCE_H

@class NSDictionary, NSArray;


#import "VUILibraryDataSource.h"
#import "VUIMediaEntityFetchRequest.h"

@interface VUIMediaEntitiesDataSource : VUILibraryDataSource

@property (retain, nonatomic) NSDictionary *artworkInfoDictionaryByPurchaseID; // ivar: _artworkInfoDictionaryByPurchaseID
@property (retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (retain, nonatomic) NSArray *grouping; // ivar: _grouping
@property (retain, nonatomic) NSArray *mediaEntities; // ivar: _mediaEntities
@property (nonatomic) BOOL shouldAutoFetchArtworkInfoDictionaries; // ivar: _shouldAutoFetchArtworkInfoDictionaries
@property (nonatomic) BOOL shouldPauseAutoFetchingArtworkInfoDictionaries; // ivar: _shouldPauseAutoFetchingArtworkInfoDictionaries


-(id)initWithFetchRequest:(id)arg0 ;


@end


#endif