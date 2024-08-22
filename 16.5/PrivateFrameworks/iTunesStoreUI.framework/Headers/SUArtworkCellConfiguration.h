// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUARTWORKCELLCONFIGURATION_H
#define SUARTWORKCELLCONFIGURATION_H

@class NSMutableDictionary, NSMutableArray, NSString, NSNumber;
@protocol ISStoreURLOperationDelegate;


#import "SUArrayCellConfiguration.h"

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate>

 {
    NSMutableDictionary *_artworkByURL;
    NSMutableArray *_artworkLoadOperations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) Class superclass;


+(id)copyDefaultContext;
-(id)_artworkImageForURL:(id)arg0 dataProvider:(id)arg1 ;
-(id)artworkImageForItemImage:(id)arg0 ;
-(id)artworkImageForURL:(id)arg0 ;
-(id)copyImageDataProvider;
-(void)cancelArtworkRequests;
-(void)dealloc;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)reloadAfterArtworkLoad;
-(void)setRepresentedObject:(id)arg0 ;


@end


#endif