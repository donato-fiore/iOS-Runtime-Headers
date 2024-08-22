// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDOCUMENTCONTEXTDATATVSHOW_H
#define VUIDOCUMENTCONTEXTDATATVSHOW_H

@class NSString;


#import "VUIDocumentContextData.h"

@interface VUIDocumentContextDataTVShow : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *episodeID; // ivar: _episodeID
@property (readonly, copy, nonatomic) NSString *showID; // ivar: _showID


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithShowID:(id)arg0 episodeID:(id)arg1 ;
-(id)jsonData;


@end


#endif