// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIJSMEDIASOCIALAUTHOR_H
#define SKUIJSMEDIASOCIALAUTHOR_H

@class NSString, NSArray, NSDictionary;
@protocol SKUIJSMediaSocialAuthor;

#import <Foundation/Foundation.h>

#import "SKUIMediaSocialAuthor.h"

@interface SKUIJSMediaSocialAuthor : NSObject <SKUIJSMediaSocialAuthor>

 {
    SKUIMediaSocialAuthor *_mediaSocialAuthor;
}


@property (readonly, nonatomic) NSString *dsId;
@property (readonly, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) NSString *entityType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *permissions;
@property (readonly, nonatomic) NSDictionary *storePlatformData;


-(id)initWithSKUIMediaSocialAuthor:(id)arg0 ;


@end


#endif