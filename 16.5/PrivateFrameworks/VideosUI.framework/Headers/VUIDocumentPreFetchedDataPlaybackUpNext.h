// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDOCUMENTPREFETCHEDDATAPLAYBACKUPNEXT_H
#define VUIDOCUMENTPREFETCHEDDATAPLAYBACKUPNEXT_H

@class NSString, NSArray;


#import "VUIDocumentPreFetchedData.h"

@interface VUIDocumentPreFetchedDataPlaybackUpNext : VUIDocumentPreFetchedData

@property (copy, nonatomic) NSString *adamID; // ivar: _adamID
@property (nonatomic) BOOL canAutoPlay; // ivar: _canAutoPlay
@property (copy, nonatomic) NSArray *excludedCanonicals; // ivar: _excludedCanonicals
@property (copy, nonatomic) NSString *host; // ivar: _host
@property (nonatomic) BOOL isLiveStream; // ivar: _isLiveStream
@property (nonatomic) BOOL isPostPlay; // ivar: _isPostPlay
@property (copy, nonatomic) NSString *productID; // ivar: _productID
@property (nonatomic) BOOL refetchUpNextData; // ivar: _refetchUpNextData
@property (copy, nonatomic) NSString *showID; // ivar: _showID
@property (nonatomic) BOOL updateEvent; // ivar: _updateEvent


-(id)jsonData;


@end


#endif