// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDOCUMENTPREFETCHEDDATAMOREGAMES_H
#define VUIDOCUMENTPREFETCHEDDATAMOREGAMES_H

@class NSArray, NSString;


#import "VUIDocumentPreFetchedData.h"

@interface VUIDocumentPreFetchedDataMoreGames : VUIDocumentPreFetchedData

@property (retain, nonatomic) NSArray *excludedCanonicals; // ivar: _excludedCanonicals
@property (nonatomic) BOOL includeMultiviewButton; // ivar: _includeMultiviewButton
@property (nonatomic) BOOL isMultiviewPlayer; // ivar: _isMultiviewPlayer
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) BOOL playFromStart; // ivar: _playFromStart


-(id)jsonData;


@end


#endif