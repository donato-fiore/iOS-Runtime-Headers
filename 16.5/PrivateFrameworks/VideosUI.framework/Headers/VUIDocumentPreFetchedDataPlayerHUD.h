// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDOCUMENTPREFETCHEDDATAPLAYERHUD_H
#define VUIDOCUMENTPREFETCHEDDATAPLAYERHUD_H

@class NSString, NSArray;


#import "VUIDocumentPreFetchedData.h"

@interface VUIDocumentPreFetchedDataPlayerHUD : VUIDocumentPreFetchedData

@property (copy, nonatomic) NSString *canonicalId; // ivar: _canonicalId
@property (retain, nonatomic) NSArray *excludedCanonicals; // ivar: _excludedCanonicals
@property (nonatomic) BOOL includeMultiviewButton; // ivar: _includeMultiviewButton
@property (nonatomic) BOOL isMultiviewPlayer; // ivar: _isMultiviewPlayer
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSArray *multiviewIdentifiers; // ivar: _multiviewIdentifiers
@property (nonatomic) BOOL playFromStart; // ivar: _playFromStart
@property (copy, nonatomic) NSString *tabId; // ivar: _tabId


-(id)initWithDictionary:(id)arg0 ;
-(id)jsonData;


@end


#endif