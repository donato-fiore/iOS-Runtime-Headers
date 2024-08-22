// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIURLRESOLVERRESPONSE_H
#define SKUIURLRESOLVERRESPONSE_H

@class NSHTTPURLResponse, NSData;

#import <Foundation/Foundation.h>


@interface SKUIURLResolverResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse; // ivar: _response
@property (readonly, nonatomic) NSData *data; // ivar: _data


-(id)initWithData:(id)arg0 URLResponse:(id)arg1 ;


@end


#endif