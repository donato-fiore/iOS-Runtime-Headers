// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKUTSNETWORKREQUESTOPERATION_H
#define WLKUTSNETWORKREQUESTOPERATION_H

@class NSDictionary;


#import "WLKNetworkRequestOperation.h"
#import "WLKURLRequestProperties.h"

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation {
    NSDictionary *_responseDictionary;
}


@property BOOL didHandleInvalidConfig; // ivar: _didHandleInvalidConfig
@property (nonatomic) NSUInteger environmentHash; // ivar: _environmentHash
@property (retain, nonatomic) WLKURLRequestProperties *requestProperties; // ivar: _requestProperties


-(id)init;
-(id)initWithRequestProperties:(id)arg0 ;
-(id)responseDictionary;
-(id)shortDescription;
-(void)configureSession;
-(void)handleResult:(id)arg0 error:(id)arg1 ;
-(void)prepareURLRequest:(id)arg0 ;
-(void)processResponse;


@end


#endif