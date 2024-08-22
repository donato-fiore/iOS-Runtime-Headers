// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDOCUMENTPREFETCHEDDATA_H
#define VUIDOCUMENTPREFETCHEDDATA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VUIDocumentPreFetchedData : NSObject

@property (copy, nonatomic) NSDictionary *prefetchedDataDict; // ivar: _prefetchedDataDict


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsonData;


@end


#endif