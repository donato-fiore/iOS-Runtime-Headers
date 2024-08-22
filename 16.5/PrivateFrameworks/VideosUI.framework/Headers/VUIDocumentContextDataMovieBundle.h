// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDOCUMENTCONTEXTDATAMOVIEBUNDLE_H
#define VUIDOCUMENTCONTEXTDATAMOVIEBUNDLE_H

@class NSString;


#import "VUIDocumentContextData.h"

@interface VUIDocumentContextDataMovieBundle : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *movieBundleID; // ivar: _movieBundleID


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithMovieBundleID:(id)arg0 ;
-(id)jsonData;


@end


#endif