// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIURL_H
#define SKUIURL_H

@class NSMutableDictionary, NSString, NSDictionary, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIURL : NSObject <NSCopying>

 {
    NSMutableDictionary *_queryDictionary;
}


@property (readonly, nonatomic) NSString *URLBagKey;
@property (readonly, nonatomic) NSString *actionString;
@property (readonly, copy, nonatomic) NSDictionary *queryStringDictionary;
@property (readonly, nonatomic) NSString *redeemCode;
@property (copy, nonatomic) NSString *referrerApplicationName; // ivar: _referrerApplicationName
@property (copy, nonatomic) NSString *referrerURLString; // ivar: _referrerURLString
@property (readonly, nonatomic) NSString *searchTerm;
@property (readonly, nonatomic) NSURL *underlyingURL; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_decodedQueryParameter:(id)arg0 ;
-(id)_queryDictionary;
-(id)_searchGroupForSearchKind:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 sourceApplication:(id)arg1 annotation:(id)arg2 ;
-(id)initWithURLBagKey:(id)arg0 ;
-(id)newURLRequest;
-(id)newURLRequestWithBaseURL:(id)arg0 ;
-(id)valueForQueryParameter:(id)arg0 ;


@end


#endif