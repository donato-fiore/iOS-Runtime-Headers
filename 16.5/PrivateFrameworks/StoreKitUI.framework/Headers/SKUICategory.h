// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICATEGORY_H
#define SKUICATEGORY_H

@class NSURL, NSArray, NSString;
@protocol SKUIArtworkProviding;

#import <Foundation/Foundation.h>


@interface SKUICategory : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, nonatomic) NSObject<SKUIArtworkProviding> *artworkProvider; // ivar: _artworkProvider
@property (readonly, nonatomic) NSInteger categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *parentLabel; // ivar: _parentLabel


-(BOOL)containsURL:(id)arg0 ;
-(id)initWithCategoryDictionary:(id)arg0 ;
-(id)subcategoryContainingURL:(id)arg0 ;


@end


#endif